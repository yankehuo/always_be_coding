#include <assert.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdlib>
#include <ctime>

// swap two numbers in vector
template<typename T>
void swapNumber(std::vector<T>& vec, int i, int j) {
	vec[i] = vec[i] + vec[j];
	vec[j] = vec[i] - vec[j];
	vec[i] = vec[i] - vec[j];
}
// compare two numbers
template<typename T>
bool compare(T a, T b) {
	return a < b;
}

// 
template<typename T>    // absolute right because we use STL
void rightMethod(std::vector<T>& vec){

	sort(vec.begin(), vec.end(), compare<T>);
	//    sort(vec.begin(), vec.end(), std::less<T>()); // official
}

// bubble sort
template<typename T>
void bubbleSort(std::vector<T>& vec) {

	int length = vec.size();
	if (length < 2) {
		return;
	}

	for (int i = length - 1; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			if (vec[j] > vec[j + 1]) {
				swapNumber(vec, j, j + 1);
			}
		}
	}
}
// select sort
template<typename T>
void selectSort(std::vector<T>& vec) {

	int length = vec.size();
	if (length < 2) {
		return;
	}
	for (int i = 0; i < length - 1; ++i) {

		int minIndex = i;
		for (int j = i + 1; j < length; ++j) {
			minIndex = vec[j] < vec[minIndex] ? j : minIndex;   // find min
		}
		if (i != minIndex) {
			swapNumber(vec, i, minIndex);
		}
	}
}
// insert sort
template<typename T>
void insertSort(std::vector<T>& vec) {
	int length = vec.size();
	if (length < 2) {
		return;
	}
	for (int i = 1; i < length; ++i) {
		for (int j = i - 1; j >= 0 && vec[j] > vec[j + 1]; --j) {
			swapNumber(vec, j, j + 1);
		}
	}
}

template<typename T>
void generateRandomVector(std::vector<T>& vec, int maxSize, T minValue, T maxValue) {
	assert(maxValue > minValue);    // assert
	srand((unsigned int)time(nullptr)); // include<ctime>
	int size = rand() % maxSize + 1;  // [1, maxsize]
	vec = std::vector<T> (size, -1);   //initialization with -1
	for(auto it = vec.begin(); it != vec.end(); ++it) {
		*it = rand() % (maxValue - minValue) + minValue + 1; // [minvalue + 1, maxValue]
	}
	return;
}

template<typename T>
bool isEqual(std::vector<T>& vec1, std::vector<T>& vec2) {
	if (vec1.size() != vec2.size()) {
		return false;
	} else {
		return equal(vec1.begin(), vec1.end(), vec2.begin());   // STL equal
	}
	return true;
}

template<typename T>
void copyVector(std::vector<T>& vec1, std::vector<T>& vec2) {
	if (!vec2.size()) {
		// copy the vec2 to the vec1
		return;
	}
	vec1 = vec2;
}
// input the vector
template<typename T>
void inputVector(std::vector<T>& vec) {
	int data;
	std::cin >> data;
	vec.push_back(data);
	while(std::cin.get() != '\n') {

		std::cin >> data;
		vec.push_back(data);
	}
}

template<typename T>
void display(std::vector<T>& vec) {
	for (auto it: vec) {
		std::cout << it << ",";
	}
	std::cout << "\n";
}

template<typename T> // here we use different functional pointer
void testAlgorithm(void (*sortFunc) (std::vector<T>&)) {
	int testCount(100000);    // epoch
	int maxSize(10);    // max size of the vector
	int minValue(-100);  // min value
	int maxValue(100);     // maxvalue
	bool successFlag(true); // flag
	std::clock_t startTime, endTime;

	startTime = std::clock();   // start clock
	for (int i = 0; i < testCount; ++i) {
		std::vector<int> vec1, vec2, vec3;
		generateRandomVector(vec1, maxSize, minValue,maxValue); // generate random vector
		copyVector(vec2, vec1);
		copyVector(vec3, vec1); // help to show
		rightMethod(vec1);  // absolute right algorithm
		sortFunc(vec2);   // we want to test the algorithm

		if (!isEqual(vec1, vec2)) {
			successFlag = false;    // something wrong
			display(vec3);
			break;
		}
		// clean the usage of the vector, std::vector<T> ().swap()
		std::vector<int> ().swap(vec1);
		std::vector<int> ().swap(vec2);
		std::vector<int> ().swap(vec3);

	}
	if (successFlag) {
		std::cout << "Nice!" << std::endl;
	} else {
		std::cout << "There may be something wrong!" << std::endl;
	}
	endTime = std::clock();
	std::cout << "Total usage is: " << (endTime - startTime) / double(CLOCKS_PER_SEC) << 's' << std::endl;
}

//std::vector<>
int main() {
	//    testAlgorithm(bubbleSort<int>); // bullle sort
	//    testAlgorithm(selectSort<int>);   // select sort
	testAlgorithm(insertSort<int>); // insert sort
	//    std::vector<int> arr;
	//    inputVector(arr);
	//    std::cout << "before sort: ";
	//    display(arr);
	//    std::cout << "after sort: ";
	//    insertSort(arr);
	//    display(arr);
	return 0;
}

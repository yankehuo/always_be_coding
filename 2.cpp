class Solution {
public:
	ListNode* formatList(ListNode* head) {
		if (!head->next)
			return head;

		ListNode *n1 = head;
		ListNode *n2 = head->next;
		ListNode *n1head = head;
		ListNode *n2head = head->next;

		while (n2 && n2->next) {
			n1->next = n1->next->next;
			n1 = n1->next;
			n2->next = n2->next->next;
			n2 = n2->next;
		}
		n1->next = nullptr;
		//n2->next = nullptr;
		ListNode *newhead = reverse(n1head);
		n1head->next = n2head;
		return newhead;
	}
private:
	ListNode *reverse(ListNode *node) {
		ListNode *cur = node;
		ListNode *pre = nullptr;
		while (cur) {
			ListNode *tmp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
		}
		return pre;
	}

};


class Solution {
public:
	long long ans(vector<int>& array, int k) {
		int n = array.size(); 
		long long res = 0;
		//unordered_map<int, vector<int>> kv;
		map<int, vector<int>> kv;
		for (int i = 0; i < n; ++i) {
			int target = k - array[i];
			auto it = kv.lower_bound(target + 1);
			if (it != kv.end() && it->first <= target) {
				auto 
				int tmp = 
				res += it->second.size();
			}
			kv[array[i]].push_back(i);

		}
		return res;
	}
};


class Solution {
public:
	long long ans(vector<int>& array, int k) {
		int n = array.size(); 
		long long res = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (array[i] + array[j] <= k) {
					++res;
				}
			}
		}
		return res;
	}
}
class Solution {
public:
	long long ans(vector<int>& array, int k) {
		std::sort(array.begin(), array.end());
		int n = array.size(); 
		long long res = 0;
		for (int i = 0; i < n; ++i) {
			int left = i + 1, right = n - 1;
			while (left < right) {
				int mid = left + (right - left + 1) / 2;
				if (array[mid] <= k - array[i]) {
					left = mid;
				}
				else {
					right = mid - 1;
				}
			}
			res += left - i;
		}
		return res;
	}
};


class Solution {
public:
	long long minimum(vector<int>& a) {
		int n = a.size();
		vector<long long> presum(n + 1);
		for (int i = 1; i <= n; ++i) {
			presum[i] = presum[i - 1] + a[i - 1];
		}
		long long sum = presum[n];

	}
};


class Solution {
public:
	long long minimum(vector<int>& a) {
		// sum / 2 ?
		int n = a.size();
		// min diff --> the latest sum / 2
		vector<long long> presum(n + 1);
		for (int i = 1; i <= n; ++i) {
			presum[i] = presum[i - 1] + a[i - 1];
		}
		long long sum = presum[n];
		int left = 1, right = 0;
		int cursum = 0;
		long long res = sum;
		while (right <= n) {
			cursum = presum[right + 1] - presum[left];
			if (cursum < sum / 2) {
				++right;
			}
			else {
				++left;
			}
			res = min(res, abs(sum - 2 * cursum));
		}
		return res;
	}
};

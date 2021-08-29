#include <iostream>
using namespace std;
// design single list
// int getAtIndex(int index); 
// void addAtIndex(int index, int val); 
// void delAtIndex(int index);

struct Node {
    int val;
    Node *next;
    Node(int _val, Node *_next) : val(_val), next(_next) {}
    Node(int _val) : Node(_val, nullptr) {}
};

class MyLinkedList {
private:
    Node *head_, *tail_; // for add at tail
    int size_;
public:
    MyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}
    ~MyLinkedList() {
        Node *node = head_;
        while (node) {
            Node *todel = node;
            node = node->next;
            delete todel;
        }
        head_ = nullptr;
        tail_ = nullptr;
    }

    void addAtIndex(int index, int val) {
        // 在index前添加节点
        if (index < 0 || index > size_) return;
        if (index == 0) return addAtHead(val);
        if (index == size_) return addAtTail(val);
        Node dummy(0, head_);
        Node *pre = &dummy;
        while (index--) {
            pre = pre->next;
        } 
        pre->next = new Node(val, pre->next);
        ++size_;
    }
    void addAtHead(int val) {
        head_ = new Node(val, head_);
        if (size_ == 0) tail_ = head_;
        ++size_;
    }
    void addAtTail(int val) {
        Node *node = new Node(val);
        if (size_ == 0) {
            head_ = tail_ = node;
            // ++size_;
        }
        else {
            tail_->next = node;
            tail_ = tail_->next;
            // ++size_;
        }
        ++size_;
    }

    int getAtIndex(int index) {
        // 0 1 2 ... size_-1
        if (index < 0 || index >= size_) return -1;
        Node *node = head_;
        while (index--) {
            node = node->next;
        }
        return node->val;
    }

    void delAtIndex(int index) {
        if (index < 0 || index >= size_) return;
        Node dummy(0, head_);
        Node *pre = &dummy;
        for (int i = 0; i < index; ++i) {
            pre = pre->next;
        }
        Node *todel = pre->next;
        pre->next = pre->next->next;
        if (index == 0) head_ = pre->next;
        if (index == size_ - 1) tail_ = pre;
        delete todel;
        --size_;
    }
};

int main() {
    int arr[4] = {0, 1, 2, 3};
    MyLinkedList *hlink = new MyLinkedList();
    hlink->addAtIndex(0, arr[0]);
    hlink->addAtIndex(1, arr[1]);
    hlink->addAtIndex(2, arr[2]);
    hlink->addAtIndex(3, arr[3]);
    for (int i = 0; i < 4; ++i) {
        cout << hlink->getAtIndex(i) << " ";
    }
    cout << endl;
    delete hlink;

    return 0;
}

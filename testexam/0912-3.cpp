#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *getMid(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *mid = slow->next;
    slow->next = nullptr;
    return mid;
}

ListNode *reverseList(ListNode *head) {
    ListNode *pre = nullptr;
    ListNode *cur = head;
    while (cur) {
        ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

void mergeList(ListNode *l1, ListNode *l2) {
    ListNode *t1 = nullptr, *t2 = nullptr;
    while (l1 && l2) {
        t1 = l1->next;
        t2 = l2->next;
        l1->next = l2;
        l1 = t1;
        l2->next = l1;
        l2 = t2;
    }
}

int main() {
    string s;
    getline(cin, s);
    vector<int> nums;
    for (int i = 0; i < s.size(); ++i) {
        if (!isdigit(s[i])) continue;
        int val = 0;
        while (i < s.size() && isdigit(s[i])) {
            val = val * 10 + s[i] - '0';
            ++i;
        }
        nums.push_back(val);
    }
    if (nums.size() == 0) {
        cout << "error" << endl;
        return 0;
    }
    
    ListNode *head = new ListNode(nums[0]);
    ListNode *cur1 = head;
    for (int i = 1; i < nums.size(); ++i) {
        cur1->next = new ListNode(nums[i]);
        cur1 = cur1->next;
    }
    
    ListNode *mid = getMid(head);
    ListNode *node = reverseList(mid);
    mergeList(head, node);
    ListNode *cur = head;
    cout << "[";
    while (cur) {
        if (!cur->next) {
            cout << cur->val;
        }
        else {
            cout << cur->val << ",";
        }
        cur = cur->next;
    }
    cout << "]";


    return 0;
}
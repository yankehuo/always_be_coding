#include <bits/stdc++.h>
class Solution {
public:
	ListNode* reverseAmong(ListNode* head, int left, int right) {
		ListNode *t1 = head;
		while (left > 0) {
			t1 = t1->next;
			--left;
		}
		ListNode *t2 = head;
		while (right-- > 0) {
			t2 = t2->next;
		}
		auto pa1 = reverse(head, t1);
		ListNode *nhead = pa1.first;
		pa1.second->next = t1;
		ListNode *tmp = t2;
		auto pa2 = reverse(t2, nullptr);
		tmp->next = pa2.first;
		return nhead;
	}
private:
	pair<ListNode*, ListNode*> reverse(ListNode *node1, ListNode *node2) {
		ListNode *pre = nullptr;
		ListNode *cur = node1;
		while (cur != node2) {
			// ListNode *tmp = cur;
			cur->next = pre;
			pre = cur;
			cur = cur->next;
		}
		return {pre, node1};
	}
};



class Solution {
public:
	int FindWinner(vector<int>& candidates, int k) {
		int len = candidates.size();
		priority_queue<pair<int, int>> pq;
		unordered_map<int, int> kv;
		deque<int> dq(candidates.beign(), candidates.end());
		while (pq.top() < k) {
			//for (int i = 0; i <= 1; ++i) {
				int cnt = 0;
				if (dq[1] < dq[0]) {
					swap(dq[0], dq[1]);
				}
				int tmp = dq[0];
				dq.pop_front();
				dq.push_back(tmp);
				++kv[dq[0]];
				pq.push({kv[dq[0]], dq[0]});
				
			//}
		}
		return pq.top().second;
	}
};


class Solution {
public:
		/**
		 *      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
		 *           *
		 *                * 
		 *                     * @param tiles int整型vector 
		 *                          * @return int整型
		 *                               */
		int MaxGroupCount(vector<int>& tiles) {
			int len = tiles.size();
			if (len < 3) return 0;
			sort(tiles.begin(), tiles.end());
			int left = 0;
			int cnt = 0;
			for (int right = 0; right < len - 2; ) {
				if (check(tiles, right)) {
					++cnt;
					right = right + 3;
				}
				else {
					++right;
				}
			}
			return cnt;
		}
private:
		bool check(vector<int> &tiles, int idx) {
			return (tiles[i] == tiles[i + 1] && tiles[i + 1] == tiles[i + 2]) || ((tiles[i + 1] - tiles[i]) == 1 && (tiles[i + 2] - tiles[i + 1]) == 1);

		}
}

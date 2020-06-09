/*************************************************************************
	> File Name: 19.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:07:09 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || !head->next) return NULL;
        ListNode* p = head, *q = head;
        for (int i = 0; i < n; i++) {
            p = p->next;
        }
        if (!p) {
            return head->next;
        }
        while (p->next) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return head;
    }
};

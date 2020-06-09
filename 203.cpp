/*************************************************************************
	> File Name: 203.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:13:14 PM CST
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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return head;
        ListNode *phead = new ListNode(0);
        phead->next = head;
        head = phead;
        ListNode *p = head;
        while (p->next) {
            if (p->next->val == val) {
                p->next = p->next->next;
            } else p = p->next;
        }
        return head->next;
    }
};

/*************************************************************************
	> File Name: 206.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:14:20 PM CST
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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *phead = new ListNode(0);
        phead->next = head;
        head = phead;
        ListNode *p = head->next, *q;
        head->next = NULL;
        while (p) {
            q = p->next;
            p->next = head->next;
            head->next = p;
            p = q;
        }
        return head->next;
    }
};

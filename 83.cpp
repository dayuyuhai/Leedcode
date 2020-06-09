/*************************************************************************
	> File Name: 83.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:07:58 PM CST
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p = head, *q = head;
        while (p->next) {
            while (p->val == q->val && q->next) q = q->next;
            if (p->val == q->val) p->next = NULL;
            else {
                p->next = q;
                p = p->next;
            }
        }
        return head;
    }
};

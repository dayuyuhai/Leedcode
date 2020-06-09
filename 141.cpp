/*************************************************************************
	> File Name: 141.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:08:57 PM CST
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
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        ListNode *p = head, *q = head;
        while (p->next && p->next->next) {
            p = p->next->next;
            q = q->next;
            if (p == q) return true;
        } 
        return false;
    }
};

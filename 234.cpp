/*************************************************************************
	> File Name: 234.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:15:23 PM CST
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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode *p = head;
        int cnt = 0;
        while (p) {
            p = p->next;
            cnt++;
        }
        p = head;
        for (int i = 1; i < cnt / 2; i++) {
            p = p->next;
        }
        ListNode *q = p->next;
        if (cnt & 1) q = q->next;
        p->next = NULL;
        ListNode* head2 = new ListNode(0);
        head2->next = NULL;
        while (q) {
            p = q->next;
            q->next = head2->next;
            head2->next = q;
            q = p;
        }
        p = head;
        q = head2->next;
        while (p) {
            if (p->val != q->val) return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }
};

/*************************************************************************
	> File Name: 24.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:03:59 PM CST
 ************************************************************************/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p = head, *q = head->next, *tmp, *pre;
        p->next = q->next;
        q->next = p;
        head = q;
        while (q) {
            if (!p->next || !p->next->next) break;
            pre = p;
            p = p->next;
            q = p->next;
            p->next = q->next;
            q->next = p;
            pre->next = q;
        }
        return head;
    }
};

/*************************************************************************
	> File Name: 24-1.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 08:07:59 PM CST
 ************************************************************************/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode ret, *p, *q;
        ret.next = head;
        p = &ret;
        q = head;
        while (q && q->next) {
            p->next = q->next;
            q->next = p->next->next;
            p->next->next = q;
            p = q;
            q = q->next;
        }
        return ret.next;
    }
};

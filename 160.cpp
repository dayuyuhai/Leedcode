/*************************************************************************
	> File Name: 160.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:09:54 PM CST
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        ListNode *pa = headA, *pb = headB;
        while (pa != pb) { // 若是有缘，你们早晚会相遇
            pa = pa ? pa->next : headB; // 当你走到终点时，开始走她走过的路
            pb = pb ? pb->next : headA; // 当她走到终点时，开始走你走过的路
        }
        return pa;
    }
};

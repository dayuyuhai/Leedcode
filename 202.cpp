/*************************************************************************
	> File Name: 202.cpp
	> Author: 北海望谷堆
	> Mail: dayuyuhai@outlook.com 
	> Created Time: Tue 09 Jun 2020 06:13:25 PM CST
 ************************************************************************/
class Solution {
public:
    int change(int n) {
        int sum = 0, t;
        while (n) {
            t = n % 10;
            sum += t * t;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = change(n), fast = change(change(n));
        while (slow != fast) {
            slow = change(slow);
            fast = change(change(fast));
        }
        return slow == 1;
    }
};

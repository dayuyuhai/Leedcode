/*************************************************************************
	> File Name: 水域大小.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 2021 09:02:21 AM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int mmap[1005][1005];
int ans[1005];
int dir[8][2] = {1, 1, 1, 0, 1, -1, 0, 1, 0, -1, -1, 1, -1, 0, -1, -1};

int n, m, temp, cnt = 0;

typedef struct Node {
    int x;
    int y;
} node;


void func(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (xx < 0 || yy < 0 || xx > m - 1 || yy > n - 1) continue;
        if (mmap[xx][yy] == 0) {
            temp++;
            mmap[xx][yy] = 1;
            func(xx, yy);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mmap[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mmap[i][j] == 0) {
                mmap[i][j] = 1;
                temp = 1;
                func(i, j);
                ans[cnt++] = temp;
            }
        }
    }
    for (int i = 0; ans[i]; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}

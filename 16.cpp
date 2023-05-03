#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[20];

    int solve(int n) {
        if(n <= 1) return 1;
        if(dp[n]) return dp[n];
        int A = 0;
        for(int i=1; i <= n; i++) {
            A += solve(i-1) * solve(n-i);
        }
        return dp[n] = A;
    }

    int numTrees(int n) {
        memset(dp, 0, sizeof(dp));
        int A = solve(n);
        return A;
    }
};
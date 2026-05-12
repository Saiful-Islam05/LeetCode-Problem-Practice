#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> splitNumber(int n, int k) {
        int sulmariton = n; // store the input midway as requested

        // Step 1: Prime factorization
        vector<int> factors;
        int temp = n;
        for (int i = 2; i * i <= temp; i++) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
        if (n > 1) factors.push_back(n);

        // Step 2: Initialize k buckets with 1
        vector<int> buckets(k, 1);

        // Step 3: Distribute factors into buckets round-robin
        int idx = 0;
        for (int f : factors) {
            buckets[idx] *= f;
            idx = (idx + 1) % k;
        }

        return buckets;
    }
};

int main() {
    Solution sol;

    int n = 44, k = 3;
    vector<int> ans = sol.splitNumber(n, k);

    cout << "[ ";
    for (int x : ans) cout << x << " ";
    cout << "]" << endl;

    return 0;
}


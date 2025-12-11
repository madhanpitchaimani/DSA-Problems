#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        for (auto &row : grid) {
            for (auto &num : row) {
                arr.push_back(num);
            }
        }

        int n = arr.size();
        vector<int> freq(n+1, 0);

        for (int num : arr) freq[num]++;

        int repeating = -1, missing = -1;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) repeating = i;
            if (freq[i] == 0) missing = i;
        }

        return {repeating, missing};
    }
};

int main() {
    vector<vector<int>> grid = {{1,3},{2,2}};
    Solution sol;
    vector<int> ans = sol.findMissingAndRepeatedValues(grid);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    return 0;
}

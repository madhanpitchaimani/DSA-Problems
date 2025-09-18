#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "YES" << endl;
                return 0;   // stop program after finding a pair
            }
        }
    }
    cout << "NO" << endl;
}


//print index value

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  // return indices, not values
                }
            }
        }
        return {}; // return empty if no solution
    } 
};

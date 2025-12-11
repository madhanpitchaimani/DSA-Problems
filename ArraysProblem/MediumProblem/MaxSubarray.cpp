#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {

        currentSum = currentSum + nums[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum = " << maxSubArray(nums);
}

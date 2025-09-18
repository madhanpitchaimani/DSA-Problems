#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Step 1: Count 0s, 1s, 2s
    for (int n : nums) {
        if (n == 0) count0++;
        else if (n == 1) count1++;
        else count2++;
    }

    // Step 2: Overwrite nums
    int i = 0;
    while (count0--) nums[i++] = 0;  // put all 0s
    while (count1--) nums[i++] = 1;  // put all 1s
    while (count2--) nums[i++] = 2;  // put all 2s
}

int main() {
    vector<int> nums = {2,0,2,1,1,0};

    sortColors(nums);

    for (int n : nums) cout << n << " ";
    return 0;
}












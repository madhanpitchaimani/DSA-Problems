#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < arr.size(); right++) {

        sum += arr[right];

        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 6;

    cout << longestSubarrayWithSumK(arr, k);
}

// o/p
//4

//	Counting frequencies of array elements

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 10};
    unordered_map<int, int> freq;

    // Normal for loop instead of range-based
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;  // increment count
    }

    // Print result (unchanged)
    /*freq is an unordered_map<int,int>   
      Each element of an unordered_map is a pair:

       it.first → the key (the element from the array)
       it.second → the value (the frequency count)
       auto it automatically detects the type pair<const int,int>
    So this loop goes through each key-value pair in the hash map and prints it.*/
    
    for (auto it : freq) {
        cout << it.first << " → " << it.second << " times\n";
    }

    return 0;
}
//output
/*10 → 3 times
20 → 2 times
30 → 1 times
*/
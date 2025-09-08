#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // Optimization: if no swaps → array already sorted
        if (!swapped) break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
/*Difference Explained
1️⃣ With j < n - i - 1

Each outer loop pass (i) guarantees the last i elements are already sorted (because the largest numbers “bubble up” to the end).

So we don’t need to compare them again.

This saves comparisons.

👉 Example:
If n = 5, on each pass:

i=0 → j < 4 (check 4 pairs)

i=1 → j < 3 (check 3 pairs)

i=2 → j < 2 (check 2 pairs)

i=3 → j < 1 (check 1 pair)

i=4 → loop ends

So total comparisons = 10, instead of 20.

2️⃣ With j < n - 1

Every pass compares all adjacent pairs, even though the last part is already sorted.

This still sorts correctly but does extra, unnecessary work.

Time complexity remains O(n²), but it’s less efficient.

👉 Example:
If n = 5, every pass does 4 comparisons.

Pass 1: 4 comparisons

Pass 2: 4 comparisons

Pass 3: 4 comparisons

Pass 4: 4 comparisons

Total = 16 comparisons instead of 10.

✅ Conclusion

j < n - i - 1 → optimized, avoids re-checking the sorted part.

j < n - 1 → still works, but wastes time.

⚡ So, if you’re learning the concept, both are fine.
But if you want an efficient Bubble Sort, always use j < n - i - 1.


Case 1: Optimized (j < n - i - 1)
Outer Loop i = 0

j=0: (5,1) → swap → [1,5,4,2]

j=1: (5,4) → swap → [1,4,5,2]

j=2: (5,2) → swap → [1,4,2,5]
✔ 3 comparisons

Outer Loop i = 1

j=0: (1,4) → no swap

j=1: (4,2) → swap → [1,2,4,5]
✔ 2 comparisons

Outer Loop i = 2

j=0: (1,2) → no swap
✔ 1 comparison

Outer Loop i = 3

loop ends

👉 Total comparisons = 6

❌ Case 2: Without optimization (j < n - 1)
Outer Loop i = 0

j=0: (5,1) → swap → [1,5,4,2]

j=1: (5,4) → swap → [1,4,5,2]

j=2: (5,2) → swap → [1,4,2,5]
✔ 3 comparisons

Outer Loop i = 1

j=0: (1,4) → no swap

j=1: (4,2) → swap → [1,2,4,5]

j=2: (4,5) → no swap
✔ 3 comparisons

Outer Loop i = 2

j=0: (1,2) → no swap

j=1: (2,4) → no swap

j=2: (4,5) → no swap
✔ 3 comparisons

Outer Loop i = 3

j=0: (1,2) → no swap

j=1: (2,4) → no swap

j=2: (4,5) → no swap
✔ 3 comparisons

👉 Total comparisons = 12*/
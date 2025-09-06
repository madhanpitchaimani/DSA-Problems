#include <iostream>
using namespace std;

void printHello(int n) {
    if (n == 0)  // base case
        return;

    cout << "Hello" << endl;  // do something

    printHello(n - 1); // recursive call with smaller problem
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    printHello(N); // call recursive function
    return 0;
}

// ascending order 

#include <iostream>
using namespace std;

void printAscending(int n) {
    if (n == 0) return;        // base case
    printAscending(n-1);     // recursive call
    cout << n << " ";          // printing
}

int main() {
    printAscending(10);
    return 0;
}


//descending order

#include <iostream>
using namespace std;

void printAscending(int n) {
    if (n == 0) return;        // base case
    printAscending(n-1);     // recursive call
    cout << n << " ";          // printing
}

int main() {
    printAscending(10);
    return 0;
}

//Factorial

#include <iostream>
using namespace std;

int factorial(int n) {
    //When you call a function recursively, each function call gets its own copy of variables
    //and stays in memory (the call stack) until it finishes.
    if (n == 0 || n == 1) return 1;    // Base case
    return n * factorial(n - 1);       // Recursive case
}

int main() {
    int N = 5;
    cout << "Factorial of " << N << " = " << factorial(N) << endl;
    return 0;
}

//Fibonacci numbers

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;   // Base case
    if (n == 1) return 1;   // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int N = 10;
    cout << "Fibonacci series up to " << N << " terms: ";
    for (int i = 0; i < N; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
/*fibonacci(5) = fibonacci(4) + fibonacci(3)

fibonacci(4) = fibonacci(3) + fibonacci(2)
fibonacci(3) = fibonacci(2) + fibonacci(1)
fibonacci(2) = fibonacci(1) + fibonacci(0)
fibonacci(1) = 1
fibonacci(0) = 0
fibonacci(2) = 1 + 0 = 1
fibonacci(3) = 1 + 1 = 2
fibonacci(4) = 2 + 1 = 3
fibonacci(5) = 3 + 2 = 5
*/
// o/p : 0 1 1 2 3 5 8 13 21 34

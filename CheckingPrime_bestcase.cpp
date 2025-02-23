#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;  // 2 and 3 are prime

    if (n % 2 == 0 || n % 3 == 0) return false;  // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {  
        if (n % i == 0 || n % (i + 2) == 0) return false;  
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
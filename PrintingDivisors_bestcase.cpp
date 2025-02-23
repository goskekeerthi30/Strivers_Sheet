#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printDivisors(int n) {
    vector<int> largeDivisors; // Store large divisors to print in sorted order
    cout << "Divisors of " << n << " are: ";
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " "; // Print the smaller divisor
            
            if (i != n / i) {
                largeDivisors.push_back(n / i); // Store the larger divisor
            }
        }
    }

    // Print the stored large divisors in sorted order
    for (int i = largeDivisors.size() - 1; i >= 0; i--) {
        cout << largeDivisors[i] << " ";
    }
    
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    printDivisors(num);
    return 0;
}
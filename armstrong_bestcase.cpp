#include <iostream>
#include <cmath>  // For pow()
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    
    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Compute sum of digits^d
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is NOT an Armstrong number.\n";

    return 0;
}
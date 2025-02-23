#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isArmstrongNumber(int num) {
    string numStr = to_string(num);  // Convert number to string
    int digits = numStr.length();
    int sum = 0;

    // Calculate the sum of digits raised to the power of the number of digits
    for (char ch : numStr) {
        int digit = ch - '0';  // Convert char to int
        sum += pow(digit, digits);  // Add the digit raised to the power of the number of digits
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrongNumber(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
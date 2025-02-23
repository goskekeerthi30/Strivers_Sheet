#include <iostream>
using namespace std;

long long reverseNumber(long long n) {
    long long reversed = 0;
    
    while (n != 0) {
        int digit = n % 10;  // Extract last digit
        reversed = reversed * 10 + digit; // Append to reversed number
        n /= 10;  // Remove last digit
    }
    
    return reversed;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Reversed Number: " << reverseNumber(num) << endl;
    return 0;
}
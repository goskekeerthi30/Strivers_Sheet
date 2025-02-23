#include <iostream>
#include <algorithm>  // For reverse()
using namespace std;

long long reverseUsingString(long long n) {
    string numStr = to_string(n); // Convert number to string
    reverse(numStr.begin(), numStr.end()); // Reverse the string
    return stoll(numStr); // Convert back to number
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Reversed Number: " << reverseUsingString(num) << endl;
    return 0;
}
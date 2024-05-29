#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
    
    cout << "Enter a three-digit number: ";
    cin >> number;
    
    if (number < 100 || number > 999) {
        cout << "The number is not a three-digit number." << endl;
        return 1;
    }
    
    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    
    cout << "The number reversed is: " << reversedNumber << endl;
    
    return 0;
}

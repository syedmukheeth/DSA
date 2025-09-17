#include <iostream>
using namespace std;
//Find first and last digit of a number and their sum
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Edge case: if the number is 0, both digits are 0
    if (num == 0) {
        cout << "First digit: 0" << endl;
        cout << "Last digit: 0" << endl;
        cout << "Sum = 0" << endl;
        return 0;
    }

    num = abs(num); // Handle negative numbers

    int lastDigit = num % 10; // 🔚 Last digit (from right)

    // 🔝 Find first digit (from left)
    int firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}

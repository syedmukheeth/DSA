#include <iostream>
//#include <cmath> // Optional: For abs() 
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    num = abs(num); // Handle negative inputs (e.g., -1234)

    int evenSum = 0; // Sum of even digits
    int oddSum = 0;  // Sum of odd digits

    while (num != 0) {
        int digit = num % 10; // Extract last digit

        if (digit % 2 == 0) {
            evenSum += digit; // Even digit
        } else {
            oddSum += digit;  // Odd digit
        }

        num /= 10; // Remove the last digit
    }
    cout<<"The sum of even digits: "<<evenSum<<endl;
    cout<<"The sum of odd digits: "<<oddSum<<endl;

    int diff = abs(evenSum - oddSum); // Positive difference

    cout << "Difference between even and odd digit sums: " << diff << endl;

    return 0;
}

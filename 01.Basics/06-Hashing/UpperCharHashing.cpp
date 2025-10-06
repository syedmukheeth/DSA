#include <bits/stdc++.h>
using namespace std;

int main() {
    // Step 1: Declare a string to store input
    string s;
    cin >> s; // Read the input string from the user

    // Step 2: Declare an array 'hash' of size 26 to store frequency of uppercase letters 'A' to 'Z'
    int hash[26] = {0}; // Initialize all elements to 0

    // Step 3: Traverse the string to count occurrences of uppercase characters
    for(int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) { // Check if the character is an uppercase letter
            hash[s[i] - 'A']++; // Increment frequency at the correct index ('A' → 0, 'B' → 1, etc.)
        }
    }

    // Step 4: Read the number of queries
    int q;
    cin >> q;

    // Step 5: Process each query
    while(q--) {
        char c;
        cin >> c; // Read the character to query

        // Step 6: Check if the input character is uppercase
        if (isupper(c)) {
            // If it is uppercase, fetch its frequency from the hash array and print it
            cout << hash[c - 'A'] << endl;
        } else {
            // If it's not uppercase, frequency is considered 0
            cout << 0 << endl;
        }
    }

    return 0; // End of program
}

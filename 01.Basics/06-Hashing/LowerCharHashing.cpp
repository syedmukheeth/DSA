#include <bits/stdc++.h>
using namespace std;

int main() {
    // Step 1: Declare a string to store input
    string s;
    cin >> s; // Read the input string from the user

    // Step 2: Declare an array 'hash' of size 26 to store frequency of lowercase letters 'a' to 'z'
    int hash[26] = {0}; // Initialize all elements to 0

    // Step 3: Traverse the string to count occurrences of lowercase characters
    for(int i = 0; i < s.size(); i++) {
        if (islower(s[i])) { // Check if the character is a lowercase letter
            hash[s[i] - 'a']++; // Increment frequency at the correct index ('a' → 0, 'b' → 1, etc.)
        }
    }

    // Step 4: Read the number of queries
    int q;
    cin >> q;

    // Step 5: Process each query
    while(q--) {
        char c;
        cin >> c; // Read the character to query

        // Step 6: Check if the input character is lowercase
        if (islower(c)) {
            // If it is lowercase, fetch its frequency from the hash array and print it
            cout << hash[c - 'a'] << endl;
        } else {
            // If it's not lowercase, frequency is considered 0
            cout << 0 << endl;
        }
    }

    return 0; // End of program
}

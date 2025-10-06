#include <bits/stdc++.h>
using namespace std;

// Function to count occurrences of a character in the array
int count_occurrences(int n, char arr[], char target) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cnt++;  // Increase count when character matches
        }
    }
    return cnt;
  }

// --------------Hashing------------------

int main() {
    // Declare a string variable 's' to store the input string
    string s;
    cin >> s; // Read the input string from the user

    // Precompute the frequency of each character in the string
    // We use an array 'hash' of size 256 to cover all ASCII characters
    int hash[256] = {0}; // Initialize all elements to 0
    for(int i = 0; i < s.size(); i++) {
        // For each character in the string, increment its count in the hash array
        hash[s[i]]++;
    }

    // Read the number of queries
    int q;
    cin >> q;
    while(q--) { // Repeat for each query
        char c;
        cin >> c; // Read the character whose frequency needs to be checked
        // Fetch the frequency from the precomputed 'hash' array and print it
        cout << hash[c] << endl;
    }
    
    return 0; // End of the program
}


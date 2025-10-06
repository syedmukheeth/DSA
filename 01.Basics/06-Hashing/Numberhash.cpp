#include <bits/stdc++.h>
using namespace std;

// Function 1: Brute-force way to count occurrences
int count_occurrences(int n, int arr[], int target) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cnt++;
        }
    }
    return cnt;
}

// --------------Hashing------------------

int main() {
    // Step 1: Read the size of the array
    int n;
    cin >> n;
    
    // Step 2: Declare an array to store 'n' elements
    int arr[n];
    
    // Step 3: Input the elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 4: Precompute the frequency of each element using hashing
    // Here, assuming the values are between 0 and 12, so we use hash[13]
    int hash[13] = {0};  // Initialize all elements to 0
    
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;  // Count occurrences of each number
    }

    // Step 5: Process queries
    int q;
    cin >> q;  // Read number of queries

    while(q--) {
        int number;
        cin >> number;  // Read the number to check frequency for
        
        // Step 6: Fetch and output the frequency from the hash table
        cout << hash[number] << endl;
    }

    return 0;
}



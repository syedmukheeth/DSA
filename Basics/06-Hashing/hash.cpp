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

// Function 2: Precompute frequency array for integers (small range)
void precompute_array(int n, int arr[], int hash[], int size) {
    for (int i = 0; i < size; i++) {
        hash[i] = 0;  // initialize
    }
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
}

// Function 3: Fetch frequency from hash array
int fetch_array(int hash[], int index) {
    return hash[index];
}

// Function 4: Precompute frequency array for characters
void precompute_char(string s, int hash[]) {
    for (int i = 0; i < 26; i++) {
        hash[i] = 0; // initialize
    }
    for (char c : s) {
        hash[c - 'A']++;
    }
}

// Function 5: Fetch frequency from char hash array
int fetch_char(int hash[], char c) {
    return hash[c - 'A'];
}

// Function 6: Precompute using unordered_map (general case)
void precompute_map(int n, int arr[], unordered_map<int, int>& mpp) {
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
}

// Function 7: Fetch frequency from unordered_map
int fetch_map(unordered_map<int, int>& mpp, int key) {
    return mpp[key]; // returns 0 if key not present
}

// Function to display map content (for understanding how it stores elements)
void display_map(unordered_map<int, int>& mpp) {
    cout << "Map contents:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }
}

// Main driver function
int main() {
    // ---------------- Brute-force occurrence counting ----------------
    cout << "Brute-force occurrence counting:\n";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int target;
    cin >> target;
    cout << "Occurrences of " << target << ": " << count_occurrences(n, arr, target) << "\n\n";

    // ---------------- Precompute with array ----------------
    cout << "Precompute with array:\n";
    int size = 1000; // Adjust size according to problem constraints
    int hash_array[size];
    precompute_array(n, arr, hash_array, size);
    
    cin >> target;
    cout << "Occurrences of " << target << ": " << fetch_array(hash_array, target) << "\n\n";

    // ---------------- Precompute with characters ----------------
    cout << "Precompute with characters:\n";
    string s;
    cin >> s;
    int char_hash[26];
    precompute_char(s, char_hash);
    
    char ch;
    cin >> ch;
    cout << "Occurrences of " << ch << ": " << fetch_char(char_hash, ch) << "\n\n";

    // ---------------- Precompute with unordered_map ----------------
    cout << "Precompute with unordered_map:\n";
    unordered_map<int, int> mpp;
    precompute_map(n, arr, mpp);
    
    display_map(mpp); // Show how it stores elements
    
    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << "Occurrences of " << num << ": " << fetch_map(mpp, num) << endl;
    }

    return 0;
}

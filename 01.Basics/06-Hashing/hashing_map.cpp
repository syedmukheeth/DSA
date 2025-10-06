#include <bits/stdc++.h>  
using namespace std;

int main() {
    int n;
    cin >> n;   // Input size of array

    int arr[n];
    // Taking array input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // ----------------------------
    // Step 1: Pre-computation (Hashing)
    // We use a map<int,int> to count frequency of each element
    // Key   -> number from array
    // Value -> how many times it appears
    // ----------------------------
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;   // increment frequency of arr[i]
    }

     // Iterate over the map and print all frequencies
    // map stores keys in sorted order
    cout << "Frequencies of all elements:" << endl;
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }


    // ----------------------------
    // Step 2: Answer Queries
    // For each query, we are given a number
    // We just print its frequency using the map
    // ----------------------------
    int q;
    cin >> q;   // number of queries

    while (q--) {
        int number;
        cin >> number;   // query number

        // fetch frequency from map
        cout << mpp[number] << endl;
    }

    return 0;  // end of program
}

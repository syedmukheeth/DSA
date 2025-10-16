//brute

#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates using a set (Brute Force)
int removeDuplicatesBrute(int arr[], int n) {
    set<int> st; // stores unique elements in sorted order

    // Insert all elements into set
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    // Copy back unique elements from set to array
    int j = 0;
    for (int x : st) {
        arr[j++] = x;
    }

    return j; // j is the count of unique elements
}

int main() {
    int arr[] = {4, 2, 5, 2, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicatesBrute(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";

    cout << "\nUnique Count: " << k << endl;
    return 0;
}
------------------------------------------------------------------------------------------

//optimal

#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates from a sorted array (Optimal)
int removeDuplicatesOptimal(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0; // slow pointer (points to last unique element)

    for (int j = 1; j < n; j++) { // fast pointer
        if (arr[j] != arr[i]) { 
            i++;                // move slow pointer ahead
            arr[i] = arr[j];    // copy unique element
        }
    }

    return i + 1; // number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicatesOptimal(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";

    cout << "\nUnique Count: " << k << endl;
    return 0;
}


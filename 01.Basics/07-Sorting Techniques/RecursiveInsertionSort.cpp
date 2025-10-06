#include <bits/stdc++.h>
using namespace std;

// Helper function to insert last element into correct position
void insert(vector<int> &arr, int n) {
    int last = arr[n - 1];   // element to insert
    int j = n - 2;

    // Shift elements greater than last one step forward
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;  // place last in correct spot
}

// Recursive Insertion Sort
void insertionSortRecursive(vector<int> &arr, int n) {
    // Base case: array with 1 element is sorted
    if (n <= 1) return;

    // 🔁 Recursively sort first (n-1) elements
    insertionSortRecursive(arr, n - 1);

    // Insert nth element into correct position
    insert(arr, n);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 6};
    insertionSortRecursive(arr, arr.size());

    cout << "Insertion Sorted: ";
    for (int x : arr) cout << x << " ";
}

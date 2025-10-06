#include <bits/stdc++.h>
using namespace std;

// Recursive Bubble Sort
void bubbleSortRecursive(vector<int> &arr, int n) {
    // Base case: if array has 1 element, it's already sorted
    if (n == 1) return;

    // Perform one pass (bubble the largest element to the end)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // 🔁 Recursively sort remaining array of size (n-1)
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 6};
    bubbleSortRecursive(arr, arr.size());

    cout << "Bubble Sorted: ";
    for (int x : arr) cout << x << " ";
}

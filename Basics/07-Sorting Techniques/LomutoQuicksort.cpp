#include <bits/stdc++.h>
using namespace std;

// Partition using Lomuto Scheme (pivot = last element)
int partitionLomuto(vector<int> &arr, int low, int high) {
    int pivot = arr[high];   // pivot chosen as last element
    int i = low - 1;         // boundary for elements <= pivot

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {     // if element smaller than pivot
            i++;                   // move boundary
            swap(arr[i], arr[j]);  // swap into left part
        }
    }

    // finally place pivot in correct position
    swap(arr[i + 1], arr[high]);
    return i + 1;   // pivot index
}

// Quick Sort recursion
void quickSortLomuto(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partitionLomuto(arr, low, high);
        quickSortLomuto(arr, low, pi - 1);   // left side
        quickSortLomuto(arr, pi + 1, high);  // right side
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSortLomuto(arr, 0, arr.size() - 1);

    cout << "Sorted (Lomuto): ";
    for (int x : arr) cout << x << " ";
    return 0;
}

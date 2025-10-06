#include <bits/stdc++.h>
using namespace std;

// Partition using Hoare Scheme (pivot = first element)
int partitionHoare(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  // pivot chosen as first element
    int i = low;           
    int j = high;

    while (i < j) {
        // move i until element greater than pivot is found
        while (arr[i] <= pivot && i < high) i++;

        // move j until element smaller/equal to pivot is found
        while (arr[j] > pivot && j > low) j--;

        // if pointers haven't crossed, swap
        if (i < j) swap(arr[i], arr[j]);
    }

    // finally put pivot in correct position
    swap(arr[low], arr[j]);
    return j;   // pivot index
}

// Quick Sort recursion
void quickSortHoare(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partitionHoare(arr, low, high);
        quickSortHoare(arr, low, pi - 1);   // left side
        quickSortHoare(arr, pi + 1, high);  // right side
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSortHoare(arr, 0, arr.size() - 1);

    cout << "Sorted (Hoare): ";
    for (int x : arr) cout << x << " ";
    return 0;
}

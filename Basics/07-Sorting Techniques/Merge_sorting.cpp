#include <iostream>
#include <vector>
using namespace std;

// ========================
// Merge Function
// ========================
// Merges two sorted halves of the array into one sorted segment
// Left part: arr[low ... mid]
// Right part: arr[mid+1 ... high]
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;  // temporary array to store merged result

    int left = low;       // starting index of left subarray
    int right = mid + 1;  // starting index of right subarray

    // Step 1: Compare and merge elements from both halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);  // pick element from left
            left++;
        } else {
            temp.push_back(arr[right]); // pick element from right
            right++;
        }
    }

    // Step 2: Copy remaining elements from the left half (if any)
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Step 3: Copy remaining elements from the right half (if any)
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Step 4: Copy back sorted elements from temp[] to arr[]
    // Important: use (i - low) because temp starts at index 0
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// ========================
// Recursive Merge Sort Function
// ========================
void merge_sort(vector<int> &arr, int low, int high) {
    // Base case: when subarray has 1 or 0 elements, it's already sorted
    if (low >= high) return;

    int mid = (low + high) / 2; // find midpoint

    // Step 1: Sort left half
    merge_sort(arr, low, mid);

    // Step 2: Sort right half
    merge_sort(arr, mid + 1, high);

    // Step 3: Merge the two sorted halves
    merge(arr, low, mid, high);
}

// ========================
// Helper Function
// ========================
// This function is just a clean interface to call merge_sort
void mergeSort(vector<int> &arr, int n) {
    merge_sort(arr, 0, n - 1);
}

// ========================
// Driver Code (main function)
// ========================
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, n); // Call our merge sort

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}

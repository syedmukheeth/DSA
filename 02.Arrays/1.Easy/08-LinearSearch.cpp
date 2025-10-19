#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key) {
    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        // Compare each element with the key
        if (arr[i] == key) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Call the search function
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

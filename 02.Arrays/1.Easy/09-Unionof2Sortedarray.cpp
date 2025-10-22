//Brute Force Approach using Ordered Set
#include <bits/stdc++.h>
using namespace std;

// Function to find union of two arrays using ordered set
vector<int> unionOfArraysBrute(int arr1[], int n, int arr2[], int m) {
    set<int> unionSet;

    // Insert all elements of arr1 into the set
    for (int i = 0; i < n; i++)
        unionSet.insert(arr1[i]);

    // Insert all elements of arr2 into the set
    for (int i = 0; i < m; i++)
        unionSet.insert(arr2[i]);

    // Copy set elements into a vector
    vector<int> result;
    for (auto x : unionSet)
        result.push_back(x);

    return result;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3};
    int n = 5, m = 3;

    vector<int> result = unionOfArraysBrute(arr1, n, arr2, m);

    cout << "Union (Brute Force using set): ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}

//Optimal Approach for union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

// Function to find union of two sorted arrays
vector<int> sortedArrayUnion(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    // Traverse both arrays
    while (i < n1 && j < n2) {
        // Case 1: If a[i] <= b[j]
        if (a[i] <= b[j]) {
            // Insert only if it's not a duplicate
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        } 
        // Case 2: If b[j] < a[i]
        else {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements of a[]
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }

    // Add remaining elements of b[]
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};

    vector<int> result = sortedArrayUnion(a, b);

    cout << "Union of Sorted Arrays: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}

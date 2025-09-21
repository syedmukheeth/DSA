#include <bits/stdc++.h>

using namespace std;

// selection sort
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }
        int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }
}


// bubble sort 

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {          //pass counter: how many full scans we've done
        bool swapped = false;                  //optimization flag to stop early if array already sorted

        // inner loop: compare adjacent pairs up to the last unsorted element
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {        // if pair is out of order
                swap(arr[j], arr[j + 1]);     // swap adjacent elements
                swapped = true;               // mark that we did a swap this pass
            }
        }

        // if we didn't swap any elements in this pass, the array is already sorted
        if (!swapped) break;
    }
}


// insertion sort

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1;i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]= temp;
            j--;
            cout<<"runs";
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
        cin >> arr[i];
    // selection_sort(arr, n);

    // bubble_sort(arr,n);

    //insertion_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
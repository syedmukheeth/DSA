/*
QUESTION:-
Given an array Arr of size N, print second largest distinct element from an array.

Example:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
*/

/*
APPROACH
-> If the current element is larger than ‘large’ then update second_large and large variables
-> Else if the current element is larger than ‘second_large’ then we update the variable second_large.
-> Once we traverse the entire array, we would find the second largest element in the variable second_large.
*/

// CODE:-
int print2largest(int arr[], int n)
{
    int secondLargest = -1, largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    }
    return secondLargest;
}
//second smallest element in array
int print2smallest(int arr[], int n)
{
    int secondSmallest = -1, smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if ((arr[i] < secondSmallest && arr[i] != smallest) || (secondSmallest == -1 && arr[i] > smallest))
            secondSmallest = arr[i];
    }
    return secondSmallest;
}


// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(1)
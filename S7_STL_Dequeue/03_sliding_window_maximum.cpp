// maximum in all subarrays of size k.
// if array is of size n, then the number of subarrays is n-k+1

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

void printMaxK_naive(int arr[], int n, int k) // Efficiency : O(n^2)
{
    int maximum_number_of_sub_arrays = n - k + 1;
    for (int i = 0; i < maximum_number_of_sub_arrays; i++)
    {
        int max_number = arr[i];
        for (int j = i + 1; j < i + k; j++)
        {
            max_number = max(max_number, arr[j]);
        }
        cout << max_number << " ";
    }
}

void printMaxK_better(int arr[], int n, int k) // Efficiency :O(n)
{
    // create a deque, that will store indexes of array elements.
    //  the queue will store indexes of useful elements in every window and it will maintain decreasing order of values from front to rear in the dequeue.
    deque<int> qi(k);

    // process the first k elements( or window) of the array
    int i;
    for (i = 0; i < k; i++)
    {
        // for every element, the previous smaller elements are useless, so remove from the dequeue
        while (!qi.empty() && arr[i] >= arr[qi.back()])
        {
            // remove from rear
            qi.pop_back();
        }
        // add new element to the rear of the queue
        qi.push_back(i);
    }

    // process the rest of the elements i.e., from arr[k] to arr[n-1]
    for (; i < n; i++)
    {
        // the element at the front of thw queue is the largest element of previous window. print it.
        cout << arr[qi.front()] << " ";

        // Remove all the elements which are out of the window
        while (!qi.empty() && qi.front() <= i - k)
        {
            // remove from the front
            qi.pop_front();
        }
        // remove all the elements smaller than the currently being added (remove useless elements)
        while (!qi.empty() && arr[i] >= arr[qi.back()])
        {
            qi.pop_back();
        }

        // add current element at the rear of the qi
        qi.push_back(i);
    }
}

int main()
{
    int arr[]{10, 8, 5, 12, 15, 7, 6};
    int n = 7;
    int k = 3;
    // printMaxK_naive(arr, n, k);
    printMaxK_better(arr, n, k);
    return 0;
}
// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
//Merge Sort, IMO it's like bin_search
//It uses pivot ( mid ) and recursion
//To achieve their purpose
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int bin_search(int arr[], int l, int r, int k) 
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==k) return mid;
        if(arr[mid]>k) return bin_search(arr,l,mid-1,k);
        return bin_search(arr,mid+1,r,k);
    }
    return -1;
}
int binarysearch(int arr[], int n, int k)
{
    return bin_search(arr, 0, n - 1, k);
}
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarysearch(arr, n, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not present in array
    return -1;
}

int main()
{
	int n;
	cout<<"\n Enter size of the array = ";
	cin>>n;
    int arr[n], i, x;
	for(i=0; i<n; i++)
	{
		cout<<"\n enter the "<<i+1<<" element = ";
		cin>>arr[i];
	}
	
	sort(arr, arr + n);	// default function to sort the array in accending order
	
	cout<<"\n Enter element to be searched = ";
	cin>>x;
  
   	// Function call
   	int result = binarySearch(arr, 0, n-1, x);
   	if(result == -1)
   	cout << " Element is not present in array"<<endl;
   	else
	cout << " Element is present in the array "<<endl;
    return 0;
}


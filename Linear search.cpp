#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
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
	cout<<"\n Enter element to be searched = ";
	cin>>x;
  
   	// Function call
   	int result = search(arr, n, x);
   	if(result == -1)
   	cout << " Element is not present in array"<<endl;
   	else
	cout << " Element is present at position " <<result+1<<endl;
    return 0;
}


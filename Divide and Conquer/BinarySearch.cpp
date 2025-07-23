
#include <iostream>
using namespace std;
int binary_Search(int a[], int beg, int end, int val)
{
    int mid;
    if(end >= beg)
    {
        mid = (beg + end)/2;

        if(a[mid] == val)
        {
            return mid+1;
        }
        else if(a[mid] < val)
        {
            return binary_Search(a, mid+1, end, val);
        }
    else
        {
            return binary_Search(a, beg, mid-1, val);
        }
    }
    return -1;
}
int main() {

    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Arrays Element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value;
    cout<<"Search Value : ";
    cin>>value;

  int res = binary_Search(arr, 0, n-1, value);

  cout<<"The elements of the array are : ";
  for (int i = 0; i < n; i++)
  cout<<arr[i]<<" ";

  cout<<endl<<"Element to be searched is : "<<value;
  if (res == -1)
  cout<<endl<<"Element is not present in the array";
  else
  cout<<endl<<"Element is present at "<<res<<" position of array";
  return 0;
}

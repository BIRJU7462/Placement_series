#include<iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of an array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to find"<<endl;
    cin>>key;
    int ans = binary_search(arr,n,key);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}
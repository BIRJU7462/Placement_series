#include<iostream>
using namespace std;
#include<vector>
long long merge(long long arr[], int l, int mid, int r)
{
    long long inv = 0;
    long long n1 = mid - l + 1;
    long long n2 = r - mid;
    int a[n1];
    int b[n2];
    for(int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for(int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = 1;
    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            j++;
            k++;
        }
    }
    while(i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
        
    }
    return inv;
}
long long mergesort(long long arr[], int l, int r)
{
    long long inv = 0;
    if(l < r)
    {
        int mid = (l + r)/2;
        inv += mergesort(arr,l,mid);
        inv += mergesort(arr,mid+1,r);
        inv += merge(arr,l,mid,r);
    }
    return inv;
}
int main(){
    int l = 0;
    int n = 8;
    long long r = n - 1;
    long long arr[8] = {6,3,9,5,2,8,7,1};
    long long ans = mergesort(arr,l,r);
    return ans;
}
#include<iostream>
#include<cmath>
using namespace std;
// int main()
// {
//     cout<<"*********Welcome to an array**********"<<endl;
//     int life[10] = {1};
//     for(int i = 0; i < 10; i++)
//     {
//         cout<<"Value of life "<<i<<" is "<<life[i]<<endl;
//     }
// }
//find the maximum and minimum elements of an array
/*
int maximum(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int minimum(int arr[], int size)
{
    int mini = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{
    cout<<"Enter the size of an array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of an elements "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum elements is ";
    cout<<maximum(arr,n)<<endl;
    cout<<"The minimum elemnts is ";
    cout<<minimum(arr,n);

    return 0;
}

//find reverse of an array
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
     while(start <= end)
     {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
     }
}
int main()
{
    cout<<"Enter the size of an array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of an elements "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<<"Before the reverse "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    reverse(arr,n);
    cout<<endl;

    cout<<"After the reverse "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

}


//Alternate swapping 
void alternate(int arr[], int size)
{
    for(int i = 0; i < size; i = i+ 2)
    {
        if(i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    cout<<"Enter the size of an array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of an elements "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of an arrray befor alternative swapping ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    alternate(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
*/
//swapping first three or either first four
//void swapping_alternate(int arr[], int size)
// {
//     int i = 0;
//    int start = 0;
//    int end = 3;
//    while(i < end - 1 && start < size)
//    {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//     i++;
//    }


// }

//find the unique elements
int findUnique(int arr[], int size)
{
    int result = 0;
    int maxi = INT_MIN;
    for(int i =0; i < size; i++)
    {
       maxi = max(maxi, arr[i]);
    }
    int arr1[maxi + 1];
    for(int i = 1; i < maxi + 1; i++)
    {
        arr1[i] = 0;
    }
    for(int i = 0; i < size; i++)
    {
        arr1[arr[i]]++;
    }
    for(int i = 0; i < size; i++)
    {
        if(arr1[i] <= 1)
        {
            result = i;
        }
    }
    
    return result;
}
int main()
{
    cout<<"Enter the size of an array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of an elements "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  
    cout<<endl;
    int ans = findUnique(arr,n);
    cout<<ans<<endl;
}


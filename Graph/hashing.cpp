#include<iostream>
#include<map>
using namespace std;
int main()
{
    // string s;
    // cin>>s;

    // int arr[26] = {0};
    // for(int i = 0; i < s.size(); i++)
    // {
    //     arr[s[i] - 'a']++;
    // }

    // int q;
    // cin>>q;
    // while(q--)
    // { 
    //     char ch;
    //     cin>>ch;

    //     cout<< arr[ch - 'a']<<endl;
    // }

    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl;
    map <int, int> mpp;
    for(int i = 0;i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int a;
        cin>>a;
         cout<<mpp[a]<<" ";
    }
    cout<<endl;

       
    

    for(auto i : mpp)
    {
        cout<<i.first <<"->"<<i.second<<endl;
    }



}

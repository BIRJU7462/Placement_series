#include<iostream>
using namespace std;
int main()
{
    // int ans = 0;
    // int x = 7;
    // int i = 0;
    // while(x != 0)
    // {
    //     int bit = x & 1;
    //     ans = (bit * pow(10,i)) + ans;
    //     i++;
    //     x = x>>1;


    // }
    //     cout<<"answer is"<<ans<<endl;



      //convert decimal into binary;

      int n;
      cin>>n;
      int ans = 0;
      int i = 0;
      while(n != 0)
      {
        int digit = n % 10;
        if(digit == 1)
        {
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
      }
      cout<<"Answer is"<<ans<<endl;
}
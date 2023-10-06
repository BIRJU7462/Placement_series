#include<iostream>
using namespace std;
int check(int n)
{
int count = 0;
while(n != 0)
{
    if(n & 1)
    {
        count++;
    }
    n >> 1;
}
   return count;
}
int main()
{
// check given number is power of 2 or not

int n;
cin>>n;
int ans = check(n);
if(ans == 1)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}
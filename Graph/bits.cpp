#include<iostream>
using namespace std;
int main() {
	// Write your code here. 
	//convert number into binary number
   int num = 11;
	int n = 32;
	int arr[n];
	int i = 0;
	int count = 0;
	while(num != 0)
	{
		int x = num % 2;
        num = num / 2;
        arr[i] = x;  
	} 
	for(int i = n - 1; i >= 0; n--)
	{
		if(arr[i] & 1)
		{
			count++;
		}

	}
	return count;
}
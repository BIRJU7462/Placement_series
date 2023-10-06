#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    //& - this operator always contains the adress of the varibale
    cout << "The address of num is " << &num << endl;
    // for storing the value of adress we use pointer
    // here *p contains the address of of the varible num
    int *p = &num;
    cout << "The value of pointer p who contains the address of num is " << *p << endl;
    // if we want to print the value of p
    cout << "The value of p is " << p << endl;

    // if we want to print the size of the varible num and pointer then

    cout << "The size of the num is " << sizeof(num) << endl;
    cout << "The size of the pointer p is " << sizeof(p) << endl;

    // The size of the pointer is always 8 if the data type is int, char float, double....etc

    // This will print garbage  value
    // if we assign the value in *ptr that is *ptr = 0 then its gives  segmentation fault beacuse there is no memory which contains the adress 0.
    // int *ptr;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // we can also 
    /* 
    int i = 9;
    int *ptr = 0;
    ptr = &i;

    we can't
    int i = 9;
    int *ptr = 0;
    *ptr = &i;
    */


   //HOW TO COPY THE POINTER

   int a = 6;
   int *pt = &a;

   int *py = pt;
   cout<<a<<endl;
   cout<<pt<<" ----- "<<py<<endl;
   cout<<*pt<<" ----- "<<*py<<endl;

cout<<"*****************************************************"<<endl;
   //pointer part2
   int arr[4] = {2,5,7,9};
   cout<<"Address of the arr is "<<arr<<endl;
   //if we want to print address of third elements then

   cout<<"Address of third elements is "<<arr + 1<<endl;
   cout<<*(arr + 3) + 2<<endl;

}
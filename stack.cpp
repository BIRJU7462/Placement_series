#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int x)
    {
        size = x;
        arr = new int[size];
        top = -1;
    }
    void push(int x)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack is overflow " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow condition" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top <= size)
        {
            int x = arr[top];
            return x;
        }
        else
        {
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(5);
    st.push(6);
    st.push(8);
    st.push(1);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout<<st.empty();
}
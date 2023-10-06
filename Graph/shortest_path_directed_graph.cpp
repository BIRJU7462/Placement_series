#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* data;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        data = new T[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] data;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(T value) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        data[top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty we cant delete more elements" << endl;
        
        }
        T value = data[top];
        top--;
        cout<<"Pop elements is "<<value<<endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        
        }
        cout<<"Top elements is" <<data[top]<<endl;
    }
};

int main() {
    Stack<int> s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.peek();

    return 0;
}

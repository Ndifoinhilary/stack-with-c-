#include <iostream>
using namespace std;

class Stack
{
private:
    int arrstack[5];
    int top;

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arrstack[i] = 0;
        }
    }
    bool IsEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool IsFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if (IsFull())
        {
            cout << "Stack OverFlow " << endl;
        }
        else
        {
            top++;
            arrstack[top] = val;
        }
    }
    int pop()
    {
        if (IsEmpty())
        {
            cout << "The stack is Empty" << endl;
        }
        else
        {
            int retval = arrstack[top];
            arrstack[top] = 0;
            top--;
            return retval;
        }
    }
    int count()
    {
        int cnt;
        cnt = top + 1;
        return cnt;
    }
    int Peek(int pos)
    {
        if (IsEmpty())
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            return arrstack[pos];
        }
    }
    void change(int pos, int val)
    {
        arrstack[pos] = val;
        cout << "The value has been changed in the position " << pos << endl;
    }
    void display()
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << arrstack[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(5);
    s1.push(19);
    s1.push(12);
    s1.push(11);
    s1.push(20);
   
    s1.change(2,22);
    s1.display();
    cout << "The top value in the stack " << s1.pop() << endl;
    s1.display();
    cout << "The total number of elements " << s1.count() << endl;
    cout << "The value in the 3rd position " << s1.Peek(3) << endl;
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

class stack
{
   //properties
   public:
   int *arr;
   int top;
   int size;

   //behavoir
   stack(int size)
   {
    this -> size =size;
    arr = new int[size];
    top = -1;
   }

   void push(int element)
   {
    if (size-top>1)
    {
        top++;
        arr[top] = element;
    }

    else{
        cout<<"stack overflow"<<endl;
    }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    stack<int>st;
    st.push(22);
    st.push(23);

    cout<<st.top();

    return 0;

}
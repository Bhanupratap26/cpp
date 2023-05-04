#include<bits/stdc++.h>
using namespace std;

class Queue {
    int*arr;
    int qfront = 0;
    int rear = 0;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0; 
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear)
        {
            return true;
        }
        else{
            return false;
        }
    }
}

int main()
{
    //create a queue
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

     stack<int> s;
    while(!q.isEmpty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    while(!s.Empty())
    {
        int ele = s.top();
        s.pop();
        q.push(ele);
        
    }
    
     q;


 return 0;
}
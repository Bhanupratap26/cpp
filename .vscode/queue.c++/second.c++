https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=1


#include <bits/stdc++.h> 
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

    void enqueue(int data) {
      if (rear == size) {
        cout << "queue is full" << endl;
      }
       else {
        arr[rear] = data;
        rear++;
      }
    }

    int dequeue() {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
             arr[qfront] = -1;
             qfront++;
             if(qfront ==  rear)
             {
                 qfront = 0;
                 rear = 0;
             }
             return ans;
        }
    }

    int front() {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
        
    }
};
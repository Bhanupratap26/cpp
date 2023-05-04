#include<bits/stdc++.h>
using namespace std;

int main()
{
    //create a queue
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    cout<<"front element"<<q.front()<<endl;
    cout<<"size"<<q.size()<<endl;

    q.pop();

    cout<<"size"<<q.size()<<endl;

   if( q.empty())
    {cout<<"yes"<<endl;}
    else
    {cout<<"stack is not empty"<<endl;}


  return 0;

}
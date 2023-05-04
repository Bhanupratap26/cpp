#include<bits/stdc++.h>
using namespace std;


queue<int> modify_queue(queue<int> q, int k)
{
    stack<int> s;

    for(int i=0 ; i<k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while(!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t =q.size()-1;

    while(t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);

    }

    return q;


}

int main()

{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

     modify_queue(q, 3);

return 0;


}
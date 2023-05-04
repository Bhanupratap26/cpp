#include <bits/stdc++.h>
using namespace std;



void insert_at_bottom(stack<int>&st , int ele)
{
      if(st.empty())
    {
        st.push(ele);
        return ;
    }
    int topi = st.top();
    st.pop();
    insert_at_bottom(st,ele);

    st.push(topi);
}


void reverse(stack<int> &st)
{
    if(st.empty())
    {
        return ;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,ele);


}


int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}
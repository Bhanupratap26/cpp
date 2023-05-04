#include<iostream>
#include<stack>
using namespace std;



/*

int main()
{
    string str = "pratap" ;
    stack<char> s;
    for(int i = 0; i<str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    } 

    string ans = "";
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop(); 

    }
}
*/

void reversesentence(string s)
{
    stack<string> st;

    for(int i =0 ; i< s.length() ; i++)
    {
        string word = "";
        while(s[i]!=' '&& i<s.length())
        {
            word+=s[i];
            i++;

        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}


int main()
{
    string s =" hey , how are you doing";
    reversesentence(s);

    return 0;

}
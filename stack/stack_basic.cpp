#include<iostream>
#include<stack>
using namespace std;

int main()

{
    //creation of stack
    stack<int> s;



//push operation
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(7);

cout<<"size -> "<<s.size()<<endl;
cout<<"top -> "<<s.top()<<endl;

cout<<"\n";


 /*s.pop();
 cout<<"2nd time after pop"<<endl;
cout<<"print top element : "<<s.top()<<endl;
cout<<"size : "<<s.size()<<endl;


if(s.empty())
{
    cout<<"stack is empty"<<endl;
}

else{
    cout<<"stack is not empty"<<endl;
}


return 0;

}



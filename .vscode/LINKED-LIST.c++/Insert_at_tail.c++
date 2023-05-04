#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;


    //constructor 
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};



void print(Node*&head)
{
    Node*tem = head;

    while(tem!=NULL)
    {
        cout<<tem -> data<<" -->  ";
        tem = tem->next;
    }
    cout<<endl;
}

void insert_at_tail(Node*tail,int d)
{
    Node*temp = new Node(d);
    tail -> next = temp;
    tail = temp; 
}

 
int main()
{
    Node*node1 = new Node(34);
    //cout<<node1 -> data<<endl;
     //cout<<node1 -> next<<endl;

Node*head = node1;
Node*tail = node1;
print (head);

insert_at_tail(tail,42);
print(head);


insert_at_tail(tail,62);
print(head);

insert_at_tail(tail,48);
print(head);

return 0;
    }
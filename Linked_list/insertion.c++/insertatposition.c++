#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}



void InsertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    // or we can also write tail = tail --> next
}



void insertatposition(Node* &head,int position,int d)
{
    /*
      if(position==1)
      {
        InsertAtHead(head,d)
      }
    
    */


    Node*temp = head;
    int count = 1;

    while(count<position - 1)
    {
        temp = temp -> next;
        count++;

    
    }

    /*
    insert at last position
    if(temp -> next == NULL)
    {
      InsertAtTail(tail,d);
      return 0;
    }
    */

    Node*insert = new Node(d);
    insert -> next = temp -> next;
    temp -> next = insert;

   

}



void print(Node* &head)
{
    Node*temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data<<" --> ";
        temp = temp->next;
    }
    cout<<endl;
}



int main()
{
    
    Node*one = new Node(22);
    Node*two = new Node(23);
    Node*third = new Node(24);
    Node*four = new Node(26);
    Node*five = new Node(27);

    one -> next = two;
    two -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = NULL;

    print(one);
    insertatposition(one,4,25);

    print(one);


}
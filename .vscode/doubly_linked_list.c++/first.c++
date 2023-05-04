#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
   int data;
   Node*next;
   Node*prev;

   Node(int d)
   {
    this -> data = d;
    this -> next = NULL;
    this ->prev = NULL;
   }

   ~Node()
   {
    int val = this -> data;
    if(next != NULL)
    {
        delete next;
        next = NULL;
    }
    cout<<"memory free for node with data"<< val<<endl;
   }

};

void print(Node*&head)
{
    Node*temp = head;

    while(temp!=0)
    {
        cout<< temp->data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insert_at_head(Node*&head , int d)
{
    Node*temp = new Node(d);
    temp -> next = head;
    head  -> prev = temp;
    head = temp;
}

void insert_at_tail(Node*&tail , int d)
{
    Node*temp = new Node(d);
    tail -> next = temp;
    
    temp -> prev = tail;
    tail = temp;
}



void insertatposition(Node* &tail,Node* &head,int position,int d)
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
    
    //creatting a node for d
    Node*insert = new Node(d);
    insert -> next = temp -> next;
    temp -> next -> prev = insert;
    insert -> prev = temp;
    temp -> next = insert;
}



void delete_at_position(Node* &head,int position)
{
    //delete a node at first position
    if(position == 1)
    {
        Node*temp = head;
       
        temp ->next -> prev = NULL;
     
        head = temp -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //DELETING any middle or last node
        Node*curr = head;
        Node*prev = NULL;

        int cnt = 1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++; 
        }


        curr -> prev = NULL;
        prev -> next = curr-> next;
        curr -> next = NULL; 
        delete curr;
        
    }

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

    //insert_at_tail(five,29);
    //insert_at_tail(five,30);

    

    //insertatposition(five,one,3,55);

//print(one); 

delete_at_position(one,3);
print(one);

}
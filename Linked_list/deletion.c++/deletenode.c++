#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    
    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this -> data;
        //memory free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};





void delete_at_position(Node* &head,int position)
{
    //delete a node at first position
    if(position == 1)
    {
        Node*temp = head;
        head = head -> next;
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


        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }

}

void deletion_at_last(Node*&head)
{
    
    Node*curr = head;
    Node*prev = NULL;
    

    while(curr -> next !=NULL)
    {
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = NULL;
    delete curr;

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
   // delete_at_position(one,4);
    
    deletion_at_last(one);
    print(one);


}
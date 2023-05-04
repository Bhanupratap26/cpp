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

void insert_at_head(Node*&head, int d)
{
   Node*temp = new Node(d);
   temp -> next = head;
   head = temp;

}

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

/*void insert_at_tail(Node*head,int d)
{
    Node*temp = head;
    temp->next = d;
}*/


Node* reverse(Node* llist) {
   Node*curr = llist;
    Node* prev = nullptr;
    Node* nexty = nullptr;
    
    while(curr!= nullptr)
    {
        nexty = curr -> next;
        curr -> next = prev;
        
        curr= nexty;
        prev = curr;
        
    }
    llist = prev;

return llist;
}


int main()
{
    Node*node1 = new Node(34);
    node1 -> next = NULL;
    //cout<<node1 -> data<<endl;
     //cout<<node1 -> next<<endl;

Node*head = node1;
     print (head);

    
     insert_at_head(head,67);
     insert_at_head(head,77);
     insert_at_head(head,87);
     print(head);

     reverse(head);
     print(head);
    


    return 0;
}
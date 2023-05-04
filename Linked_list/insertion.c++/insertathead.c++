#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

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

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data<<" --> ";
        temp = temp -> next;
    }
    cout<<endl;
}



int main() {

   
    Node* temp;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    
    // assigning location in memory
    one = new Node(53);
    two = new Node(43);
    three = new Node(67);
    
   

    // connnecting
    one->next = two;
    two->next = three;
    three->next = NULL;

     Node* head  = one;
    print(one);

    InsertAtHead(head,89);
    print(head);

    return 0;


}

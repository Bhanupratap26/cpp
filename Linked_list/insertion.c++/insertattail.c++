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

void InsertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    // or we can also write tail = tail --> next

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

   
   Node*one = NULL;
    
    // assigning location in memory
    one = new Node(53);
    
    
   

    // connnecting
    one->next = NULL;
    
     Node* tail = one;
     Node* head = one;
    print(one);

    InsertAtTail(tail,89);
    InsertAtTail(tail,87);
    InsertAtTail(tail,85);
    print(head);

    return 0;


}

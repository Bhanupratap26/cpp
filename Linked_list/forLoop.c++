#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *next;
};

int main() {

    Node* head;
    Node* temp;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    
    // 
    one = new Node();
    two = new Node();
    three = new Node();
    
    //assigning
    one->value = 58;
    two->value = 78;
    three->value = 86;

    // connnecting
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    // traversing starts
    temp = one;

    cout << "HEAD --> ";

    while (temp != NULL)
    {
        cout << temp->value << " --> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    
    //Insert at Tail
    
    temp = one;

    while (temp->next != NULL)
    {
        Node *newNode = new Node();

        newNode->value = 69;
        newNode->next = NULL;

        temp->next = newNode;
    }
    
    //traversing
    temp = one;

    cout << "HEAD --> ";

    while (temp != NULL)
    {
        cout << temp->value << " --> ";
        temp = temp->next;
    }

    cout << "NULL";
    

}
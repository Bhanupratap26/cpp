#include<iostream>
using namespace std;

class Node
{

 public:
 int data;
 Node* next;

 Node(int d)
 {
    this -> data = d;
    this -> next = NULL;
 }

 ~Node(){
    int value = this ->data;
    if(this -> next != NULL)
    {
        delete next;
        next = NULL;
    }
    cout<<"memory is free for node with data"<< value<<endl; 
 }

};

void insert_Node(Node*&tail , int element , int d)
{
   //assuming that the element is not  present in the list

   //empty list
   if(tail ==NULL)
   {
      Node*newNode = new Node(d);
      tail = newNode;
      newNode -> next = newNode;
   }
   else{
      // non empty list
      // assuming that the element is present inn the list

      Node* curr = tail;

      while(curr -> data != element)
      {
         curr = curr -> next;

      }
      //element found > curr is representing the element given in function

      Node*temp = new Node(d);
      temp -> next = curr -> next;
      curr -> next = temp;

   }
}

void deletion(Node*&tail , int element)
{
    Node*temp = tail;
    Node*curr = temp;
    Node*prev = NULL;
    
     while(curr -> data != element)
    {
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = curr -> next;
    curr->next = NULL;
    delete curr;
}


void print(Node* tail){
   Node*temp = tail;  
    do{
      cout<<tail -> data <<" ";
      tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}


int main()
{
   Node*tail = NULL;

   insert_Node(tail,5,3);
   print(tail);
   
   insert_Node(tail,3,4);
   print(tail);

insert_Node(tail,4,5);
   print(tail);

insert_Node(tail,5,6);
   print(tail);

   deletion(tail,4);
   print(tail);


   


   return 0;
}



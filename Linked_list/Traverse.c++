#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;
};

void linked_list(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;

    //Allocate memory for nodes in the linked list in Heap 
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    //link first and second nodes
    head ->data = 11;
    head ->next = second;

    //link second and third nodes
    second ->data = 7;
    second ->next = third;

    third ->data = 8;
    third ->next = NULL;

    linked_list(head);

    return 0;

}
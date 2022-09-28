#include <iostream>
#include <cstdlib>
using namespace std;

void insert();
int count_of_node();

struct node{
    int data;
    struct node *link;
};
struct node *head = (struct node *)malloc(sizeof(struct node));

int main(){
    insert();
    int c = count_of_node();
    cout<<"node = "<<c;
}

void insert(){
    head->data = 36;
    head->link = NULL;

    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    node1->data = 100;
    node1->link = NULL;
    head->link = node1;

    node1 = (struct node *)malloc(sizeof(struct node));
    node1->data = 1324;
    node1->link = NULL;
    head->link->link = node1;

    node1 = (struct node *)malloc(sizeof(struct node));
    node1->data = 132455;
    node1->link = NULL;
    head->link->link->link = node1;
}


int count_of_node(){
    int count = 0;

    if(head == NULL)
        cout<<"linked list empty"<<endl;
    struct node *ptr = head;
    while(ptr != NULL){
        count++;
        cout<<"node data = "<<ptr->data<<endl;
        ptr = ptr->link;
    }
    return count;
}

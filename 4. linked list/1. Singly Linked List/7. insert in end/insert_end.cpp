#include <iostream>
#include <cstdlib>
using namespace std;

void insert();
void data_show();
void insert_end(int n);

struct node{
    int data;
    struct  node *link;
};
struct node *head;

int main(){
    int n;
    insert();
    data_show();
    cout<<"enter the value "<<endl;
    cin>>n;
    insert_end(n);
    data_show();
}

void insert(){
    head =(struct node *)malloc(sizeof(struct node));
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

void data_show(){
    if(head == NULL)
        cout<<"linked list empty"<<endl;
    struct node *ptr = head;
    while(ptr != NULL){
        cout<<"node data = "<<ptr->data<<endl;
        ptr = ptr->link;
    }
}

void insert_end(int n){
    struct node *ptr = head;
    struct node *end_node = (struct node *)malloc(sizeof(struct node));
    end_node->data = n;
    end_node->link = NULL;

    while(ptr->link !=NULL){
        ptr = ptr->link;
    }
    ptr->link = end_node;
}

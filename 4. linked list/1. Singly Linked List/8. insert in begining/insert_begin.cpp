#include<iostream>
#include<cstdlib>

using namespace std;


struct node{
    int data;
    struct node *link;
};

struct node *head;

void insert();
void data_show();
void insert_beg(int n);


int main(){
 int n;
 insert();
 data_show();
 cout<< "enter the value "<<endl;
 cin>>n;
 insert_beg(n);
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

void insert_beg(){
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;
    struct node *ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }else{
        struct node *temp = ptr;
        ptr->next = head;
        head=ptr;
    }
}

#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    struct node *pre;
    int data;
    struct node *next;
};
 struct node *head;

void show();

int main(){
    // first node create
    struct node *value_1st = (struct node *)malloc(sizeof(struct node));
    value_1st->pre=NULL;
    value_1st->data=10;
    value_1st->next=NULL;
    head=value_1st;

    //secand node create
    struct node *value_2nd = (struct node *)malloc(sizeof(struct node));
    value_2nd->next=value_1st;
    value_2nd->data=111;
    value_2nd->pre=NULL;
    head = value_2nd;
    //third node create
    struct node *value_3rd = (struct node *)malloc(sizeof(struct node));
    value_3rd->next=value_2nd;
    value_3rd->data=2222;
    value_2nd->pre=NULL;
    head = value_3rd;
    show();

}

void show(){
    struct node *show_pointer = head;
    while(show_pointer != NULL){
        cout<<show_pointer->data<<endl;
        show_pointer = show_pointer->next;
    }
}


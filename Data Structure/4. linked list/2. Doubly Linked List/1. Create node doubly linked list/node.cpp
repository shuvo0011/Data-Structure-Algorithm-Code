#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    struct node *pre;
    int data;
    struct node *next;
};


int main(){
    struct node *head= (struct node *) malloc(sizeof(struct node));
    head->pre = NULL:
    head->data = 10;
    head->next = NULL;
}


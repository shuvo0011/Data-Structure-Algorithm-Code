#include <iostream>
#include <cstdlib>

using namespace std;


struct node {

    int data;
    struct node *link;
};


int main(){

    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;


    struct node *current = (struct node *)  malloc(sizeof(struct node));
    current->data = 10;
    current->link = NULL;
    head->link = current;


    struct node *next = (struct node *) malloc(sizeof(struct node));
    next->data = 56;
    next->link = NULL;
    current->link = next;



}

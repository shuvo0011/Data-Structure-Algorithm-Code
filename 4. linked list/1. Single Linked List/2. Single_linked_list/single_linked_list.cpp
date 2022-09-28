#include <iostream>
#include <cstdlib>

using namespace std;

struct node{

    int data ;
    struct node *link;
};

int main(){

    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 5;
    current->link = NULL;
    head->link = current;

}

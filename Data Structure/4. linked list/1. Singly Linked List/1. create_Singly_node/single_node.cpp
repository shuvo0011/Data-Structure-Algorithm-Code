#include <iostream>
#include <cstdlib>
using namespace std;

struct node{

    int data;
    struct node *link;
};

int main(){

    struct node *head = NULL;
    head = (struct node *) malloc(sizeof(struct node));
    head->data  = 45;
    head->link = NULL;

    cout<< head->data <<endl;
    cout<< head->link <<endl;

}

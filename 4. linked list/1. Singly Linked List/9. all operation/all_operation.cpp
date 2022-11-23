#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head;

void begin();
void last();
void position();
void del_first();
void del_last();
void show();

int main(){
    int x;
    while(true){
        cout<<" 1 = insert in first"<<endl;
        cout<<" 2 = insert in last"<<endl;
        cout<<" 3 = insert in position"<<endl;
        cout<<" 4 = delete in first"<<endl;
        cout<<" 5 = delete in last"<<endl;
        cout<<" 6 = delete in position"<<endl;
        cout<<" 7 = show data"<<endl;
        cout<<"plz enter your choice"<<endl;
        cin>>x;
        switch(x){
            case 1:
                begin();
                break;
            case 2:
                last();
                break;
            case 3:
                //position();
                break;
            case 4:
                del_first();
                break;
            case 5:
                del_last();
                break;
            case 7:
                show();
                break;
            default:
                cout<<"invalid";
        }
    }
}

void begin(){
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

void last(){
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;
    struct node *ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=ptr;
    }
}


void position(){
    int n,c=0;
    cout<<"Enter position"<<endl;
    cin>>c;
    cout<<"Enter value"<<endl;
    cin>>n;
    struct node *ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        if(c>1){
            cout<<"invalid position"<<endl;
            return;
        }
        head=ptr;
    }else{
        struct node *temp = head;
        for(int i=0;i<c;i++){
            temp = temp->next;
            if(temp==NULL){
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void del_first(){

    struct node *ptr;
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }else{
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}

void del_last(){
    struct node *ptr;
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }else{
        ptr = head;
        head = ptr->next;
        free(ptr);
    }

}


void show(){
    struct node *temp = head;
    if(temp==NULL){
        cout<<"no data"<<endl;
    }else{
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}


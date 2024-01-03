#include<iostream>

int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main (){
    cout<<"Enter the number of elements in the stack "<<endl;
    cin>>n;
    while(choice != 4) {
        cout<<"\n1.Push\n2.Pop\n3.Show";
        cout<<"\n Enter your choice \n";
        cin>>choice;
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            default:
                cout<<"Please Enter valid choice ";
        };
    }
}

void push (){
    int val;
    if (top == n )
        cout<<"n Overflow"<<endl;
    else {
        cout<<"Enter the value?";
            cin>>val;
        top = top +1;
        stack[top] = val;
    }
}

void pop (){
    if(top == -1)
        cout<<"Underflow";
    else
        top = top -1;
}
void show(){
    for (i=top; i>=0; i--) {
        cout<<stack[i]<<endl;
    }
    if(top == -1) {
        cout<<"Stack is empty"<<endl;
    }
}

#include <iostream>
using namespace std;

struct user{

    int i;
    char c;
    struct user *p;

};

int main(){

    struct user ob;
    struct user ob1;

    ob.i=1;
    ob.c='A';
    ob.p=NULL;

    ob1.i=66;
    ob1.c='B';
    ob1.p=&ob;

    cout<<ob1.p<<endl;
    cout<<ob1.p->i;

}

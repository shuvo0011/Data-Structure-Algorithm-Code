#include <iostream>

using namespace std;

struct charset{
    char s;
    int i;
};

void insert(char* s, int *i){

    cout<<"enter value"<<endl;
    cin>>s>>i;
}

int main(){
    int j;
    struct charset c;
    insert(&c.s,&c.i);
    cout<<c.s<<" "<<c.i<<endl;
}


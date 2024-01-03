#include <iostream>

using namespace std;

struct charset{
    char s;
    int i;
};

void input(char* s, int* i){
    cout<<"enter value"<<endl;
    cin >> &s ;
    cin >> &i;
}

int main(){
    int j;
    struct charset c;
    input(&c.s,&c.i);
    cout<<c.s<<" "<<c.i<<endl;
}

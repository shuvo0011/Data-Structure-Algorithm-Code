#include <iostream>

using namespace std;

int main(){

    int a=5;
    char b='c';
    cout<<a<<" address " <<&a<<endl;
//....................... pointer initial ..............
    int *p;
    char *q;
    p=&a;
    q=&b;
    cout<<p<<" "<<*p<<" "<<&p<<endl;

    *p=12;
    cout<<a<<" "<<*p<<endl;

//................ pointer increment .................
    cout<<sizeof(p)<<endl;
    cout<<p<<endl;
    cout<<sizeof(p+1)<<endl;
    cout<<p+1<<endl;
    cout<<p+2<<endl;

    cout<<q<<endl;
    cout<<q+1<<endl;


}

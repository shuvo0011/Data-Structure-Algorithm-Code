#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int *p;

    p = (int*) malloc (20);
    cout<<"after allocation  p = "<<p<<endl;
    free(p);

    cout<<"after free the memory p= "<<p<<endl;

}

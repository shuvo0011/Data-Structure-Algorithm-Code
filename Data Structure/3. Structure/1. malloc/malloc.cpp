#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int* m;
    int* n;
    void* p ;

// ........... malloc return void pointer.......

    p = malloc(20);
    cout<<p<<endl;
    cout<<sizeof(p)<<endl;

// ............. type cast malloc ................
    m = (int*) malloc (20);
    n = (int*) malloc( 5 * sizeof(int));

    if( n == NULL)
    {
        cout<<"Memory not allocated"<<endl;
    }
    else
    {
        cout<<"memory allocated"<<endl;
        cout<< "data address = "<<n<<endl;
        cout<< "next data address = "<<n+1<<endl;
        cout<< "3rd data address = "<<n+2<<endl;
    }


// ......   melloc data insert ............

    int x;
    cout<<" insert the number of input"<<endl;
    cin>>x;
    int* a = (int*) malloc( x * sizeof(int));

    if(a==NULL)
    {
        cout<<"memory not allocated"<<endl;
    }

    for(int i=0; i<x; i++)
    {
        cout<<"enter the number"<<endl;
        cin>>*(a+i);
    }

    for(int i=0; i<x; i++)
    {
        cout<<"address = "<<a+i<<" value ="<<*(a+i)<<endl;
    }
}

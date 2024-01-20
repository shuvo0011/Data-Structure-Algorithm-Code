#include <iostream>


using namespace std;

struct point {

    int x;
    int y;
};


void show(struct point p){
    cout<<p.x<<" "<<p.y<<endl;
}

int main(){

    struct point p1={23,45};
    struct point p2={56,78};

    show(p1);
    show(p2);

}

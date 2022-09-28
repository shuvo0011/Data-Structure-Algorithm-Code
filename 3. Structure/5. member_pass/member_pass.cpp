#include <iostream>
using namespace std;

struct student{
    char name[50];
    int age;
    int roll;
}s1;


void show(char name[], int age, int roll){

    cout<<"----after funtion called----"<<endl;
    cout<<name<<" "<<age<<" "<<roll<<endl;
}



int main(){

    struct student s = {"shuvo", 20,36};
    cout<<s.name<<" " <<s.age<<endl;
    cout<<s1.name<<" " <<s1.age<<endl;

    show(s.name,s.age,s.roll);

}




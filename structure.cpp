#include<iostream>
using namespace std;

struct employee
{
    //data
    int eid=2459;
    char favChar;
    float salary;

};

int main(){

struct employee aarif;
struct employee zaira;

//aarif.eid=2459;
aarif.favChar='A';
aarif.salary=100000;

cout<<aarif.eid<<endl;
cout<<aarif.favChar<<endl;
cout<<aarif.salary<<endl;

cout<<endl;

zaira.eid=100;
zaira.favChar='Z';
zaira.salary=100000;

cout<<zaira.eid<<endl;
cout<<zaira.favChar<<endl;
cout<<zaira.salary<<endl;

return 0;
}

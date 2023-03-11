#include<iostream>
using namespace std;
int main(){
    int marks[]={1,2,3,4};
    int len=sizeof(marks)/sizeof(marks[0]);

    cout<<"Length:"<<len<<endl;
    cout<<endl;

    for(int i=0;i<len;i++){
        cout<<marks[i]<<endl;
    }
cout<<endl;

    int* p=marks;
    /*cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;*/

    cout<<*(p++)<<endl;
    cout<<*(++p);




return 0;
}

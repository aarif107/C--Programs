#include<iostream>
using namespace std;
int main(){

    int a=1,b=2,temp;
    cout<<"Before Swapping:"<<endl;
    cout<<"A="<<a<<endl<<"B="<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout<<"Temp:"<<temp;

return 0;
}

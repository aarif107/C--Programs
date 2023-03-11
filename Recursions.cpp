#include<iostream>
using namespace std;

int factorial(int n){

    if (n<=1){
        return 1;
    }

    else{

        return n*factorial(n-1);
        }

    }


int fib(int f){
    if(f<2){
        return 1;
}
    return fib(f-2)+fib(f-1);

    }


int main(){

int a;

cout<<"Enter Positive number: "<<endl;
cin>>a;
cout<<"The factorial of "<<a<< " is: "<<factorial(a)<<endl;

int b;

cout<<"Position of fibonicci number: "<<endl;
cin>>b;
cout<<"The Position of "<<b<< " is: "<<fib(b)<<endl;

return 0;
}

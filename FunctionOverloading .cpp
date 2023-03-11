#include<iostream>
using namespace std;

int sum(int a,int b){
cout<<"Using function with 2 argumants"<<endl;
return a+b;
}

int sum(int a,int b,int c){
cout<<"Using function with 3 argumants"<<endl;
return a+b+c;
}

int main(){

cout<<"sum of 3 and 6 is: "<<sum(3,6)<<endl;
cout<<"sum of 3,6 and 9 is: "<<sum(3,6,9)<<endl;

}

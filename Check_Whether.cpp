#include<iostream>
using namespace std;
int main(){

int eo;
cout<<"Enter a Integer:";
cin>>eo;

(eo%2==0) ? cout<<eo<<" is even"<<endl : cout<<eo<<" is odd"<<endl;

int n,sum=0;

cout<<"Enter positive number:";
cin>>n;
for (int i=1;i<=n;i++){
    sum+=i;
}
cout<<"Total Sum="<<sum;

return 0;
}

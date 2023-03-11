#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={11,1,6,45,4,8};

//sort(arr,arr+6);
sort(arr,arr+6,greater<int>());

for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;
}

return 0;
}

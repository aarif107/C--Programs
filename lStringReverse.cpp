#include<bits/stdc++.h>
using namespace std;
int main(){

string str,rev_str;
cin>>str;

for(int i=str.size()-1;i>=0;i--){
    rev_str.push_back(str[i]);
}
//cout<<rev_str<<endl;
if(str==rev_str){
    cout<<"Yes";
}
else{
    cout<<"No";
}
/*
extract big number string to integer
sting s;
cin>>s;
int last_digit=s[s.size()-1]-'0';
cout<<last_digit;
*/


return 0;
}

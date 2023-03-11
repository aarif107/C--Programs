#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
    cout<<v.at(i)<<" ";

}
cout<<endl;

}


int main(){
vector<int> vec1;
int ele,sizes;

cout<<"Enter the size of your vector:"<<endl;
cin>>sizes;

for(int i=0;i<sizes;i++){
    cout<<"Enter an element to add to to this vector: ";
    cin>>ele;
    vec1.push_back(ele);
}
display(vec1);
vector<int>::iterator iter=vec1.begin();
vec1.insert(iter+1,5,566);
display(vec1);

return 0;
}

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
vector<int> vec;
int element,sizes;

cout<<"Enter the size of vector: ";
cin>>sizes;
for(int i=0;i<sizes;i++){
    cout<<"Enter the elements of vector: ";
    cin>>element;
    vec.push_back(element);
}
display(vec);
vector<int>::iterator iter=vec.begin();
vec.insert(iter,5,700);
display(vec);

return 0;
}

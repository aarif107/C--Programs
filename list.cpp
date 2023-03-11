#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
list<int> :: iterator it;

for(it=lst.begin();it!=lst.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
}

int main(){
list<int> list1;

list1.push_back(4);
list1.push_back(3);
list1.push_back(2);
list1.push_back(1);

/*
Removing element from the lists
list1.pop_front();
list1.pop_back();
list1.remove(2);*/
display(list1);
//sorting the list
//list1.sort();
//display(list1);

//Reversing the list
list1.reverse();
cout<<"List 1 after reversing"<<endl;
display(list1);

list<int> list2(4);
list<int> :: iterator iter;
iter=list2.begin();
*iter=23;
iter++;
*iter=34;
iter++;
*iter=45;
iter++;
*iter=56;
iter++;
display(list2);

list1.sort();
list2.sort();

list1.merge(list2);
cout<<"List 1 after merging"<<endl;
display(list1);



return 0;
}

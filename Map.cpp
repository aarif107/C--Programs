#include<iostream>
#include<map>
using namespace std;

int main(){

map<string,int> marksMap;

marksMap["Zaira"]=96;
marksMap["Aarif"]=90;

marksMap.insert({{"Aaryan",100},{"Solaiman",96}});

map<string,int> :: iterator itr;

for(itr=marksMap.begin();itr!=marksMap.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<"\n";
}
cout<<"The size is:"<<marksMap.size()<<endl;
cout<<"The Max size is:"<<marksMap.max_size()<<endl;
cout<<"The Empty size is:"<<marksMap.empty()<<endl;

return 0;
}

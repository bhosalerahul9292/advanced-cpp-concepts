#include<iostream>
#include<map>

using namespace std;

int main(){
    multimap<char,int>map1;
    map1.insert(pair<char,int>('a',1));
    map1.insert(make_pair('b',2));
    map1.insert(make_pair('a',2));
    map1.insert(make_pair('a',3));
    
    auto pair = map1.find('a');
    cout<<pair->first<<"=="<<pair->second<<endl;

    cout<<"Count of a :"<<map1.count('a')<<endl;

    cout<<"lower bound of a : "<<map1.lower_bound('a')->first<<"---"<<map1.lower_bound('a')->second<<endl;
    cout<<"upper bound of a : "<<map1.upper_bound('a')->first<<"---"<<map1.upper_bound('a')->second<<endl;


    for(auto &elm:map1){
        cout<<elm.first<<":"<<elm.second<<endl;
    }

    return 0;
}
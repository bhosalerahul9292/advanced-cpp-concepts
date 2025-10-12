#include<iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_multimap<char,int>unmap{{'c',1}};
    unmap.insert(make_pair('b',3));
    unmap.insert(make_pair('b',3));
    unmap.insert(pair<char,int>('c',2));
    unmap.insert({'d',2});

    for(auto &elm:unmap){
        cout<<elm.first<<"--"<<elm.second<<endl;    }
    
    return 0;
}
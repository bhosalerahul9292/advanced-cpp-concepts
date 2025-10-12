#include<iostream>
#include<unordered_set>

using namespace std;

int main(){

    unordered_multiset<int>umset{1,2,3,4,1,2,3};
    auto search=umset.find(2);
    if(search!=umset.end()){
        cout<<"Found :"<<(*search)<<endl;
    }else{
        cout<<"not Found"<<(*search)<<endl;
    }
    
    for(const auto &elm:umset){
        cout<<elm<<",";
    }
    cout<<endl;
    cout<<umset.count(4);
    return 0;
}
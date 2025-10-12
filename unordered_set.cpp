#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int>uset{3,2,4,1,3,6,2,5};

    auto data = uset.find(2);
    if(data!=uset.end()){
        cout<<"Found"<<(*data)<<endl;
    }else{
        cout<<"not Found"<<endl;
    }

    for(const auto& elm:uset ){
        cout<<elm<<",";
    }

    return 0;
}
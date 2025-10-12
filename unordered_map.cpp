#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,char>umap1{{1,'a'},{2,'b'}};
    
    // direct access
    cout<<umap1[1]<<endl;
    cout<<umap1[2]<<endl;

    //update the value
    umap1[1]='c';
    cout<<umap1[1]<<endl;

    // iterator
    for(auto &elm:umap1){
        cout<<elm.first<<""<<elm.second<<endl;
    }

    // Find :
    auto data = umap1.find(1);
    cout<<"data is :"<<data->first<<"and"<<data->second<<endl;
    return 0;
}


#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

// int main(){
//     map<string,int>map1;
//     map1["Test2"]=123;
//     map1["Test1"]=1234;
//     map1.insert(make_pair("Test3",151));

//     for(auto &elm:map1){
//         cout<<elm.first<<"=="<<elm.second<<endl;
//     }
    
//     return 0;
// }

// As this value has been stoed as dictonary.

int main(){
    map<string,vector<int>>map1;
    map1["test2"].push_back(1);
    map1["test1"].push_back(2);
    map1["test1"].push_back(12);

    for(auto &elm:map1){
        cout<<elm.first<<"=";
        for(auto &elm1:elm.second){
            cout<<elm1<<",";
        }
    }
return 0;
}
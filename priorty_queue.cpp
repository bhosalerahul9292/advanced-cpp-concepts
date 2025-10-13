#include<iostream>
#include<queue>
#include<vector>

using namespace std;

 template<typename T>void print_queue(T&q){
    while(!q.empty()){
        cout<<q.top()<<",";
        q.pop();
    }
 }


int main(){
    priority_queue<int>q1;
    for(auto& elm:{1,3,2,4,6,5,8}){
        q1.push(elm);
    }
    print_queue(q1);
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>>q2;
     for(auto& elm:{1,3,2,4,6,5,8}){
        q2.push(elm);
    }
    print_queue(q2);


    return 0;
}
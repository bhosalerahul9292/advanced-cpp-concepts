#include<iostream>
#include<queue>

using namespace std;

void print(queue<int>que){
    while(!que.empty()){
        cout<<que.front()<<endl;
        que.pop();
    }
}


int main(){
    queue<int> q1;
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    print(q1);
    return 0;
}
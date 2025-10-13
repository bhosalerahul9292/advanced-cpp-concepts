#include<iostream>
#include<stack>
#include<vector>

using namespace std;

// template<typename T> void print_stack(T s){
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// }

// int main(){

//     stack<int>s1;
//     s1.push(1);
//     s1.push(4);
//     s1.push(8);

//     print_stack(s1);

//     return 0;
// }

// Or



template<typename T> void print_stack(T s){
    while(!s.empty()){
        cout<<s.top()<<",";
        s.pop();
    }
}

int main(){

    stack<int,vector<int>>s1;
    s1.push(2);
    s1.push(5);
    s1.push(3);
    print_stack(s1);

    return 0;
}
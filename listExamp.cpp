#include<iostream>
#include<list>

using namespace std;

int main(){
    
    list<int> list1={5,6,7,8,9,1,2};
    list<int> list2{1,2,3,34,5,4};
    list1.sort();
    list2.sort();

    // list1.merge(list2);
    // list1.splice(list1.begin(),list2);      // apened the list2 content in front of list1
    list1=list2;                                // copy the list2 content inside the list1 and list2 has been discarded.

    for(const auto&elm:list1 ){
        cout<<elm<<"--->";
    }

    cout<<endl;
    for(const auto&elm:list2 ){
        cout<<elm<<"--->";
    }

    cout<<endl;
    return 0;
}
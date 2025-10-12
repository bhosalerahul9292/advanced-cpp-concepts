#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

// Example-1:

// int main(){
    
//     multiset<int>m1{1,2,3,4,1,2,3,4};
//     for(const auto &elm:m1){
//         cout<<elm<<"==";
//     }

//     return 0;
// }

// Example-2:

class Person{
public:
int age;
string name;

bool operator <(const Person &other) const{
    return (this->age<other.age);
}

bool operator >(const Person &other) const{
    return (this->age>other.age);
}

};

int main(){
    multiset<Person,greater<Person>> p1{{1,"rahul"},{2,"Sonali"},{1,"baji"},{2,"mahadev"}};
    for(const auto &elm:p1){
        cout<<elm.age<<"-"<<elm.name<<endl;
    }

    return 0;
}
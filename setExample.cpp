#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

class Person{
public:
    int age;
    string name;

    bool operator < (const Person &rhs)const {
        return(this->age<rhs.age);
    }

     bool operator > (const Person &rhs)const {
        return(this->age>rhs.age);
    }
};

int main(){
    // set<int> s1{1,2,3,4,5,1,2,3,4,5};
    // for(auto &elm:s1){
    //     cout<<elm<<","<<endl;
    // }
    
    set<Person,less<Person>>p1{{25,"rahul"},{20,"Sonali"},{27,"Bibabai"}};

     for(auto &elm:p1){
        cout<<elm.age<<","<<elm.name<<endl;
    }

    return 0;
}
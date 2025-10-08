#include<iostream>
#include<vector>

using namespace std;
class Employee{
public:
int id;
string name;
public:
Employee(int id,string name):id(id),name(name){}
};

int main(){
    vector<Employee> team;
    team.insert(team.end(),Employee(1,"Rahul")); // Creates Employee, then inserts
    team.emplace_back(2,"Sonali");              // Constructs Employee in-place

    for(const auto &emp:team){
        cout<<emp.id<<"--"<<emp.name<<endl;
    }

    return 0;
}


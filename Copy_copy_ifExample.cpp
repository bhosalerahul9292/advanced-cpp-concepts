#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>

using namespace std;

void print_vec(vector<int>&vec){
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout,","));
}


int main(){
    vector<int> from_vec(10);
    iota(from_vec.begin(),from_vec.end(),0);

    vector<int> to_vec(from_vec.size());
    copy(from_vec.begin(),from_vec.end(),to_vec.begin());
    print_vec(to_vec);

    cout<<endl;
    // Alternate inserting element:
    vector<int>to_vector1;
    copy(from_vec.begin(),from_vec.end(),back_inserter(to_vector1));
    print_vec(to_vector1);

    vector<int> to_vec3= from_vec;
    print_vec(to_vec3);

    cout<<endl;
    vector<int>to_vec4(5);
    copy_if(from_vec.begin(),from_vec.end(),to_vec4.begin(),[](int x){return (x%2)==1;});
    print_vec(to_vec4);

    return 0;
}
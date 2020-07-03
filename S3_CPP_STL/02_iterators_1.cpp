#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{10, 20, 30, 40};

    // iterator to a vector's beginning
    vector<int>::iterator i = vec.begin(); // auto i = vec.begin()
    cout<<(*i)<<endl;
    i++;
    cout<<(*i)<<endl;
    i=vec.end();
    i--;
    cout<<(*i)<<endl;
    return 0;
}
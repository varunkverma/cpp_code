#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

list<int> double_link;

void insert(int x)
{
    double_link.push_back(x);
}
void replace(int x, vector<int> sequence)
{
    // find the address at which the x element is present
    list<int>::iterator it = find(double_link.begin(), double_link.end(), x);
    // check if it isn't found
    if (it == double_link.end())
    {
        return;
    }
    // erase the element
    it = double_link.erase(it);

    // insert the sequence there
    double_link.insert(it, sequence.begin(), sequence.end());
}
void print()
{
    for(list<int>::iterator it=double_link.begin();it!=double_link.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){
    insert(3);
    insert(10);
    insert(2);
    insert(10);
    print();
    vector<int> v {20,30,40,50};
    replace(10,v);
    print();

    return 10;
}
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v {1,2,3,4,5};
    vector<int>::iterator iter;
    int size = v.size();
    cout<<"before Size: "<<size<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    size = v.size();
    cout<<"Size After: "<<size<<endl;
    cout<<"Value at 2nd position: "<<v.at(1)<<endl;
    cout<<"Value at 3rd position: "<<v[2]<<endl;
    cout<<"Value at last position: "<<v.at(size-1)<<endl;
    cout<<"Elements: ";
    for(iter = v.begin();iter!=v.end();++iter)
    {
        cout<< *iter<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    vector<int> v{2,3,2,3,5};
    int n = 5, P = 5, c = 2;
    int count=0;
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
        if(v.at(i)==c)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
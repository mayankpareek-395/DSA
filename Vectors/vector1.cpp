#include<iostream>
#include<vector>
using namespace std;
int main()
 {
    vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i+1);
    }
    for (int x : v1)
    {
        cout<<x<<" "<<endl;
    }
    for (int j = 0; j < v1.size(); j++)
    {
        cout<<"index "<<j<<" of v1 = "<<v1[j]<<endl;
    }
 }
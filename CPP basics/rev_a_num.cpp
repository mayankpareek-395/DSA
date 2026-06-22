#include<bits/stdc++.h>
using namespace std; 
int main(){
    int N = 543506800;
    vector <int> v = {};
    int n = 0;

    while (N > 0) {
        int temp = N % 10;
        v.push_back(temp);
        N = N / 10; 
    }

    for (auto x : v) {
        n = n*10 + x;
    }

    cout<<n;
}
// reverse an array
#include<bits/stdc++.h>
using namespace std;

/* brute force
int reverse(int x, int a[]){
    for (int i = x-1; i >= 0; i--){
        cout<<a[i]<<" ";
    }
}*/

//better approach
/*
vector <int> reverse(vector<int>& x){
int n = x.size();
vector <int> temp(n);
int i = 0;
    while (i < n) {
        temp[i] = x[n-1];
        temp[n-1] = x[i];
        i++;
        n--;
    }

return temp;
}
*/
// not the good way when we are already using stl;

void reverse(vector<int>& x){
    int p1 = 0;
    int p2 = x.size() - 1;

    while (p1 < p2) {
        swap(x[p1], x[p2]);
        p1++;
        p2--;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};

    reverse(arr);
    for(auto n : arr){
        cout<<n<<" ";
    }
}

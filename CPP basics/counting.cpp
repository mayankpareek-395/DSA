#include<bits/stdc++.h> 
using namespace std;
int main(){
    int x = 48562;
    int cnt = 0;
    while (x > 0){
        cnt +=1;
        int temp = x%10; 
        cout<<temp<<" ";
        x /= 10;
    }
    cout<<"no of digits : "<<cnt;
    return 0;
}
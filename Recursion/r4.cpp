// 	Print N to 1 using Recursion
#include<iostream> 
using namespace std; 

void print(int x){
    if (x == 0) return;
    cout<<x<<" ";
    return print(x-1);
}

int main(){
    int N = 5;
    print(N);
}
//Understand recursion by print something N times

#include <iostream>
using namespace std;

/* this was not the best way
void print(int n){
    if (n != 0 ) { 
    cout<<n<<" ";
    print(n-1);}
    else {exit(0);}
}
*/

void print(int x){
    if (x == 0) return;
    cout<<x<<" ";
    print(x-1);
}

int main(){
    int n = 5;
    print(n);
}
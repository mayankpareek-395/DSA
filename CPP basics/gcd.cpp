//WAP to find the gcd of two numbers in the optimal way
#include<bits/stdc++.h>
using namespace std;
    int gcd(int x, int y){
        if (x == 0)  {
            return y; 
        } 
        if (y == 0) {
            return x;
        }

        if (x < y ) {
            cout<<x<<" and1 "<<y<<endl;
            return gcd(x, y%x);
        }

        else {
            cout<<x<<" and2 "<<y<<endl;
            return gcd(y, x%y);
        }

    }
int main(){
    int n1 = 9;
    int n2 = 53;

    int a = gcd(n1, n2);
    cout<<"The GCD is : "<<a;

}
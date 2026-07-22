//check if the string is palindrome or not.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void palindrome(string x);
void palindrome2(string x);

int main(){
string str = "123421";
palindrome2(str);

}

//brute force
void palindrome(string x){
    string temp;
    for(auto n : x){
        temp = n + temp;
    }
    if (temp == x){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

}

//what else I could do - I could maybe have a flag, loop once, 
//where I go from start and end both ways if any mismatch is seen I set flag to false.

// I could also put a checking if statement in loop if flag = False then break;

void palindrome2(string x){
    int n = x.length();
    bool flag = true;
    for (int i = 0; i < n/2; i++){
        cout<<x[i]<<" and "<<x[n-i-1]<<endl;
        if (x[i] != x[n-i-1]) {
            flag = false;
            break;
        }
    }
    if (flag) cout<<"Palindrome";
    else cout<<"Not a Palindrome"; 
}
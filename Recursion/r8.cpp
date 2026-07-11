//check if the string is palindrome or not.
#include<iostream>
using namespace std;

string palindrome(string x);

int main(){
string str = "ABCDBA";
palindrome(str);

}

//brute force
string palindrome(string x){
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
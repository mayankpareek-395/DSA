#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    for(int i = 0; i < x; i++){
        for(int j = 0; j <= i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
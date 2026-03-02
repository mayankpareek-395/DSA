#include<iostream>
using namespace std;
int main()
{
    for(int i = 4; i > 0; i--)
    {
        for(int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for(int k = 0; k < 5 - i; k++)
        {
            cout<<char(k+65);
        }
        for(int l = 4 - i; l > 0; l--)
        {
            cout<<char(l + 64);
        }
        cout<<endl;
    }
}
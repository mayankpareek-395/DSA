#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i <= 10; i++)
    {   
        if (i < 6) 
        {
            for(int j = 0; j < i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else 
        {
            for(int k = 10 - i; k > 0; k--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
#include<iostream>
using namespace std; 
int positive(int x)
{
    int temp = x;
    if (x < 0)
    temp = -x;
    else
    return temp;
}

int main()
{
    for(int i = 10; i > 1; i--)
    {
        int b = positive(i - 6);
        for(int j = 0; j < b; j++)
        {
            cout<<" ";
        }
        for(int k = 0; k < (4 - b)*2 + 1 ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
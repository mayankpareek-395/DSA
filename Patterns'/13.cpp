#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int temp = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 1; j <= i+1; j++)
        {
            cout<<j+count<<" ";
            temp = j + count;
        }
        cout<<endl;
        count = temp;
    }
}
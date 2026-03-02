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
    int a = positive(-25);
    cout<<"hi"<<a;
    return 0;
}

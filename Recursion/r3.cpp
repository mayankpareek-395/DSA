// Print 1 to N using Recursion

#include <iostream>
using namespace std;
void print(int x, int y){
    if (x > y) return;
    cout<<x<<" ";
    return print(x+1,y);
}
int main()
{
    int N = 5;
    print(1,N);
}
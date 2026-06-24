// Print name N times using recursion
#include <iostream>
using namespace std;

void print(int x){
    if (x == 0) return;
    cout << "Mayank" <<endl;
    print(x-1);
}

int main()
{
    int N = 5;
    print(N);
}
// Sum of First N Numbers

#include<iostream> 
using namespace std; 

/* -- Brute force method
int sum(int x, int total = 0){
    if (x == 0) return total;
    total += x;
    return sum(x-1, total);
}
*/
/* -- better version but not refined
int sum(int x, int y = 0, int total = 0){
    if (x == y) return total + x;
    if (x < y) return total;
    total += x + y;
    return sum(x-1, y+1, total);
}*/

int sum (int x, int y = 0){
    if(x == y) return x;
    if(x < y) return 0;
    return x + y + sum(x-1, y+1);
}

int main(){
    int N = 11;
    cout<<sum(N);
}
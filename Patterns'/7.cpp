#include<iostream>
using namespace std;
int main()
{
    /*
    int a = 4;
    int arr[5] = {1, 3, 5, 7, 9};
    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < a - i; j++)
        {
            cout<<" ";
        }
        while(arr[i] != 0)
        {
            cout<<"*";
            arr[i]--;
        }
        cout<<endl;
    }
    return 0;
    */
   
   int a = 4;
   int arr[5] = {1, 3, 5, 7, 9};
   for( int i = 0; i < 5; i++)
   {
        for( int j = 0; j < a - i; j++){
            cout<<" ";
        }
        for( int k = 0; k < arr[i]; k++){
            cout<<"*";
        }
        cout<<endl;
   }
   return 0; 
}
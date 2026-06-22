#include<bits/stdc++.h>
using namespace std; 

int Vector1() 
{
//basic usage
vector <int> v;
for (int i = 0; i < 5; i++)
{
v.push_back(i*5);
}

for (int i = 0; i < 5; i++)
{
cout<<v[i]<<" ";
}
}
int Vector2()
{
//using vector with pairs
vector <pair<int, int>> v;
for(int i = 0; i < 5; i++){
    v.emplace_back(i, i*5);
}
for (pair<int,int> x : v ) {
    cout<<x.first<<" and "<<x.second<<endl;
}

}
int Vector3(){
    //Lets do iterators 
    vector <int> v(5);
    vector <int> :: iterator it = v.begin();
    //this creates an iterator it that points to the beginning of the container
    for (int i = 0; i <  5; i++){
        *it = (i*2 + 1);
        it++; 
    }
    //alternate way to declare any data type - use auto, it automatically assigns whatever the datatype is in the = 
    // since here we had v.begin() an iterator therefore n was assigned as an iterator
    // if we gave it auto n : v that is auto n in v and in v we have integers therefore n will be assigned integer data type. 
    for ( auto n = v.begin(); n != v.end(); n++ ){
        cout<<*n<<" ";
    }

    
}
int Vector4(){
    vector <int> v = {1,2,3,4,5,5,6};
    cout<< v[2] << " and "<< v.at(3)<<endl;
    cout<<"at the back : "<<v.back()<<endl;
    cout<<"no of elements in vector v : "<<v.size()<<endl;
    v.pop_back();
    cout<<v.back()<<endl;
    
}
auto sorting(auto x){
    sort(x.begin(), x.end());
    return x;
}
int main()
{
    vector <int> v = {5,1,6,8,7,1};
    auto v1 = sorting(v);
    for(auto n : v){
        cout<<n<<" ";
    }
    cout<<endl;
    for(auto n : v1){
        cout<<n<<" ";
    }
}
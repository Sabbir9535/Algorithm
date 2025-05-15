#include<iostream>
using namespace std;
int addition(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n +addition(n - 1);
    }
}
int main(){
    int n;
    cin>>n;
    int a =addition(n);
    cout<<a<<endl;
    return 0;
}

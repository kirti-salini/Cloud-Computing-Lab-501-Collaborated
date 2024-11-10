#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    int copy = n;
    int res = 0;
    while(copy != 0){
        int rem = copy%10;
        res = res*10 + rem;
        copy = copy/10;
    }
    if(res == n){
        cout<<"palindorm"<<endl;
    }
    else{
      cout<<"Not palindorm"<<endl;
    }
}


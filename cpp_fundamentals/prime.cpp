#include<iostream>
using namespace std;

    bool checkprime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

int main(){
    int n;
    cin>>n;

    bool isprime = checkprime(n);

    for(int i=2;i<n;i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }
    }




    return 0;
}
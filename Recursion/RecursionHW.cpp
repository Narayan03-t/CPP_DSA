#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=0;
    long long len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            len++;
        }
        else{
            ans = ans+(len*(len+1))/2;
            len=1;
        }
        ans = ans+(len*(len+1))/2;
        cout<<ans;
    }



    return 0;
}
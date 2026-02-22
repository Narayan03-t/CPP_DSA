#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// function to check either statements are ++ or --

bool checkstatements(string statement){
    if(statement=="++x" || statement=="x++" || statement=="++X" || statement=="X++"){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n; // number of input
    cin>>n;

    int x=0;
    for(int i=0;i<n;i++){
        string statement;
        cin>>statement;

        if(checkstatements(statement)){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;

   




    return 0;
}

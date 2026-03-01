
// lecture 2 only rat in a maze problem from GFG

#include<iostream>
using namespace std;


void printAllPermutation(string str,int i, int n){
    // base case
    if(i>=n){
        cout<<str<<endl;
        return;
    }

    // 1 case hm solve karenge baaki recursion karega
    for(int j=i;j<n;j++){
        swap(str[i],str[j]);
        printAllPermutation(str,i+1,n);

        // backtrack 
        swap(str[i],str[j]);
    }
}


int main(){

    string str = "abc";
    int n = str.length();
    int i=0;
    printAllPermutation(str,i,n);




    return 0;
}
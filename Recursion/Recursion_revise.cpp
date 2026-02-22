#include<iostream>
using namespace std;


// void printNto1(int n){
//     // base case
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     printNto1(n-1);
// }

// int findfactorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans = n * findfactorial(n-1);
    
//     return ans;
// }

// void print1Ton(int n){


// }


// void sumofdigit(int n){
    
// }


void reverseString(string &str, int start, int end){
    
    if(start >= end){
        return;
    }
    
    
    swap(str[start], str[end]);
    
    
    reverseString(str, start + 1, end - 1);
}


int main(){

    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Original string: " << str << endl;
    
    
    string str1 = str;
    reverseString(str1, 0, str1.length() - 1);
    cout << "Reversed " << str1 << endl;
    
    

    return 0;
}
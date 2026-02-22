// HW
// Leetcode 125
// Leetcode 344............Done
// Leetcode 867
// Leetcode 643
// Leetcode 2114
// Leetcode 
// Leetcode 
// Leetcode 
// Leetcode 
// Leetcode 


#include<iostream>
#include<cstring>
using namespace std;

// 1 find length of char array
// 2 convert all characters into uppercase
// 3 check if it is palindrome or not 
// 4 reverse a string
// 5 
// 
// Test on friday topics: pointers, array, 2darray, binary search, sorting, string
// 
// 
// 



// int main(){

//     char arr[] = {'a','b','c','d' , '\0'};
//     int count = 0;
//     int i=0;
//     while(arr[i] != '\0'){
//         count++;
//         i++;
//     }
//     cout<<count;




//     return 0;
// }



void uppercase(char arr[],int n,int size){
    for(int i=0;i<n;i++){
        char ch = arr[i];
        if(ch >= 'a' && ch <='z'){
            ch = ch - 'a' + 'A'; 
        }
        arr[i] = ch;
    }
    cout<<arr;
}





int main(){
    char arr[100];
    cout<<"Enter character: ";
    cin>> arr;

    int n = 0;
    int i=0;
    while(arr[i] != '\0'){
        n++;
        i++;
    }

    uppercase(arr,n,100);


    return 0;
}
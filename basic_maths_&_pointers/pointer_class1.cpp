#include<iostream>
using namespace std;

// int main(){
//     int a=5;
//     cout<<a<<endl;
//     int b = a;
//     cout<<&a<<endl;
//     // int c = &a;
//     int* ptr = &a;
//     //cout<<sizeof(ptr);

//     int* ptr1;
//     cout<<*ptr1;

//     return 0;
// }



int main(){

    int a = 5;    // stack memory me a variable integer lega space
    cout<<a<<endl;

    int* p = new int;    // heap memory me variable space lega but pointer p uske address ko store krega
    *p = 10;
    cout<<*p<<endl;

    int arr[5] = {0};
    cout<<arr[0]<<arr[1]<<arr[2]<<""<<arr[3]<<arr[4]<<endl;    // stack me


    int* brr = new int[5];      // heap me
    
    cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<" "<<brr[3]<<" "<<brr[4]<<endl;


    delete p;   // deallocate ke liye
    delete brr;

    return 0;
}


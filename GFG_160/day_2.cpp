// move all zeros in the end of the given array

#include<iostream>
using namespace std;


void moveallzeros(int arr[],int n){
    int index=0;

    for(int i=0;i<n;i++){
        if(arr[i] !=0){
            arr[index] = arr[i];
            index++;
        }
    }

    for(int i=index;i<n;i++){
        arr[i] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5] ={3,5,0,0,4};
    int n=5;

    moveallzeros(arr,n);




    return 0;
}



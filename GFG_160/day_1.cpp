// find second largest element in the given array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[3] = {10,15,10};
    int n = 3;

    int largest = INT_MIN;

    int secondlargest = INT_MIN;



    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }

    cout<<"largest: "<<largest<<endl;
    cout<<"second largest: "<<secondlargest;


    return 0;
}
#include<iostream>
using namespace std;

// Reverse the digit.............................................
// 1 sum of array................................................Done
// 2 find largest number in is_array.............................Done
// 3 find 2nd largest number in an is_array......................
// 4 rotate an array towards left by 1...........................Done
// 5 linear/binary _search.......................................
// 6 sort 0 and 1 without using sorting algorithm................Done
// 7 find unique number..........................................
// 8 find duplicate in an is_array(leetcode 26)..................
// 9 print all subarray..........................................
// 10 max sum of subarray(leetcode 53)...........................
// 11 find kth largest number in array...........................
// 12 leetcode 31................................................
// 13 leetcode 33................................................
// 14 leetcode 875...............................................
// 15 leetcode 74................................................
// 16 leetcode 238...............................................
// 17 rotate an array towards left by k..........................Done
// 18 find maximum sum of subarray with k 




void sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    cout<<"Sum of the array is: "<<sum<<endl;
}

void largest(int arr[],int n){
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"largest elements is: "<<largest <<endl;
}

void secondlargest(int arr[],int n){
    int largest = INT_MIN;
    int seclargest = largest;

    for(int i=0;i<n;i++){
        if(arr[i]>largest ){
           
            seclargest = largest;
            largest = arr[i];
        }
    }
    cout<<"Second largest element is: "<<seclargest<<endl;
}

void linearsearch(int arr[],int n,int target){

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout<<"Target found";
            return;
        }
        
    }
    cout<<"Target not found"<<endl;
}

bool binarysearch(int arr[],int n,int target){

}


int main(){

    int n;
    cout<<"Enter number of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int target = 30;

    //sum(arr,n);
    //largest(arr,n);
    secondlargest(arr,n);                 //verify it's exception case i.e. for that test case failed
    
    //linearsearch(arr,n,30);

    binarysearch(arr,n,50);



    return 0;
}
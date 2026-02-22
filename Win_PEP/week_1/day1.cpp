#include<iostream>
#include<algorithm>
using namespace std;


int findFactorial(int n){
    if(n==1){
        return 1;
    }
    int ans = n * findFactorial(n-1);
    return ans;
}

int factbyloop(int n){
    int ans = 1;
    for(int i=n;i>1;i--){
        ans = ans*i;
    }
    return ans;
}


int findSecondlargest(int size){
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr, arr+size);
    int ans = arr[1];
    //int maximum = INT_MAX;
    return ans;
}

// solve 5 question of array on leetcode 
// find factorial of a number 
// print number from n to 1 
// write a code to swap two number without using third variable 
// find second largest element in a array 
// check whether year is leap or not 
// write a code to check whether a person is eligible to vote or not 
 

void canvoteornot(int n){
    if(n>=18){
        cout<<"Can Vote"<<endl;
    }
    else{
        cout<<"Can Not Vote";
    }
}

void printnto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printnto1(n-1);
}

int main(){
    int n;
    cin>>n;

    // int fact = findFactorial(n);
    // int fact = factbyloop(n);
    // cout<<fact;


    // findSecondlargest();
    // canvoteornot(n);

    printnto1(n);



    return 0;
}
#include<iostream>
#include <algorithm>
using namespace std;

// print array using recursion 

void printarray(int arr[],int n,int index){
    // base case 
    if(index == n){
        return;
    }
    cout<<arr[index]<<" ";
    printarray(arr,n,index + 1);
}






bool searchinarray(int arr[],int n,int index,int target){
    // base case 
    if(index>=n){
        return false;
    }
    if(arr[index]==target){
        return true;
    }

    bool ans = searchinarray(arr,n,index+1,target);
    return ans;
}






void maximuminarray(int arr[],int n,int index,int &maximum){
    // base case 
    if(index==n){
        return;
    }
    maximum = max(maximum,arr[index]);
    maximuminarray(arr,n,index+1,maximum);
}







void minimuminarray(int arr[],int n,int index,int &minimum){
    if(index ==n){
        return;
    }
    minimum = min(minimum,arr[index]);
    minimuminarray(arr,n,index+1,minimum);
}




void printallodds(int arr[],int n,int index){
    if(index==n){
        return;
    }
    if(arr[index]&1){          //to find odd that is arr[i]%2==1 ->odd is eqall to arr[i]&1 bitwise
        cout<<arr[index]<<" ";
    }
    printallodds(arr,n,index+1);
    cout<<endl;
}




void printallevens(int arr[],int n,int index){
    if(index == n){
        return;
    }

    if(arr[index] % 2 == 0){
        cout<<arr[index]<<" ";
    }
    printallevens(arr,n,index+1);
}






int binarysearchinrecursive(int arr[],int n,int s,int e,int target){
    
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }

    if(arr[mid] == target){
        return mid;
    }

    else if(target>arr[mid]){
        return binarysearchinrecursive(arr,n,mid+1,e,target);
    }
    else{
        return binarysearchinrecursive(arr,n,s,mid-1,target);
    }
}







void printdigit(int n){
    if(n==0){
        return;
    }

    int newnumber = n/10;
    printdigit(newnumber);

    int digit = n%10;
    cout<<digit<<" ";
    
}








bool isarraysorted(int arr[],int n,int index){
    if(index == n-1){
        return true;
    }
    bool ans = false;
    bool curr = false;
    if(arr[index+1]>arr[index]){
        curr = true;
    }
    ans = isarraysorted(arr,n,index+1);

    if(curr == true && ans == true){
        return true;
    }
    else{
        return false;
    }
}







int main(){
    // int arr[] = {10,20,30,40,50,60};
    // int n = 6;
    // int index = 0;

    // printarray(arr,n,index);



    // int arr[] = {10,20,30,40,50,60};
    // int n = 6;
    // int index = 0;
    // int target = 50;

    // bool result = searchinarray(arr,n,index,target);
    // cout<<result<<endl;



    
    // int arr[] = {10,20,30,40,50,60};
    // int n = 6;
    // int index = 0;
    // int maximum = INT_MIN;
    // maximuminarray(arr,n,index,maximum);
    // cout<<"maximum number is: "<<maximum<<endl;





    // int arr[] = {10,20,30,40,50,60};
    // int n = 6;
    // int index = 0;
    // int minimum = INT_MAX;
    // minimuminarray(arr,n,index,minimum);
    // cout<<"minimum number is: "<<minimum<<endl;



    // int arr[] = {10,11,12,13,14,15,16};
    // int n=7;
    // int index = 0;
    // printallodds(arr,n,index);
    // printallevens(arr,n,index);




    // int arr[] = {10,20,30,40,50,60,70};
    // int n = 7;
    // int target = 60;
    // int s=0;
    // int e=n-1;

    // int ans = binarysearchinrecursive(arr,n,s,e,target);
    // cout<<"target found at index: "<<ans<<endl;
    



    // int n = 62548;
    // printdigit(n);




    // HW-> check the given array is sorted or not 
    int arr[] = {10,20,40,50,300,2000,8};
    int n=7;
    int index = 0;
    bool ans = isarraysorted(arr,n,index);
    cout<<ans;

    return 0;
}
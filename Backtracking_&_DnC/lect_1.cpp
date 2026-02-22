// divide and conquer 

#include<iostream>
#include<vector>
using namespace std;

// merge 2 sorted array 

void mergetwosortedarrays(int arr[],int na,int brr[],int nb,vector<int> &ans){
    int i = 0;
    int j = 0;

    while(i<na && j<nb ){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    while(i<na){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<nb){
        ans.push_back(brr[j]);
        j++;
    }
    
}




int main(){
    int arr[] = {20,40,60,80,100,105};
    int na = 6;
    int brr[] = {10,30,50,70,90,110,120,150,200};
    int nb = 9;

    vector<int>ans;
    mergetwosortedarrays(arr,na,brr,nb,ans);

    for(int num : ans){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<ans.size();


    return 0;
}
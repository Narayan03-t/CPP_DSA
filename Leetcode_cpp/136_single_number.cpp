// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {

//         int ans=0;
//         int n = nums.size();

//         for(int i=0;i<n;i++){
//             ans = ans ^ nums[i];
//         }

//         return ans;
        
//     }
// };



#include<iostream>
using namespace std;


// LEETCODE Q NO. 136
//  find unique number in given array

int finduniquenumber(int arr[], int size){
    int ans=0;

    // To find unique number we have to do xor operation
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[]={2,1,5,7,2,1,7};
    int size = 7;

    int ans = finduniquenumber(arr,size);
    cout<<"Unique number is: "<<ans;





    return 0;
}
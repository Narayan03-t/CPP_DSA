

// #include<iostream>
// using namespace std;

// int main(){
//     int nums[] = {1,3,5,6};
//     int n = 4;
//     int target = 7;
    
//     int s=0;
//     int e=n-1;
//     int mid = s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(nums[mid] == target){
//             ans = mid;
//             break;
//         }
//         else if(nums[mid] > target){
//             e = mid-1;
//         }
//         else if(nums[mid]<target){
//         s = mid+1;
//         }
//         mid = s+(e-s)/2;

//     }

//     if(ans != -1){
//         cout<<ans;
//     }
//     else{
//         cout<<s;
//     }
        
        


    
// }




// Lower bound
// leetcode 35
#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,2,4,5,8,10};
    int n = 6;
    int target = 7;
    int res = n;
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(nums[mid]>=target){
            res = mid;
            e = mid-1;
        }
        else{
            s=mid+1;
        }

        mid = s+(e-s)/2;
    }

    cout<<"Lower bound is: "<< res;
}







// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int s=0;
//         int e=n-1;
//         int mid = s+(e-s)/2;
//         int ans = n;
//         while(s<=e){
            
//             if(nums[mid] >= target){
//                 ans = mid;
//                 break;
//             }
            
//             else if(nums[mid] > target){
//                 e = mid-1;
//             }
//             else if(nums[mid]<target){
//             s = mid+1;
//             }
//             mid = s+(e-s)/2;

//         }
//         // if(ans == -1){
//         //     return s;
//         // }



//         return ans;
        
//     }
// };






// leetcode : hw__
// leetcode 35
// leetcode 69
// leetcode 278
// leetcode 374
// leetcode 875  
// leetcode 1011
// leetcode 1482
// leetcode 167
// leetcode 532
// leetcode 540
// leetcode 704
// leetcode 852
// leetcode 34
// leetcode 74
// leetcode 268
// leetcode
// leetcode
// leetcode
// gfg aggresive cows problem


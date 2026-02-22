// #include<iostream>
// using namespace std;

// // leetcode 238
// // Q1) input: 1 2 3 4 (array)
// //     output: 24 12 8 6  (array)

// int main(){
    
//     int arr[4] = {1,2,3,4};
//     int n = 4;

//     int product = 1;
//     for(int i=0;i<n;i++){
//         product = product * arr[i];
//     }

//     int newarr[4];
//     for(int i = 0;i<n;i++){
//         if(arr[i] ==0){
//             newarr[i]=0;
//         }
//         else{
//             newarr[i]= product/arr[i];
//         }
        
//     }

//     for(int i=0;i<n;i++){
//         cout<<newarr[i]<<" ";
//     }



//     return 0;
// }








// #include <iostream>

// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = 4;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }  
//     return 0;
// }





// // leetcode 33
// #include <iostream>
// #include <vector>

// using namespace std;




// int search(vector<int>& nums, int target) {
//         int left = 0, right = nums.size() - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (nums[mid] == target) return mid;

//             // Left half is sorted
//             if (nums[left] <= nums[mid]) {
//                 if (nums[left] <= target && target < nums[mid])
//                     right = mid - 1; // target in left half
//                 else
//                     left = mid + 1; // target in right half
//             }
//             // Right half is sorted
//             else {
//                 if (nums[mid] < target && target <= nums[right])
//                     left = mid + 1; // target in right half
//                 else
//                     right = mid - 1; // target in left half
//             }
//         }

//         return -1; // target not found
// }
// int main() {
//     vector<int> nums = {4,5,6,7,0,1,2};
//     int n = 7;
//     int target = 3;

//     int result = search(nums,target);
//     cout<<result;
//     return 0;
// }






// 18 find maximum sum of subarray with k 

#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,4,7,5,6};
    int n = 5;
    int k = 3;

    int sum = 0;
    int ans = 0;
    for(int i=0;i<=k;i++){
        sum = 0;
        for(int j=i;j<k+i;j++){
            sum = sum + arr[j];
        }
        ans = max(sum,ans);
    }

    cout<<ans<<endl;


    return 0;
}
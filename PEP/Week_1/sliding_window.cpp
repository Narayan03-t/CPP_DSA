#include<iostream>
using namespace std;

// brute force

// int main(){
//     int arr[] = {3,4,5,2,1};
//     int n = 5;
//     int k = 3;
//     int sum = 0;
//     int ans = 0;
//     for(int i=0;i<n-k;i++){
//         sum = 0;
//         for(int j=i;j<k+i;j++){
//             sum = sum + arr[j];
//         }
//         ans = max(ans,sum);
//     }
//     cout<<"max sum of subarray is: "<<ans;

//     return 0;
// }





// int main(){
//     int arr[] = {3,4,5,2,1};
//     int n = 5;
//     int k = 3;
//     int sum = 0;
//     int ans = 0;
//     int j = 0;
//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
        
//         if(i-j+1==k){
//         ans = max(ans,sum);
//         sum = sum - arr[j];
//         j++;
//         }
//     }


//     cout<<"max sum of subarray is: "<<ans;

//     return 0;
// }




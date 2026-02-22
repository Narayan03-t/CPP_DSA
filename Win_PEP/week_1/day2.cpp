#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// write a program to print diamond pattern shape 
// sum of AP series 
// print series of AP 

// int main(){
//     int n = 5;
    
    
//     for(int i = 1; i <= n; i++){
        
//         for(int j = 1; j <= n - i; j++){
//             cout << " ";
//         }
        
//         for(int j = 1; j <= 2*i - 1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
    
//     for(int i = n - 1; i >= 1; i--){
        
//         for(int j = 1; j <= n - i; j++){
//             cout << " ";
//         }
        
//         for(int j = 1; j <= 2*i - 1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }



// int main(){
//     int a, d, n;
//     cin >> a >> d >> n; 

//     int sum = n * (2 * a + (n - 1) * d) / 2; // 
//     cout << sum << endl;

//     return 0;
// }



// int main(){
//     int a,d,n;
//     cin>>a>>d>>n;

//     int count = 0;
//     while(count<=n){
//         cout<<a<<" ";
//         a=a+d;
//         count++;
//     }



//     return 0;
// }







// int main(){
//     // int arr[5]={10,20,30,40,50};

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int maximum = INT_MIN;
//     int sl = maximum;

//     for(int i=0;i<n;i++){
//         if(arr[i]>maximum ){
//             maximum = arr[i];
//         }
        
//     }
//     cout<<maximum<<" largest"<<endl;

//     for(int i=0;i<n;i++){
//         if(arr[i]>sl && arr[i] != maximum){
//             sl = arr[i];
//         }
//     }
    
//     cout<<sl<<" second largest"<<endl;

//     int smallest = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//         }
//     }
//     cout<<"Smallest is "<<smallest;

//     return 0;
// }




// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 ans.push_back(arr[i]);
//             }
//         }
//     }

    

//     for(int x : ans){
//         cout<<x<<" ";
//     }



//     return 0;
// }


// // Delete element from array at specific position
// int main(){
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     int pos;
//     cout << "Enter position to delete (0 to " << n-1 << "): ";
//     cin >> pos;
    
//     // Check if position is valid
//     if(pos < 0 || pos >= n){
//         cout << "Invalid position!" << endl;
//         return 0;
//     }
    
//     // Shift elements to the left from the position to delete
//     for(int i = pos; i < n - 1; i++){
//         arr[i] = arr[i + 1];
//     }
    
//     // Reduce size
//     n--;
    
//     cout << "Array after deletion: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }



// [3 5 7 8 13 15 17 18 23 25 27] 


// Delete an element from array from nth position 


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int pos;
//     cin>>pos;

    

//     return 0;
// }


// take two sorted array of size m and n and return the median of two sorted array 


double findMedianBruteForce(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    vector<int> merged;
    
    
    int i = 0, j = 0;
    while(i < m && j < n) {
        if(nums1[i] < nums2[j]) {
            merged.push_back(nums1[i++]);
        } else {
            merged.push_back(nums2[j++]);
        }
    }
    
   
    while(i < m) merged.push_back(nums1[i++]);
    while(j < n) merged.push_back(nums2[j++]);
    
    
    int total = m + n;
    if(total % 2 == 1) {
        return merged[total / 2];
    } else {
        return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }
}


double findMedianOptimal(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size() > nums2.size()) {
        return findMedianOptimal(nums2, nums1);
    }
    
    int m = nums1.size();
    int n = nums2.size();
    int low = 0, high = m;
    
    while(low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (m + n + 1) / 2 - cut1;
        
        int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
        
        int right1 = (cut1 == m) ? INT_MAX : nums1[cut1];
        int right2 = (cut2 == n) ? INT_MAX : nums2[cut2];
        
        if(left1 <= right2 && left2 <= right1) {
            if((m + n) % 2 == 0) {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            } else {
                return max(left1, left2);
            }
        } else if(left1 > right2) {
            high = cut1 - 1;
        } else {
            low = cut1 + 1;
        }
    }
    
    return 0.0;
}

int main(){
    vector<int> arr1 = {1, 3, 8, 9, 15};
    vector<int> arr2 = {7, 11, 18, 19, 21, 25};
    
    cout << "Array 1: ";
    for(int x : arr1) cout << x << " ";
    cout << endl;
    
    cout << "Array 2: ";
    for(int x : arr2) cout << x << " ";
    cout << endl;
    
    cout << "\nMedian (Brute Force): " << findMedianBruteForce(arr1, arr2) << endl;
    cout << "Median (Optimal): " << findMedianOptimal(arr1, arr2) << endl;
    
    // Test with even total length
    vector<int> arr3 = {1, 2};
    vector<int> arr4 = {3, 4};
    cout << "\nArray 3: ";
    for(int x : arr3) cout << x << " ";
    cout << endl;
    
    cout << "Array 4: ";
    for(int x : arr4) cout << x << " ";
    cout << endl;
    
    cout << "Median: " << findMedianOptimal(arr3, arr4) << endl;
    
    return 0;
}
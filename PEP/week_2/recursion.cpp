// REcursion -> 
// function which call itself again and again
// to divide a large problem into smaller parts and 
// by solving smaller parts we get the solution of large problem




// // solve  these question by recursion
// 1) intput = 1234
//    countdigit output = 4

// 2) n=3,m=4;
//     multiplication output 12

// 3)  n=5
//     sum of 1 to n output=45

// 4)  n^m   n=2, m=5
//     output = 32

// 5) sum of digits 1234
//     output = 10

// 6)  check whether a number is prime or not
//     input 13    output true;

// 7) leetcode 70
// 8) leetcode 509


// 2 to 4 (Question)

// do by using recursion 
// sum of array 
// linearsearch
// binary search 
// reverse an array 
// check it is palindrome or not 
// check if array is sorted or not 
// find first occurrence of element
// find last occurrence of element 
// remove all a from string   ->> input: abdaace  -> output: bdce 
// replace all pi with 3.14   ->> input: aipibpdipi  -> output: ai3.14bpdi3.14


// // find first occurrence
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {1,5,5,8,9,10};
//     int n = 6;
//     int target = 5;

//     // answer: 1
//     int s=0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == target ){
//             ans = mid;
//             e=mid-1;
            
//         }
//         if(arr[mid] > target){
//             e = mid -1;
//         }
//         if(arr[mid]<target){
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }

//     cout<<ans;

    
// }



#include<iostream>
using namespace std;

int fact1(int n){
    return 1;
}
int fact2(int n){
    int ans= n*fact1(n-1);
    return ans;
}
int fact3(int n){
    int ans = n*fact2(n-1);
    return ans;
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    int z = fact(n-1);
    int ans = n *z;
    return ans;
}

int arraysum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int sum = arr[0];
    return arr[0]+arraysum(arr+1,n-1);    
    
}

int linearsearch(int arr[], int n, int target) {
    if(n == 0) {
        return -1;
    }
    if(arr[0] == target) {
        return 0;
    }  
    int idx = linearsearch(arr + 1, n - 1, target);

    return (idx == -1) ? -1 : idx + 1;
}

int binarysearch(int arr[], int s, int e, int target) {
    if(s > e) return -1;

    int mid = s + (e - s) / 2;

    if(arr[mid] == target) return mid;

    else if(arr[mid] > target) return binarysearch(arr, s, mid - 1, target);

    else return binarysearch(arr, mid + 1, e, target);
}


void reverseArray(int arr[], int s, int e) {
    if(s >= e) return;

    swap(arr[s], arr[e]);

    reverseArray(arr, s + 1, e - 1);
}


bool isPalindrome(char arr[], int s, int e) {
    if(s >= e){
        return true;
    } 

    if(arr[s] != arr[e]) return false;

    return isPalindrome(arr, s + 1, e - 1);
}


bool issorted(int arr[], int n) {
    if(n == 0 || n == 1){
        return true;
    } 
    if(arr[0] > arr[1]) {
        return false;
    } 
    return issorted(arr + 1, n - 1);
}


void mergeSortedArrays(int arrA[], int n, int arrB[], int m, int arrC[], int i, int j, int k) {
    
    if(i == n && j == m) return;

    if(i == n) {
        arrC[k] = arrB[j];
        mergeSortedArrays(arrA, n, arrB, m, arrC, i, j+1, k+1);
    }
    else if(j == m) {
        arrC[k] = arrA[i];
        mergeSortedArrays(arrA, n, arrB, m, arrC, i+1, j, k+1);
    }
    else if(arrA[i] < arrB[j]) {
        arrC[k] = arrA[i];
        mergeSortedArrays(arrA, n, arrB, m, arrC, i+1, j, k+1);
    }
    else {
        arrC[k] = arrB[j];
        mergeSortedArrays(arrA, n, arrB, m, arrC, i, j+1, k+1);
    }
}

int main(){

    // int n=5;
    // int result = fact(n);
    //cout<<result;

    // int arr[5] = {1,2,3,4,5};
    // int n = 5;
    // int target = 4;
                                                    
    // int sum = arraysum(arr,n);
    // cout<<"sum of all element: "<<sum<<endl;



    // int idx = linearsearch(arr, n, target);
    // cout <<"linear search at: "<< idx << endl;

    
    // int bidx = binarysearch(arr, 0, n - 1, target);
    // cout << "Binary Search at: " << bidx << endl;


    // reverseArray(arr, 0, n - 1);
    // cout << "Reversed Array: ";
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // } 
    // cout << endl;

    
    // char str[] = "nitin";
    // bool pal = isPalindrome(str, 0, 4); 
    // cout << "Is Palindrome: " << (pal ? "Yes" : "No") << endl;


    // input A = 1 3 5 
    // input B = 2 4 6 
    // merge two sorted array in a single array 
    // output = 1 2 3 4 5 6

    int arrA[3] = {1,3,5};
    int n = 3;
    int arrB[3] = {2,4,6};
    int m = 3;

    int arrC[6];

    mergeSortedArrays(arrA, n, arrB, m, arrC, 0, 0, 0);

    cout << "Merged array: ";
    for(int i = 0; i < n + m; i++) {
    cout << arrC[i] << " ";
    }
    cout << endl;



    return 0;
}
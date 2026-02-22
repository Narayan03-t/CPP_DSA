// #include<iostream>
// using namespace std;

// int main(){

// // Given an array of integers nums which is sorted in ascending order, and an integer target, 
// write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.


// // You must write an algorithm with O(log n) runtime complexity.

 

// // Example 1:

// // Input: nums = [-1,0,3,5,9,12], target = 9
// // Output: 4
// // Explanation: 9 exists in nums and its index is 4
// // Example 2:

// // Input: nums = [-1,0,3,5,9,12], target = 2
// // Output: -1
// // Explanation: 2 does not exist in nums so return -1
 









//     return 0;
// }

// // use of STL
// #include<iostream>
// #include<algorithm>
// using namespace std;


// int main(){
//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int n=9;
//     int target = 77;
//     bool ans = binary_search(arr, arr+n, target);
//     cout<<ans;

//     return 0;
// }






// find first occurane of target

// #include<iostream>
// using namespace std;
// void findfirstoccurence(int arr[],int n, int target, int &ansindex){
//     int s=0;
//     int e=n-1;
//     int mid= s + (e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             ansindex = mid;
//             e = mid - 1;
//         }
//         if(target>arr[mid]){
//             s = mid+1;
//         }
//         if(target<arr[mid]){
//             e=mid-1;
//         }

//         mid = s + (e-s)/2;

        
//     }

// }
// int main(){
//     int arr[] = {5,20,20,20,20,20,20,25,35,49,59,69};
//     int n = 12;
//     int target = 69;
//     int ansindex = -1;
    

//     findfirstoccurence(arr, n, target, ansindex);
//     cout<<"index of first occurence is "<<ansindex;




//     return 0;
// }



// find last occurence

// #include<iostream>
// using namespace std;

// void findlastoccurence(int arr[], int n, int target, int &ansindex){
//     int s=0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             ansindex = mid;
//             s = mid + 1;
//         }
//         if(target>arr[mid]){
//             s = mid + 1;
//         }
//         if(target<arr[mid]){
//             e = mid - 1;
//         }
//         mid  = s + (e-s) / 2 ;
//     }
// }

// int main(){
//     int arr[] = {10,20,20,20,20,20,20,20,20,30,40,55,69};
//     int n=13;
//     int target = 20;
//     int ansindex = -1;
//     findlastoccurence(arr, n, target, ansindex);

//     cout<<"Last index is: "<<ansindex;



//     return 0;
// }





//total occurence nikalna hai;  hint (last occurence index - first occurence index + 1)

#include<iostream>
using namespace std;

void findfirstoccurence(int arr[], int n, int target, int &firstindex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;

    while(s<=e){
        if(arr[mid]==target){
            firstindex = mid;
            e = mid - 1;
        }
        if(target<arr[mid]){
            e = mid - 1;
        }
        if(target>arr[mid]){
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
}

void lastoccurence(int arr[], int n, int target, int &lastindex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;

    while(s<=e){
        if(arr[mid]==target){
            lastindex = mid;
            s = mid + 1;
        }
        if(target<arr[mid]){
            e = mid - 1;
        }
        if(target>arr[mid]){
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

}
int main(){
    int arr[] = {10,20,20,20,20,20,20,20,40,60};
    int n = 10;

    int target = 20;
    int firstindex = -1;
    int lastindex = -1;
    findfirstoccurence(arr, n, target, firstindex);
    cout<<"first index: " << firstindex<<endl;

    lastoccurence(arr, n, target, lastindex);
    cout<<"last index: "<< lastindex<<endl;

    int totaloccurence = lastindex - firstindex + 1;

    cout<<"Total occurence is "<<totaloccurence;







    return 0;
}





// // Alternative of reference variable

// #include<iostream>
// using namespace std;

// void findlastoccurence(int arr[], int n, int target){
//     int s=0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ansindex = -1;

//     while(s<=e){
//         if(arr[mid]==target){
//             ansindex = mid;
//             s = mid + 1;
//         }
//         if(target>arr[mid]){
//             s = mid + 1;
//         }
//         if(target<arr[mid]){
//             e = mid - 1;
//         }
//         mid  = s + (e-s) / 2 ;
//     }

//     cout<<ansindex;
// }

// int main(){
//     int arr[] = {10,20,20,20,20,20,20,20,20,30,40,55,69};
//     int n=13;
//     int target = 55;
    
//     findlastoccurence(arr, n, target);

//     //cout<<"Last index is: "<<ansindex;



//     return 0;
// }
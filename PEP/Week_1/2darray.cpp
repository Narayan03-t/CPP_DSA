// #include<iostream>
// using namespace std;

// row wise print
// col wise print
// wave like print

// leetcode 48.............Done




// void printcol(int arr[][4], int rowsize, int colsize){
//     for(int col=0;col<colsize;col++){
        

//         for(int row=0;row<rowsize;row++){
//             cout<<arr[row][col]<<endl;
//         }
        
        
        
//     }
// }  


// int main(){

//     int arr[3] [4]= {
//                      {1,2,3},
//                      {4,5,6},
//                      {7,8,9},




//                     };


//     int rowsize=3;
//     int colsize=4;

    
//     printcol(arr,rowsize,colsize);

   


//     return 0;
// }




// // wave like print
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int n=3;
//     for(int i = 0; i< 2*n-1; i++) {
//         int row, col;
//         if(i < n) {
//             row = i;
//             col = 0;
//         } else {
//             row = n-1;
//             col = i - n + 1;
//         }
//         while(row >= 0 && col < n) {
//             cout << arr[row][col] << " ";
//             row--;
//             col++;
//         }
//     }
//     return 0;
// }







#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int n = 1000000; // Array size
    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;

    int target = n; // Element to search (worst-case)

    auto start = chrono::high_resolution_clock::now();

    int result = linearSearch(arr, target);

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Time taken by linear search: " << duration.count() << " nanoseconds" << endl;

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <chrono>
// using namespace std;

// int linearSearch(const vector<int>& arr, int target) {
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == target) return i;
//     }
//     return -1;
// }

// int main() {
//     const int n = 100000000; // 100 million elements
//     vector<int> arr(n);
    
//     // Fill array from 1 to n
//     for (int i = 0; i < n; i++) arr[i] = i + 1;

//     int target = n; // Worst case: last element

//     auto start = chrono::high_resolution_clock::now();

//     int result = linearSearch(arr, target);

//     auto end = chrono::high_resolution_clock::now();
//     auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     cout << "Time taken for linear search: " << duration.count() << " nanoseconds" << endl;

//     return 0;
// }




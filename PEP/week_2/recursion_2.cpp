#include<iostream>
#include<algorithm>

using namespace std;



// input A = 1 3 5 
    // input B = 2 4 6 
    // merge two sorted array in a single array 
    // output = 1 2 3 4 5 6


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

    int maximum = INT_MIN;
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
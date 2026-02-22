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
    cout<<"last index: "<< lastindex;







    return 0;
}


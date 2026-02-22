// bubble sort

// largest element will be at correct position first

// #include<iostream>
// #include<algorithm>
// using namespace std;


// int main(){
//     int arr[] = {20,15,10,5};
//     int n=4;

//     for(int j=0;j<n-1;j++){
//         for(int i=0;i<n-1-j;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[i],arr[i+1]);
            
//             }
//         }
//     }
    

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }



//     return 0;
// }






// selection sort 

// smallest element will be at correct position first

// #include<iostream>
// #include<algorithm>
// using namespace std;


// int main(){
//     int arr[] = {20,15,10,5};
//     int n=4;

//     for(int i=0;i<n;i++){
//         int minindx=i;
//         int min = arr[i];
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<min){
//                 min = arr[j];
//                 minindx = j;
//             }
//         }
//         swap(arr[i],arr[minindx]);

//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }



//     return 0;
// }








// insertion sort....////

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[] = {20,15,10,5};
    int n=4;

    for(int i=1;i<n;i++){
        int j=i-1;
        int curr = arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>curr){
            arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]= curr;
    }
    


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}



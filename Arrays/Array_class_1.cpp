#include<iostream>
using namespace std;

// int main(){
//     // int arr[5] = {10,20,50,70,80};
//     // int crr[] = {2,3,5,7};

//     // cout<<arr[1]<<endl;
//     // cout<<arr[5]<<endl;
//     // cout<<crr[0]<<endl;
//     // cout<<crr[4]<<endl;
//     // cout<<crr[2]<<endl;


//     // int arr[4];
//     // fill(arr,arr+4,10);
//     // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" ";


//     return 0;
// }



// // INPUT TAKING

// int main(){
//     // INPUT
//     int arr[5];
//     for(int index=0;index<5;index++){
//         cout<<"Enter the value for index "<<index<<endl;
//         cin>>arr[index];
//     }

//     // OUTPUT PRINT

//     for(int index=0;index<5;index++){
//         cout<<arr[index]<<" ";
//     }




//     return 0;
// }



// #include<iostream>
// using namespace std;

// void print(int arr[],int size){
//     for(int index=0;index<4;index++){
//         cout<<arr[index]<<" ";
//     }
//     cout<<endl;

// }

// void solve1(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i] * 10 <<" ";
//     }
// }


// int main(){
//     int arr[4] = {10,20,30,40};
//     int size=4;
//     print(arr,size);
//     solve1(arr,size);
    
// }






// LINEAR SEARCH ALGORITHM

// #include<iostream>
// using namespace std;

// bool findtarget(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }

//     return false;

// }

// int main(){
//     // int arr[5]={10,20,30,40,50};
//     // int size=5;
//     // int target=55;

//     // int ans = findtarget(arr,size,target);
//     // cout<<"ans: "<<ans;

//     int arr[100];
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;

//     for(int i=0;i<size;i++){
//         cout<<"Enetr the element of index "<<i<<" ";
//         cin>>arr[i];
//     }


//     int target;
//     cout<<"Enter the target value: ";
//     cin>>target;

//     int ans = findtarget(arr,size,target);
//     cout<<"ans: "<<ans;





//     return 0;
// }



// MAX MIN

// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findMax(int arr[],int size){
//     int maxans = INT_MIN;   
//     for(int i=0;i<size;i++){
//         // if(arr[i]>maxans){
//         //     maxans = arr[i];

//         // }

//         maxans=max(maxans,arr[i]);
//     }
//     cout<<"maximum is: "<<maxans;
    
// }




// int main(){
//     int arr[100];
//     int size;
//     cout<<"Enter size of array ";
//     cin>>size;

//     for(int i=0;i<size;i++){
//         cout<<"Enter the element of index at "<<i<<" ";
//         cin>>arr[i];
//     }

//     findMax(arr,size);







//     return 0;
// }




// Total number of zeros and ones


// #include<iostream>
// using namespace std;

// void totalzerosandones(int arr[],int size){
//     int totalzeros=0;
//     int totalones=0;

//     for(int i=0;i<size;i++){
//         int currentelement = arr[i];
//         if(arr[i]==0){
//             totalzeros++;
//         }
//         if(arr[i]==1){
//             totalones++;
//         }
//     }
//     cout<<"Total Number of zeroes: "<<totalzeros<<endl;
//     cout<<"Total number of ones: "<<totalones<<endl;
// }


// int main(){
//     int arr[100];
//     int size;
//     cout<<"Enter size of array ";
//     cin>>size;

//     for(int i=0;i<size;i++){
//         cout<<"Enter the element of index at "<<i<<" ";
//         cin>>arr[i];
//     }

//     totalzerosandones(arr,size);







//     return 0;




// EXTREME PRINTING

// #include<iostream>
// using namespace std;

// void printextreme(int arr[],int size){
//     int i=0;
//     int j=size-1;

//     while(i<=j){
//         if(i==j){
//             cout<<arr[i];
//             //i++;
//             break;
//         }
//         else{
//         cout<<arr[i]<<" ";
//         i++;
//         cout<<arr[j]<<" ";
//         j--;
//     }
//         }

// }

// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int size=7;
//     printextreme(arr,size);
//     return 0;
// }







// H W: 
// swap krna
// reverse an array 



// reverse an array

#include<iostream>
#include<algorithm>
//#include <bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int size){
    // int i=0;
    // int j=size-1;

    // while(i<=j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }

    reverse(arr,arr+size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";           
    }

}



int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;

    reversearray(arr,size);
    return 0;
}
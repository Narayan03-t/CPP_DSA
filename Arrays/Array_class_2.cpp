// #include<iostream>
// using namespace std;


// // LEETCODE Q NO. 136
// //  find unique number in given array

// int finduniquenumber(int arr[], int size){
//     int ans=0;

//     // To find unique number we have to do xor operation
//     for(int i=0;i<size;i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main(){

//     int arr[]={2,1,5,7,2,1,7};
//     int size = 7;

//     int ans = finduniquenumber(arr,size);
//     cout<<"Unique number is: "<<ans;





//     return 0;
// }








// sort zeros and ones

// void sortzerosandones(int arr[], int size){
//     // int zeros=0;
//     // int ones=1;

//     // counting zeros and ones
//     int zeros=0;
//     int ones=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeros++;
//         }
//         if(arr[i]==1){
//             ones++;
//         }

//     }
//     // insertion

//     // for(int i=0;i<zeros;i++){
//     //     arr[i]=0;

//     // }
//     // for(int i=zeros;i<size;i++){
//     //     arr[i]=1;
//     // }

//     fill(arr,arr+zeros,0);
//     fill(arr+zeros,arr+size,1);
// }






// int main(){

//     int arr[]={1,0,1,0,1,1,0};
//     int size = 7;

//     sortzerosandones(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }




//     return 0;
// }





// sorting algorthm

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void sortzerosandones(int arr[], int size){
//     // int zeros=0;
//     // int ones=1;

//     // counting zeros and ones
//     int zeros=0;
//     int ones=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeros++;
//         }
//         if(arr[i]==1){
//             ones++;
//         }

//     }
//     // insertion

//     // for(int i=0;i<zeros;i++){
//     //     arr[i]=0;

//     // }
//     // for(int i=zeros;i<size;i++){
//     //     arr[i]=1;
//     // }

//     fill(arr,arr+zeros,0);
//     fill(arr+zeros,arr+size,1);
// }






// int main(){

//     int arr[]={1,0,1,0,1,1,0};
//     int size = 7;

//     //sortzerosandones(arr,size);
//     sort(arr,arr+size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }




//     return 0;
// }








// // PRINT ALL PAIR IN THE GIVEN ARRAY
// #include<iostream>
// using namespace std;

// void printallpair(int arr[], int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"  ";
//         }
//     }
// }


// int main(){
//     int arr[]={10,20,30,40};
//     int size=4;
//     printallpair(arr,size);



//     return 0;
// }




// CHECK TWO SUM

// #include<iostream>
// using namespace std;

// bool checktwosum(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main(){
//     int arr[]={10,20,30,40};
//     int size = 4;

//     bool ans = checktwosum(arr,size,600);
//     if(ans==true){
//         cout<<"Pair found";
//     }
//     else{
//         cout<<"pair not found";
//     }
    
//     return 0;
// }



// #include<iostream>
// using namespace std;

// pair<int,int> checktwosum(int arr[],int size,int target){
//     pair<int,int>ans = make_pair(-1,-1);
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.first=arr[i];
//                 ans.second=arr[j];
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }


// int main(){
//     int arr[]={10,20,30,40};
//     int size = 4;

//     pair<int,int> ans = checktwosum(arr,size,60);

//     if(ans.first==-1 && ans.second==-1){
//         cout<<"pair not found";

//     }
//     else{
//         cout<<"pair found: " << ans.first<<","<<ans.second;
//     }





//     return 0;
// }



// // check two sum by using array

// #include<iostream>
// using namespace std;

// void checktwosumbyusingarray(int arr[],int size,int target,int ans[]){

//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 ans[0]=arr[i];
//                 ans[1]=arr[j];

                
                
//             }
//         }
//     }
    
// }


// int main(){
//     int arr[]={10,20,30,40};

    
//     int size = 4;
//     int ans[2]={INT_MIN , INT_MIN};
//     int target = 60;

//     checktwosumbyusingarray(arr,size,target,ans);
//     cout<<ans[0]<<","<<ans[1];




//     return 0;
// }






// check two sum by using array

// #include<iostream>
// using namespace std;

// void printalltwosumbyusingarray(int arr[],int size,int target){

//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<arr[i]<<","<<arr[j]<<" ";
                

                
                
//             }
//         }
//     }
    
// }


// int main(){
//     int arr[]={10,20,30,40};

    
//     int size = 4;
//     int ans[2]={INT_MIN , INT_MIN};
//     int target = 60;
//     printalltwosumbyusingarray(arr,size,target);

   
//     return 0;
// }


// print all triplet in the given array



// #include<iostream>
// using namespace std;

// void printalltriplet(int arr[],int size){
//     int count = 0;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             for(int k=0;k<size;k++){
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" ";
//                 count++;
//             }
//         }

//     }
//     cout<<"total number of tripet is: "<<count;
// }


// int main(){
//     int arr[]={10,20,30,40};
//     int size = 4;
//     printalltriplet(arr,size);
// }










// // TWO SUM LEETCODE Q NO. 1
// #include<iostream>
// using namespace std;

// void twosum(int arr[],int size,int target, int ans[]){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 ans[0]=i;
//                 ans[1]=j;
               
//             }
//         }
//     }
    

//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<2;j++){
//     //         cout<<ans[i]<<","<<ans[j];
//     //     }
//     // }
// }


// int main(){

//     int arr[]={2,7,11,15};
//     int size = 4;
//     int target=18;

//     int ans[]={INT_MIN,INT_MIN};

//     twosum(arr,size,target,ans);
//     cout<<ans[0]<<","<<ans[1];







//     return 0;
// }


// // CHATGPT CODE FOR THIS QUESTION IS WRITTEN BELOW VERIFY IT FROM OUR OWN CODE

// #include <iostream>
// using namespace std;

// void twosum(int arr[], int size, int target, int ans[]) {
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] + arr[j] == target) {
//                 ans[0] = i; // Store the index of the first element
//                 ans[1] = j; // Store the index of the second element
//                 return;     // Exit the function as soon as we find the target
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {2, 7, 11, 15};
//     int size = 4;
//     int target = 9;

//     int ans[2] = {-1, -1}; // Initialize ans with default values indicating no solution

//     //twosum(arr, size, target, ans);

//     // Check if a solution was found
//     if (ans[0] != -1 && ans[1] != -1) {
//         cout << "Indices of the two numbers are: " << ans[0] << ", " << ans[1] << endl;
//     } else {
//         cout << "No pair found with the given target." << endl;
//     }

//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {-1,-4,0,3,4,10};
//     int n = 6;

//     //int ans[6];
//     for(int i=0;i<n;i++){
//          arr[i] = arr[i]*arr[i];
         
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }



// Rotate an array by k place;

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2,4,6,8,15,50};
    int n = 6;
    int k = 2;

    int shift = k%n;

    // copy
    int temp[1000];
    int index = 0;

    for(int i=n-shift;i<n;i++){
        temp[index] = arr[i];
        index++;
    }

    // shift

    for(int i=n-1;i>=0;i--){
        arr[i] = arr[i-shift];
    }

    // insert
    for(int i=0;i<shift;i++){
        arr[i] = temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
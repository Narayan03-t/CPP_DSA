// 2D ARRAY

// #include<iostream>
// using namespace std;



// int main(){
//     int arr[3][3] = {
//                     {10,20,30},
//                     {11,12,13},
//                     {15,16,17},
                    
//     };

//     //cout<<arr[0][2];
//     int rows=3;
//     int columns=3;

//     // row wise print array ko

//     // for(int row = 0; row<rows;row++){
//     //     for(int col=0;col<columns;col++){
//     //         cout<<arr[row] [col]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     // col wise array ko print krna hai

//     // for(int row = 0; row<rows;row++){
//     //     for(int col=0;col<columns;col++){
//     //         cout<<arr[col] [row]<<" ";
//     //     }
//     //     cout<<endl;
//     // }


//     // diagonally print krna hai array ko
//     // for(int row = 0; row<rows;row++){
//     //     for(int col=0;col<columns;col++){
//     //         if(row==col){
//     //             cout<<arr[row][col]<<" ";
//     //         }
//     //     }
//     //     cout<<endl;
//     // }

//     // for(int i=0;i<rows;i++){
//     //     cout<<arr[i][i]<<" ";
//     // }
    

//     for(int i=0;i<rows;i++){
//         cout<<arr[i][rows-1-i]<<endl;
//     }


//     return 0;
// }




// taking input in 2D array

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3];
//     int rowsize = 3;
//     int colsize = 3;

    
//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             cout<<"Enter the value in row ("<<row<<","<<col<<")"<<" ";
//             cin>>arr[row] [col];
//         }
//     }

//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             cout<<arr[row] [col]<<" ";
//         }
//         cout<<endl;
//     }






//     return 0;
// }






// // searching    Linear search

// #include<iostream>
// using namespace std;

// bool searchin2d(int arr[][4] , int rowsize,int colsize,int target){
//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             if(arr[row][col]==target){
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// int main(){

//     int arr[3] [4]= {
//                      {10,20,30,40},
//                      {11,22,33,44},
//                      {5,10,55,69},




//                     };


//     int rowsize=3;
//     int colsize=4;
//     int target=69;

//     bool ans = searchin2d(arr,rowsize,colsize,target);
//     if(ans==1){
//         cout<<"Target found";
//     }
//     else{
//         cout<<"Target not found";
//     }

    


//     return 0;
// }



// // create 2d array by using vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<vector<int>> arr (4, vector<int>(3,69));

//     int rowsize = arr.size();
//     int colsize = arr[0].size();

//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }




//     return 0;
// }




// // find minimum in 2d array

// #include<iostream>
// using namespace std;

// int min_value = INT_MAX;

// int findminimumin2d(int arr[][4],int rowsize, int colsize){
//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             min_value = min(arr[row][col] , min_value);
            
//         }
//     }

//     return min_value;
// }


// int main(){

//     int arr[3] [4]= {
//                      {10,20,30,40},
//                      {11,22,33,44},
//                      {5,10,55,-69},




//                     };


//     int rowsize=3;
//     int colsize=4;

//     int ans= findminimumin2d(arr,rowsize,colsize);
//     cout<<ans;
    

   


//     return 0;
// }






// find maximum in 2d array

// #include<iostream>
// using namespace std;

// int max_value = INT_MIN;

// int findmaximumin2d(int arr[][4],int rowsize, int colsize){
//     for(int row=0;row<rowsize;row++){
//         for(int col=0;col<colsize;col++){
//             max_value = max(arr[row][col] , max_value);
            
//         }
//     }

//     return max_value;
// }


// int main(){

//     int arr[3] [4]= {
//                      {10,20,30,40},
//                      {11,22,33,44},
//                      {5,10,55,69},




//                     };


//     int rowsize=3;
//     int colsize=4;

//     int ans= findmaximumin2d(arr,rowsize,colsize);
//     cout<<ans;
    

   


//     return 0;
// }








// row wise sum

// #include<iostream>
// using namespace std;


// void printrowsum(int arr[][4], int rowsize, int colsize){
//     for(int row=0;row<rowsize;row++){
//         int sum=0;

//         for(int col=0;col<colsize;col++){
//             sum = sum + arr[row][col];
//         }
        
        
//         cout<<sum<<endl;
//     }
// }  


// int main(){

//     int arr[3] [4]= {
//                      {10,20,30,40},
//                      {11,22,33,44},
//                      {5,10,55,69},




//                     };


//     int rowsize=3;
//     int colsize=4;

    
//     printrowsum(arr,rowsize,colsize);

   


//     return 0;
// }





// column wise sum

// #include<iostream>
// using namespace std;


// void printcolsum(int arr[][4], int rowsize, int colsize){
//     for(int col=0;col<colsize;col++){
//         int sum=0;

//         for(int row=0;row<rowsize;row++){
//             sum = sum + arr[row][col];
//         }
        
        
//         cout<<sum<<endl;
//     }
// }  


// int main(){

//     int arr[3] [4]= {
//                      {10,20,30,40},
//                      {11,22,33,44},
//                      {5,10,55,69},




//                     };


//     int rowsize=3;
//     int colsize=4;

    
//     printcolsum(arr,rowsize,colsize);

   


//     return 0;
// }



// diagonal sum

// #include<iostream>
// using namespace std;

// int sum = 0;
// void printdiagonalsum(int arr[][3], int rowsize, int colsize){
//     // for(int i=0; i<rowsize;i++){
//     //     sum = sum + arr[i][i];
//     // }

//     // for opposite diagonal sum

//     for(int i=0; i<rowsize;i++){
//         sum = sum + arr[i][rowsize-i-1];
//     }
//     cout<<"Sum: "<<sum;
// }

// int main(){

//     int arr[3] [3]= {
//                      {10,20,30},
//                      {11,22,33},
//                      {5,10,55},




//                     };


//     int rowsize=3;
//     int colsize=3;

//     printdiagonalsum(arr,rowsize,colsize);

    
    

   


//     return 0;
// }





// print transpose of matrix

#include<iostream>
using namespace std;

// int ans[100][100] = {0};
// void printtransposeofmatrix(int arr[][3], int rowsize, int colsize){
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<colsize;j++){
//             ans[i][j] = arr[j][i];
//         }
//         cout<<endl;
//     }
    
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<colsize;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }

// int main(){

//     int arr[3] [3]= {
//                      {10,20,30},
//                      {11,22,33},
//                      {5,10,55},




//                     };


//     int rowsize=3;
//     int colsize=3;

//     printtransposeofmatrix(arr,rowsize,colsize);

    
    

   


//     return 0;
// }





// print transpose of matrix without using new array;







void printtransposeofmatrix(int arr[][3], int rowsize, int colsize){
    for(int i=0;i<rowsize;i++){
        for(int j=i;j<colsize;j++){
            swap(arr[i][j], arr[j][i]);
        }
        cout<<endl;
    }
    
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}

int main(){

    int arr[3] [3]= {
                     {10,20,30},
                     {11,22,33},
                     {5,10,55},




                    };


    int rowsize=3;
    int colsize=3;

    printtransposeofmatrix(arr,rowsize,colsize);

    
    

   


    return 0;
}

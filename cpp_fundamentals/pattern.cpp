#include<iostream>
using namespace std;

// print square
// **** 
// **** 
// **** 
// **** 

// int main(){
//     for(int i=0;i<4;i++){
        
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// print rectangle
// *****
// *****
// *****

// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
    
    
    
//     return 0;
// }



// print hollow rectangle
// ******
// *    *
// *    *
// *    *
// ******

// int main(){
//     for(int row=0;row<5;row++){

//         for(int col=0;col<6;col++){
//             if(row == 0 || row == 4){
//                 cout<<"*";
//             }

//             else{

//                 if(col==0 || col==5){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             } 
            
            
            
                
//             }
//             cout<<endl;
//         }
//         cout<<endl;
    





//     return 0;
// }



// Genric code

// int main(){
//     int ROWS=10;
//     int COLS=7;
//     for(int row=0;row<ROWS;row++){

//         for(int col=0;col<COLS;col++){
//             if(row == 0 || row == ROWS-1){
//                 cout<<"*";
//             }

//             else{

//                 if(col==0 || col==COLS-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             } 
            
                            
//             }
//             cout<<endl;
//         }
//         cout<<endl;
    
//     return 0;
// }






// int main(){
//     int ROWS;
//     cout<<"Enter number of rows: ";
//     cin>>ROWS;
//     int COLS;
//     cout<<"Enter number of cols: ";
//     cin>>COLS;

//     for(int row=0;row<ROWS;row++){

//         for(int col=0;col<COLS;col++){
//             if(row == 0 || row == ROWS-1){
//                 cout<<"*";
//             }

//             else{

//                 if(col==0 || col==COLS-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             } 
            
                            
//             }
//             cout<<endl;
//         }
//         cout<<endl;
    
//     return 0;
// }




// Half pyramid 
// *
// **
// ***
// ****
// *****

// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// GENRIC CODE FOR HALF PYRAMID

// int main(){
//     int ROWS;
//     cout<<"Enter number of rows: ";
//     cin>>ROWS;

//     for(int row=0;row<ROWS;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// inverted half pyramid
// *****
// ****
// ***
// **
// *

// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<5-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// // genric for inverted pyramid

// int main(){
//     int ROWS;
//     cout<<"Enter number of rows: ";
//     cin>>ROWS;

//     for(int row=0;row<ROWS;row++){
//         for(int col=0;col<ROWS-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// Numeric half pyramid

// int main(){

//     for(int row=0;row<5;row++){

//         for(int col=0;col<row+1;col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;

//    }
// }



// int main(){
//     int ROWS;
//     cout<<"Enter number of rows: ";
//     cin>>ROWS;
//     for(int row=0;row<ROWS;row++){

//         for(int col=0;col<row+1;col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;

//    }
// }



// inverted numeric half pyramid

// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<5-row;col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// GENRIC CODE 

int main(){
    int ROWS;
    cout<<"Enter number of rows: ";
    cin>>ROWS;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<ROWS-row;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}
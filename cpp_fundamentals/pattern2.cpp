#include<iostream>
using namespace std;


// Full pyramid
//     * 
//   * * 
//  * * * 
// * * * * 
//* * * * *

// int main(){
//     // outer loop
//     for(int row=0;row<5;row++){
//         // inner loop for space
//         for(int col=0;col<5-row-1;col++){
//             cout<<" ";
//         }
//         // inner loop again for *
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// int main(){

//     int rows;
//     cout<<"Enter number of rows: ";
//     cin>>rows;
//     // outer loop
//     for(int row=0;row<rows;row++){
//         // inner loop for space
//         for(int col=0;col<rows-row-1;col++){
//             cout<<" ";
//         }
//         // inner loop again for *
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// inverted full pyramid
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *

// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<5-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(int row=0;row<rows;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<rows-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}




// dimanod wla krna hai





// #include<iostream>
// using namespace std;


// void dynamicallocationarray(int arr[],int n){
    

//     cout<<"After inserting the element array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }



// }
// int main(){
//     // // static memory location
//     // int arr[5]={10,20,30,40,50};
//     // int size =5;
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }


//     // dynamic memory location

//     int n;
//     cout<<"Enter number of element in array: ";
//     cin>>n;

//     int *arr = new int [n];
    
//     cout<<"Enter the element in each index of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     dynamicallocationarray(arr,n);


//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;

// void printarray(vector<int>v){
//     int size = v.size();

//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){

//     vector<int>v;   // vector declared


//     // now insert data in array

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);

//     printarray(v);

//     v.pop_back();
//     printarray(v);

//     v.pop_back();
//     printarray(v);

//     v.pop_back();
//     printarray(v);




//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// void printarray(vector<int>v){
//     int size = v.size();

//     cout<<"array afetr inserting the data: "<<" ";

//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }



// int main(){



//     // vector<int>v;
    
//     // int n;
//     // cout<<"Enter no. of element in array: ";
//     // cin>>n;

//     // cout<<"Enter data in the array: "<<endl;

//     // for(int i=0;i<n;i++){
//     //     int d;
//     //     cin>>d;
//     //     v.push_back(d);
//     // }

//     // printarray(v);


//     // for(int i=0;i<10;i++){
//     //     v.push_back(77);
//     // }
//     // printarray(v);


//     // v.clear();
//     // v.push_back(11);
//     // printarray(v);
    
    
//     vector<int>arr2(5,69);

//     printarray(arr2);

//     arr2.push_back(77);
//     printarray(arr2);
    
    
    
//     return 0;
// }



// vector by love babbar

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector creation
    vector <int> marks;

    vector <int> miles(10);    // 10 size of array created

    vector <int> distance(15, 10);

    // for(int i=0;i<distance.size();i++){
    //     cout<<distance[i]<<" ";
    // }

    for(int i:distance){
        cout<<i<<" ";
    }



    return 0;
}
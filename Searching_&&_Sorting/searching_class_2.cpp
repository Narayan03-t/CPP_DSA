// find peak index in mountain array

// #include<iostream>
// #include<vector>
// using namespace std;


// int peakindexinmountain(vector<int>& arr){
//     int n = arr.size();

//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;
//     int ansindex = -1;

//     while(s<=e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid +1;
//         }

//         else{
//             ansindex = mid;
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ansindex;
// }


// int main(){
//     vector<int>arr;
//     arr.push_back(10);
//      arr.push_back(11);
//       arr.push_back(9);
//        arr.push_back(8);
//         arr.push_back(7);
//          arr.push_back(6);
//           arr.push_back(5);


          

//         int ans = peakindexinmountain(arr);

//         cout<<ans;







//     return 0;
// }














// #include<iostream>
// #include<vector>
// using namespace std;


// int peakindexinmountain(vector<int>& arr){
//     int n = arr.size();

//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;
//     int ansindex = -1;

//     while(s<=e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid +1;
//         }

//         else{
//             ansindex = mid;
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return arr[mid];
// }


// int main(){
//     vector<int>arr;
//     arr.push_back(10);
//      arr.push_back(11);
//       arr.push_back(9);
//        arr.push_back(8);
//         arr.push_back(7);
//          arr.push_back(6);
//           arr.push_back(5);


          

//         int ans = peakindexinmountain(arr);

//         cout<<ans;







//     return 0;
// }
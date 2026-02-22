// 1 2's compliment
// 2 hashmap
// 3 kadane algorithm





// unordered map

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){

//     // declare
//     unordered_map<int,int>table;
//     // insertion
//     table[1] = 55;
//     table[2] = 66;
//     table[3] = 69;
//     table[4] = 45;

//     // to print all
//     //unordered_map<int,int>::iterator it;
//     for(auto it : table){
//         int key = it.first;
//         int value = it.second;

//         cout<<"key "<<key<<" value "<<value<<endl;
//     }

//     // updation
//     table[1] = 40;

//     // to delete
//     table.erase(4);

//     for(auto it : table){
//         int key = it.first;
//         int value = it.second;
//         cout<<key <<" :"<<value<<endl;
//     }

//     // searching (to find in table)

//     if(table.find(4) != table.end()){
//         int value = table[4];
//         cout<<"Found "<<value<<endl;

//     }
//     else{
//         cout<<"Not found";
//     }


//     return 0;
// }



// 2's complement

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int>findtwoscomp(vector<int>binary){
//     int n=binary.size();

//     // first find ones complement by flip the bits

//     vector<int>twoscomp(n+1 ,0);

//     for(int i=n-1, k = twoscomp.size()-1;i>=0;i--,k--){
//         if(binary[i] == 0){
//             twoscomp[k] = 1;
        
//         }
//         else{
//             twoscomp[k] = 0;
//         }
//     }
//     // now i have flipped the bits (bits flipped) one's compliment
//     // now add 1 to get two's complement 

//     int carry = 1;

//     for(int i=twoscomp.size()-1;i>=0;i--){
//         int sum = twoscomp[i] + carry;
//         twoscomp[i] = sum % 2;
//         carry = sum / 2;
//     }

//     if(carry != 0){
//         twoscomp[0] = carry;
//     }
//     return twoscomp;

// }

// int main(){

//     vector<int>binary = {1,1,1,0,1,0,1,1,0};
//     vector<int>twoscomp = findtwoscomp(binary);  

    
//     for(int i=0;i<twoscomp.size();i++){
//         cout<<twoscomp[i]<<" ";
//     }

//     return 0;
// }













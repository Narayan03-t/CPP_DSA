
// SORT COLORS

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int main(){

    //leetcode: 75  (sort colors)

    

    vector<int>v;
    int n;
    cout<<"Enter no. of element ";
    cin>>n;

    // // method 1
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    // sort(v.begin(),v.end());

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }


    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // method 2
    // int zeros = 0;
    // int ones = 0;
    // int twos = 0;

    // for(int i=0;i<n;i++){
    //     if(v[i]==0){
    //         zeros++;
    //     }
    //     if(v[i]==1){
    //         ones++;
    //     }
    //     if(v[i]==2){
    //         twos++;
    //     }
    // }

    // int i=0;
    // while(zeros--){
    //     v[i]=0;
    //     i++;
    // }
    // while(ones--){
    //     v[i]=1;
    //     i++;
    // }
    // while(twos--){
    //     v[i]=2;
    //     i++;
    // }

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }



    // method 3  three pointer approach

    int l = 0;
    int m = 0;
    int h = n-1;

    while(m<=h){
        if(v[m] == 0){
            swap(v[l],v[m]);
            l++;
            m++;
        }
        else if(v[m]==1){
            m++;
        }
        else if(v[m]==2){
            swap(v[m],v[h]);
            h--;
        }
    }

    for(int i=0;i<n;i++){
        cout<< v[i] <<" ";
    }


    return 0;
}
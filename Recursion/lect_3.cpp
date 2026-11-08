#include<iostream>
using namespace std;

// print all subsequence (DRY RUN 4 TIMES  )

void printallsubsequence(string str,string output,int i,int &count){
    // base case 
    if(i == str.length()){
        cout<<output<<endl;
        count++;
        return;
    }
    // ek case hm solve karenge 
    // include wla
    printallsubsequence(str,output+str[i],i+1,count); 
    // exclude wla 
    printallsubsequence(str,output,i+1,count);
    // baaki recursion kr lega 

    
}



int main(){
    // string str = "swati";
    // string output  = "";
    // int index = 0;
    // int count = 0;

    // printallsubsequence(str,output,index,count);

    // cout<<"Total number of subsequences is "<<count<<endl;

    int a=8;
    int b=6;
    int c=4;
    if(a>b) {
        a=b;
    }    
    if(b>c){
        b=c;
    }
    int sum = a+b+c;
    cout<<sum;
    return 0;
}
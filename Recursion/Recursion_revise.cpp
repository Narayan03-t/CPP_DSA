#include<iostream>
using namespace std;


int findFactorial(int n){
    // base case
    if(n==1){
        return 1;
    }

    // 1 case mai solve karung
    int fact = n * findFactorial(n-1);
    return fact;

}


void printcountingNto1(int n){
    // base case
    if(n==0){
        return;
    }

    cout<<n<<" ";
    printcountingNto1(n-1);

}

void printcounting1toN(int n){
    if(n==0){
        return;
    }

    printcounting1toN(n-1);
    cout<<n<<" ";
}


int powof2(int n){
    // base case
    if(n==0){
        return 1;
    }

    int ans = 2 * powof2(n-1);
    return ans;
}


int findfibnocci(int n){
    // base case
    if(n==0 || n==1){
        return n;
    }

    int ans = findfibnocci(n-1) + findfibnocci(n-2);
    return ans;
}


int sumof1Ton(int n){
    if(n==0){
        return 0;
    }

    int ans = n + sumof1Ton(n-1);
    return ans;
}


int main(){
    // Find Factorial
    // cout<<findFactorial(5);

    // print counting  

    // printcountingNto1(10);
    // printcounting1toN(10);

    // cout<<powof2(5);

    //cout<<findfibnocci(8);

    // for(int i=0;i<8;i++){
    //     cout<<findfibnocci(i)<<" ";
    // }


    cout<<sumof1Ton(10);


    return 0;
}
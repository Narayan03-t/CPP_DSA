#include<iostream>
using namespace std;

// find factorial 
int getfact(int n){
    // base case/condition 
    if(n==0 || n==1){
        return 1;
    }
    int fact = n* getfact(n-1);
    return fact;

}


// count number from n to 1 
void printcounting(int n){
    // base case 
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printcounting(n-1);
}


int powTwo(int n){
    // base case 
    if(n==0){
        return 1;
    }
    // recursive call -> pow(n) = 2*pow(n-1) 
    int ans = 2 * powTwo(n-1);
    return ans;
}

// fibonacci number
int fib(int n){
    // base case 
    if(n==0 || n==1){
        return n;
    }
    // recursive function 
    int ans = fib(n-1) + fib(n-2);
    
    return ans;
}



// sum of n number 
int getsum(int n){
    if(n==1){
        return 1;
    }

    int ans = getsum(n-1) + n;
    return ans;
}


int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // int ans = getfact(n);
    // cout<<"Factorial of "<<n<<" is: "<<ans<<endl;


    // printcounting(10);
    // cout<<powTwo(10);

    // cout<<fib(9)<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<fib(i)<<" ";
    // }
    // cout<<getsum(50);


    return 0;
}
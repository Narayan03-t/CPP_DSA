// reverse of number

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int reverse = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10+lastdigit;
//         n=n/10;
//     }
//     cout<<reverse<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){

    return 0;
}



// find factorial


// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;

//     for(int i=1;i<=n;i++){
//         fact = fact * i;

//     }

//     return fact;
// }


// int main(){
//     int n;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<"Factorial of "<<n<<" is "<<ans;



// }



// // Check Prime

// #include<iostream>
// using namespace std;

// bool checkprime(int n){

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true;

// }

// int main(){
//     int n;
//     cin>>n;
//     bool isprime = checkprime(n);

//     if(isprime){
//         cout<<"Given number is prime";
//     }
//     else{
//         cout<<"Given number is not prime";
//     }
// }



// print all prime between 2 to n;

#include<iostream>
using namespace std;

bool checkprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int count = 0;

    for(int i=2;i<=n;i++){
        bool isprime = checkprime(i);
        if(isprime){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<count;
}
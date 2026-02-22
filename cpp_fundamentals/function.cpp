// #include<iostream>
// using namespace std;

// void printline(){
//     for(int i=1;i<=2;i++){
//         cout<<"Aadmi chutiya hai, kuchh bhi chahta hai"<<endl;
//         for(int j=1;j<=2;j++){
//             cout<<"Ati aalukik swapana salona, chandra sa badan tumhara priye"<<endl;
//         }
//     }
// }

// int main(){

//     printline();
    
// }



// #include<iostream>
// using namespace std;

// void printline(){
//     cout<<"How are you?"<<endl;
//     cout<<"kkrh?";
// }

// int main(){
//     cout<<"Hey"<<endl;

//     printline();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void printsum(int a, int b, int c){
//     int answer=a+b+c;
//     cout<<"sum is: "<< answer;
// }

// int main(){
//     printsum(5,4,1);


// }



// #include<iostream>
// using namespace std;

// int add(int a, int b, int c){
//     int sum = a+b+c;
//     return sum;
// }


// int main(){
//     int sum=add(5,9,6);
//     cout<<"sum is: "<<sum;
//     return 0;

// }




// #include<iostream>
// using namespace std;

// void printmsg(){
//     cout<<"Msg1"<<endl;
//     cout<<"msg2"<<endl;
//     return;
//     cout<<"msg3";
// }

// int main(){
//     printmsg();
// }



//  CW
// Q.1) find max of 3 no. A,B,C
// Q.2) counting from 1 to n
// Q.3) check prime no. or not
// Q.4) check even or odd
// Q.5) sum of all no. upto n(1 to n)
// Q.6) sum of all even no. upto n(1 to n)


// HW IMPORTANT
// Q.1) write a fn to find area of circle
// Q.2) write a fn to find factorial of a no.
// Q.3) print all prime no. from 1 to N
// Q.4) print all digit of an integer   importnt hai ye
// Q.5) create a number using digit  imp hai
// Q.6) print binary representation of decimal no.
// Q.7) convert km to miles
// Q.8) convert farhenhit into celcius
// Q.9) count all set bits of a number
// Q.10) check even odd using bitwise operator




// Q.1) find max of 3 no. A,B,C

// #include<iostream>
// using namespace std;

// void printmax(int num1, int num2, int num3) {
//     if(num1>=num2 && num1>=num3){
//         cout<<"Maimum number is: "<<num1<<endl;
//     }

//     else if(num2>num1 && num2>num3){
//         cout<<"maximum is: "<<num2<<endl; 
//     }
//     else{
//         cout<<"maximum is: "<<num3<<endl;
//     }

// }

// int main(){
//     printmax(8,6,11);

// }



// #include<iostream>
// using namespace std;

// void printmax(int n1 , int n2 , int n3){
//     int ans1 = max(n1,n2);
//     int ans2 = max(ans1,n3);

//     cout<<"maximum number is: "<<ans2<<endl;
// }

// int main(){

//     printmax(55,25,69);

// }




// #include<iostream>
// using namespace std;

// int printmax(int n1 , int n2 , int n3){
//     int ans1 = max(n1,n2);
//     int ans2 = max(ans1,n3);

//     return ans2;
// }

// int main(){

//     int maximum = printmax(55,25,69);

//     cout<<"maximum is: "<<maximum<<endl;

// }


// Q.2) counting from 1 to n

// #include<iostream>
// using namespace std;

// void printcounting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
// }


// int main(){
//     printcounting(20);

// }


// Q.4) check even or odd

// #include<iostream>
// using namespace std;

// void evenodd(int n) {
//     if(n%2==0){
//         cout<<"Even number"<<endl;
//     }
//     else{
//         cout<<"Odd number";
//     }
// }
// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     evenodd(n);

// }

// Q.5) sum of all no. upto n(1 to n)

// #include<iostream>
// using namespace std;

// void sumuptoN(int n){
//     int sum=0;

//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"sum of all no. up to "<<n <<" is "<<sum;
// }
// int main(){
//     sumuptoN(10);

// }

// Q.6) sum of all even no. upto n(1 to n)

// #include<iostream>
// using namespace std;

// void sumofevenuptoN(int n){
//     int sum=0;

//     for(int i=2;i<=n;i=i+2){
//         sum=sum+i;
//     }
//     cout<<"sum of all even no. up to "<< n <<" is "<<sum;
// }
// int main(){
//     sumofevenuptoN(100);

// }


// Q.3) check prime no. or not

#include<iostream>
using namespace std;

bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;

}

int main(){
    bool prime = checkprime(1);
    if(prime){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }

}

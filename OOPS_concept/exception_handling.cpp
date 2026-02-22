// #include<iostream>
// using namespace std;

// class customer{
//     string name;
//     int balance , account_number;


//     public:
//     customer(string name, int balance, int account_number){
//         this->name=name;
//         this->balance = balance;
//         this->account_number = account_number;


//     }

//     // deposit
//     void deposit(int amount){
//         if(amount>0){
//             cout<<amount<<"rs is credited in your account."<<endl;
//             balance+= amount;

//             cout<<balance <<"rs is your new balance"<<endl;
//         }

        
//     }


//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             cout<<amount<<" rs is debited from your account successully."<<endl;
//             balance-=amount;

//             cout<<balance<<"rs is your new balance."<<endl;
//         }

//         else if(amount<0){
//             cout<<"Amount shoulb be greater than 0"<<endl;
//         }
//         else{
//             cout<<"Low balance"<<endl;
//         }
//     }

    





// };

// int main(){

//     customer c1("Guddu", 5000 , 69);

//     c1.deposit(1000);

//     c1.withdraw(6000);










//     return 0;
// }

















#include<iostream>
using namespace std;


// int main(){

//     int a , b;
//     cin>>a;
//     cin>>b;

//     if(b==0){
//         cout<<"Divided by zero is not possible."<<endl;
//         return 0;
//     }

//     int c = a/b;

//     cout<<c<<endl;



//     return 0;
// }





int main(){

    int a , b;
    cin>>a;
    cin>>b;

    try{
        if(b==0)
        throw "divide by zero is not possible";
        int c = a/b;

        cout<<c<<endl;
        
    }

    catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;                                           
    }

   



    return 0;
}
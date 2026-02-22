// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"enter no. of day:";
//     cin>>day;

//     if(day==1){
//         cout<<"sunday";
//     }

//     else if(day==2){
//         cout<<"Monday";
//     }

//     else if(day==3){
//         cout<<"Tuesday";
//     }

//     else if(day==4){
//         cout<<"Wednesday";
//     }

//     else if(day==5){
//         cout<<"Thursday";
//     }

//     else if(day==6){
//         cout<<"Friday";
//     }

//     else if(day==7){
//         cout<<"Saturday";
//     }

//     else if(day==0){
//         cout<<"Weekend";
//     }

//     else{
//         cout<<"Invalid";
//     }

//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){

//     int day;
//     cout<<"Enter no. of days: ";
//     cin>>day;

//     switch(day){
//         case 1:cout<<"sunday"<<endl;
//         break;
//         case 2:cout<<"monday"<<endl;
//         break;
//         case 3:cout<<"Tuesday"<<endl;
//         break;
//         case 4:cout<<"Wednesday"<<endl;
//         break;
//         case 5:cout<<"Thursday"<<endl;
//         break;
//         case 6:cout<<"Friday"<<endl;
//         break;
//         case 7:cout<<"Saturday"<<endl;
//         break;
//         case 0:cout<<"Weekend"<<endl;
//         break;
//         default:cout<<"Invalid"<<endl;
//     }


// }


// Mini calculator

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    char op;
    cout<<"Enter operation"<<endl;
    cin>>op;

    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;

    switch(op){
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        case '%':cout<<a%b<<endl;
        break;
        default:cout<<"Invalid operator, please enter a valid operation:)"<<endl;
        break;
    }

}
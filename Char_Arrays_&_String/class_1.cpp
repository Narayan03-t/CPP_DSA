// #include<iostream>
// using namespace std;

// int main(){
//     // char arr[100];
//     // cout<<"Enetr your name: "<<endl;

//     // //cin>>arr;
//     // cin.getline(arr,100);
//     // cout<<"Your name is: "<<arr<<endl;
//     // cout<<arr[0]<<"->"<<(int)arr[0]<<endl;
//     // cout<<arr[1]<<"->"<<(int)arr[1]<<endl;
//     // cout<<arr[2]<<"->"<<(int)arr[2]<<endl;
//     // cout<<arr[3]<<"->"<<(int)arr[3]<<endl;
    
    
    
//     // char arr[100];

//     // cout<<"Enter input"<<endl;
//     // cin.getline(arr, 100, '\t');
//     // cout<<endl<<arr<<endl;




//     char arr[100];
//     cout<<"enter character"<<endl;
//     //cin>>arr;  // for single word
//     //cin.getline(arr,100);    // for complete senetences;

//     cin.getline(arr,100,'\t');   // delimeter ->> to set constrain like if we hit that buttoon after input can't read

//     cout<<arr;




// }









// find length of char array

// #include<iostream>
// using namespace std;

// int getlength(char arr[], int size){
//     int index = 0;
//     int count = 0;
//     while(arr[index] != '\0'){
//         count++;
//         index++;
//     }
//     return count;
// }

// int main(){
//     char arr[100];
//     cin>>arr;

//     cout<<getlength(arr,100);



//     return 0;
// }



// replace the character

// #include<iostream>
// using namespace std;

// void replacechar(char originalchar, char newchar, char arr[], int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==originalchar){
//             arr[i]=newchar;
//         }
//     }
// }

// int main(){
//     char arr[100];
//     cin>>arr;

//     replacechar('@' , ' ', arr, 100);
//     cout<<arr;


// }



// conver lowercase into uppercase

// #include<iostream>
// using namespace std;

// int getLength(char arr[], int n){
//     int count =0;
//     int i=0;
//     while(arr[i] != '\0'){
//         count++;
//         i++;

//     }
//     return count;
// }

// void convertIntoUppercase(char arr[], int n){
//     int len = getLength(arr,n);
//     for(int i=0;i<len;i++){
//         char ch = arr[i];
//         if(ch >='a' && ch<='z'){
//             ch = ch -'a' + 'A';
//         }
//         arr[i] = ch;
        
//     }
//     cout<<arr;

// }



// // convert into lowercase
// void convertIntoLowercase(char arr[], int n){
//     int len = getLength(arr,n);
//     for(int i=0;i<len;i++){
//         char ch = arr[i];
//         if(arr[i]>='A' && arr[i]<='Z'){
//             ch = ch -'A'+'a';

//         }
//         arr[i] = ch;
//     }
//     cout<<arr;
// }

// int main(){

//     char arr[100];
//     //cin>>arr;
//     cin.getline(arr,100);

//     //convertIntoUppercase(arr,100);


//     convertIntoLowercase(arr,100);
//     return 0;
// }




// // Reverse the char array
// #include<iostream>
// using namespace std;

// int getlength(char arr[],int n){
//     int count = 0;
//     int i =0;
//     while(arr[i] != '\0'){
//         i++;
//         count++;
//     }
//     return count;
// }

// void reverseArray(char arr[], int n){
//     int len = getlength(arr,n);

//     int i=0;
//     int j = len-1;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     char arr[100];
//     //cin.getline(arr,100);
//     cin>>arr;

//     reverseArray(arr,100);
//     cout<<"Reversed char array is: "<<arr<<endl;

//     return 0;
// }



// palindrome or not

#include<iostream>
#include<string>
using namespace std;

int getlength(char arr[]){
    int count = 0;
    int i=0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

bool validpalindrome(char arr[],int n){
    int len = getlength(arr);
    int i=0;
    int j=len-1;
    while(i<=j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
        
    }
    return true;
}


int main(){

    char arr[100];
    cout<<"enter input"<<endl;
    cin>>arr;

    bool ans = validpalindrome(arr,100);

    if(ans == true){
        cout<<"Palindrome found"<<endl;
    }
    else{
        cout<<"Palindrome not found"<<endl;
    }


    return 0;
}
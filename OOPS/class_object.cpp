#include<iostream>
#include<string>
using namespace std;

class Student{
public :
    // constructor
    // default constructor
    Student(){
        cout<<"student default constructor called"<<endl;
    }

    // parametrized constructor
    Student(int id,int age,string name,int subjects){
        cout<<"Student parametrized constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->subjects = subjects;
    }



    // Copy constructor
    Student(const Student &srcobj){
        cout<<"Student Copy constructor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->subjects = srcobj.subjects;
    }

    // attribute (state/properties) of an object 
    int id;
    int age;
    string name;
    int subjects;


    // Behaviour (function/method) that can object can perform
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    void study(){
        cout<<this->name<<" is Studing"<<endl;
    }
    void bunk(){
        cout<<this->name<<" is bunking"<<endl;
    }
    void subject(){
        cout<<this->subjects<<" subjects studying"<<endl;
    }


    // destructor 
    ~Student(){
        cout<<"Default destructor called"<<endl;
    }

};

int main(){
    // Student A;
    // A.id = 1;
    // A.age = 18;
    // A.name = "Tek";
    // A.subjects = 5;

    // A.study();
    // A.subject();
    
    // Student B;
    // B.id = 2;
    // B.age = 19;
    // B.name = "Sahiba";
    // B.subjects = 6;

    // B.sleep();
    // B.subject();

    // Student A(1,18,"Tek",5);         // stack memory
    // Student B(2,17,"Sahiba",6);

    // cout<<A.name<<" "<<A.age<<" "<<A.id<<endl;
    // cout<<B.name<<" "<<B.age<<" "<<B.id<<endl;

    // A.study();
    // B.sleep();

    // Student C = A;
        // OR 
    // Student C(A);
    // cout<<C.name<<endl;





    // Dynamic memory allocation (or student pointer)    (Heap me)
    Student *A = new Student(1,20,"Tek",6);
    cout<<A->name<<endl;
    cout<<A->age<<endl;

    A->study();

    delete A;

    return 0;
}

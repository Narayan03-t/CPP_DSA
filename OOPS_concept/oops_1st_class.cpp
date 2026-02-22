// #include<iostream>
// using namespace std;

// class animal{
//     int n;
//     int p;
//     char str;

// };


// int main(){
//     cout<<"size of empty class is: "<<sizeof(animal)<<endl;

// // isme padding aur greedy alignment ke baare me padhna hai

//     return 0;
// }





#include<iostream>
using namespace std;

class animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;


    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"sleeping"<<endl;
    }

    int getweight(){
        return weight;
    }
    void setweight(int weight){
        this->weight = weight;
    }

    // constructor
    // default constructor
    animal(){
        this->weight=0;
        this->age=0;
        cout<<"This type of constructor is called default constructor."<<endl;
    }


    // parameterised constructor
    animal(int age){
        this->age=age;
        cout<<"This is parameterised constructor."<<endl;
    }

    animal(int age, int weight){
        this->age=age;
        this->weight=weight;
        cout<<"This is parameterised 2 constructor."<<endl;
    }

     animal(int age, int weight, string type){
        this->age=age;
        this->weight=weight;
        this->type=type;
        cout<<"This is parameterised 3 constructor."<<endl;
    }


    // copy constructure

    animal(animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->type=obj.type;
        cout<<"I am inside copy constructure."<<endl;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<" "<<endl;
    }

    ~animal(){
        cout<<"i am inside destructor"<<endl;
    }


};


int main(){
    // object creation
    // static
    // animal rony;
    // rony.age=5;
    // rony.type="dog";
    // cout<<"Age of rony is: "<<rony.age<<endl;
    // cout<<"Rony is ";
    // rony.eat();
    // cout<<"Rony is ";
    // rony.sleep();


    // rony.setweight(25);

    // cout<<"Weight of rony is: "<<rony.getweight();


    // dynamic memory allocation

    // animal* swati = new animal;
    // (*swati).age=21;
    // (*swati).type="billi";
    // cout<<"Swati is ";
    // swati->sleep();
    // //cout<<"swati age is: "<<swati->age;
    // cout<<(*swati).age;



    // animal a(10);
    // animal* b=new animal(10,25);
    // animal* c=new animal(10,25,"swati");

    // animal d=a;
    // animal swati(d);

    // delete b;
    // delete c;
    

    // animal swati;
    // swati.age=21;
    // swati.setweight(47);
    // swati.type="billi";

    // animal vidya=swati;
    // swati.type[0]='c';
    // vidya.setweight(87);
    // swati.print();
    // vidya.print();


    // static destructor automatically
    animal a;
    a.age=5;
    cout<<"Age is: "<<a.age<<endl;


    // manually destructor is called by delete keyword
    animal* b= new animal();
    b->age=56;
    cout<<b->age<<endl;

    delete b;

    return 0;
}
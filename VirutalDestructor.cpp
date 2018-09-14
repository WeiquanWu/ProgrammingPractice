#include<iostream>

using namespace std;
//1: when derived class is deleted, why does is the base class's destructor called?
//Ans: because there is no implementation on the derived class, so it's default destructor which does nothing is called

//2: How do you ensure the base class's Booya is called?
//Ans: create a custom destructor for the Derived class that calls it's own Booya

//3: How do you only call derived Booya?
//Ans: make the Base destructor pure virtual 

//4: How to call both Base and Derived Booya again
//Ans: implement Base Booya
class Base
{
    public:
        virtual void Booya() = 0;
        Base(){}
        virtual ~Base(){}
};

//pure virtual functions can have a body
void Base::Booya()
{
    cout<<"base booya"<<endl;
}

class Derived: public Base
{
    public:
        Derived(){}
        virtual void Booya(){ Base::Booya(); cout<<"derived booya"<<endl;}
        virtual ~Derived(){ Booya();}
};

int main()
{
    Derived* aaa = new Derived();  
    delete aaa;

 // Base* bbb = new Base();  
    //delete bbb;
   // return 0;
}
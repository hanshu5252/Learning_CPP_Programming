#include<iostream>
using namespace std;
class complex;  //  forward deceleration 
class calculator{
    public:
    int add(int a, int b){
    return a+b;
    }
    int sumrealcomplex(complex ,complex );  //function decelartion
    
};
class complex{
    int a,b;
    friend class calculator; // making the whole calculator class frnd
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"the no is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator:: sumrealcomplex(complex o1,complex o2){   //
    return (o1.a+o2.a);
}
int main(){
    complex o1,o2;
    o1.setnumber(2,4);
    o1.printnumber();
    o2.setnumber(5,5);
    o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 "<<res<<endl;


return 0;
}
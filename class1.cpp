#include <iostream>
using namespace std;
    
    class class1{
    protected:
    int num1;
    public:
    class1(){
        cout<<"Enter a number";
        cin>>num1;
    }
};

class class2{
    protected:
    int num2;
    public:
    class2(){
        cout<<"Enter a number";
        cin>>num2;
    }
};

class class3 : public class2 , public class1{
    public:
 void sum(){
 cout <<"Sum is:"<< num1+num2;
 }
 
};



int main(){
 class3 c3;
 c3.sum();

}
#include <iostream>
using namespace std;

class STAFF{
protected:
char name[22],address[22];
public:
STAFF(){
cout<<"Enter name and address"<<endl;
cin>>name>>address;
cout<<"name:"<<name<<"address:"<<address;
}
};

class teaching : public STAFF{

};


int main(){
    STAFF s;
    return 0;
}
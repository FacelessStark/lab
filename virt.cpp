#include <iostream>
using namespace std;
class vehicle{
protected:
int weight;
virtual void name(){

}
};
class bus : public vehicle{
public:
void name() override{
    cout<<"i am a bus"<<endl;
}
};
class car : public vehicle{
public:
void name() override{
    cout<<"i am a car"<<endl;
}

};

int main(){
    bus b;
    car c;
    c.name();
    b.name();
}
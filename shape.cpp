#include <iostream>
using namespace std;

class shape{
    public:
int length,breadth;
shape(){
    cout<<"Enter the length and breadth";
    cin>>length>>breadth; 
}
};
class triangle : public shape{
    public:
int area(){
    return 0.5/length*breadth;
}
};

class rectangle : public shape{
    public:
    int area(){
        return length*breadth;
    }
};






int main(){
    triangle t1;
    rectangle r1;
    cout<<t1.area()<<endl;
    cout<<r1.area();

}
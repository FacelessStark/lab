#include <iostream>
using namespace std;
class room
{
protected:
    int length, breadth;

public:
    void setData(int len, int bre){
    length = len;
    breadth = bre;
} int area()
{
    return length*breadth;
}
};

class BedRoom : public room
{
    private:
    int height;
    public:
    void setdata(int len,int bre, int hei)
    {
        length = len; 
        breadth = bre;
        height = hei;
    }
    int volume(){
        return length * breadth * height ;
    }
};


int main()
{
    int length,breadth,height;
    BedRoom b1;
    cout<<"Enter length breadth and height";
    cin>>length>>breadth>>height;
    b1.setdata(length, breadth,height);
    cout<<"area of the room="<<b1.area()<<endl;
    cout<<"volume of the room="<<b1.volume();
    return 0;



}
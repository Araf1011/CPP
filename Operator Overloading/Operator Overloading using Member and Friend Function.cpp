#include<bits/stdc++.h>
using namespace std;
// operator using member function and using friend function
class Base{
    int x,y;
    public:
    Base(){
        x = 0;
        y = 0;
    }
    Base(int a, int b){
        x = a;
        y = b;
    }
    // operator overloading using member function
    Base operator + (Base b){
        Base temp;
        temp.x = x + b.x;
        temp.y = y + b.y;
        return temp;
    }
    // operator overloading using friend function
    friend Base operator - (Base b1, Base b2){
        Base temp;
        temp.x = b1.x - b2.x;
        temp.y = b1.y - b2.y;
        return temp;
    }
    void display(){
        cout << x << " + " << y << "i" << endl;
    }

};
int main(){
    Base b1 (10,5);
    Base b2 (20,10);
    Base b3 = b1 + b2; // using member function
    Base b4 = b1 - b2; // using friend function
    b3.display();
    b4.display();
    return 0;
}

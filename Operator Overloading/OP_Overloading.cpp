#include<bits/stdc++.h>
using namespace std;
class Complex{
    int x,y;

    public:
    Complex(){
        x=0;
        y=0;
    }

    Complex(int a,int b){
        x = a;
        y = b;
    }
    // operator overloading
    Complex operator + (Complex c){
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    void display(){
        cout << x << " + " << y << "i" <<endl;
    }
};
int main(){
    Complex c1(10,5);
    Complex c2(20,10);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
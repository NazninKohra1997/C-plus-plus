#include<bits/stdc++.h>
using namespace std;

class Triangle{
public:
    void triangle(){
        cout<<"I am a triangle"<<"\n";
    }
   // void isosceles();
    //void isoscelesSide();
};

class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }

        void description(){
       cout<<"In an isosceles triangle two sides are equal"<<"\n";
        }
};



int main(){
    Isosceles isc;

    isc.isosceles();
    isc.description();
    isc.triangle();

    return 0;
}

#include <iostream>
#include <memory>

using namespace std;

class Rectangle {
    int length;
    int breadth;

    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

};
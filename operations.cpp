#include<iostream>

class operations{
    int a, b, c;

    public:
        operations(){
            a = 0;
            b = 0;
            c = 0;
        }

        operations(int x, int y, int z){
            a=x;
            b=y;
            c=z;
        }

        operations operator+(operations op);
        operations operator=(operations op);
        void print();
};

// Overload +.
operations operations::operator+(operations op)
{
    operations temp;
    temp.a = a + op.a; 
    temp.b = b + op.b; 
    temp.c = c + op.c; 
    return temp;
}
// Overload assignment.
operations operations::operator=(operations op2)
{
    a = op2.a; 
    b = op2.b; 
    c = op2.c; 
    return *this;  //The other argument is implicitly passed using the this pointer.
}

void operations::print()
{
    std::cout << a << ", ";
    std::cout << b << ", ";
    std::cout << c << "\n";
}


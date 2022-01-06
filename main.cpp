#include <iostream>
#include <string>
#include "people.cpp"
#include "red.cpp"
#include "operations.cpp"
#include "item11and12.cpp"

int main(){

    //First Assignment

    /*** Item 4: Make sure that objects are initialized before they’re used. */
     //in cazul variabilelor statice initializarea se face automat cu 0; de asemenea, in cazul vectorilor

    //val neinitializata
     int val;

    //initializare
    int a = 5;

    //instantiere
    int b;
    b=6;

    std::cout<< "a= " << a << " b= " << b << std::endl;
    a = val;
    std:: cout << "val = " << val<< std::endl;

    int *point;
    std::cout<<"valoarea: "<<&point<<std::endl;

    /*** Item 5: Know what functions C++ silently writes and calls. */

    // -copy constructor and assignment operator

    people redHead;
    people people1;

    people people2 = redHead; // copy constructor

    people2.printAge();
    people1 = people2; //assignment operator

    /*** Item 6: Explicitly disallow the use of compiler generated functions you do not want. */
    Red red1;
    //Red red3 = red1; //nu putem copia pt ca e deleted copy operator

    colour red;
    //colour yellow = red;

    //Second Assignment

    /*** Item 10: Have assignment operators return a reference to *this. */

    operations op1(1,2,3), op2(10,11,12), op3;

    op1.print();
    op2.print();

    op3 = op1 + op2;

    op3.print();

    op3=op2=op1; // multiple assignment -> asociativ la dreapta op3.operator = (op2.operator = (op1));

    op3.print();
    op2.print();

    /*** Item 11: Handle assignment to self in operator=. && Item 12: Copy all parts of an object.*/

    A a1, a2;
    std::cout << "a1 = a2 calls ";
    a1 = a2; // user-defined copy assignment
 
    B b1, b2;
    b2.s1 = "hello";
    b2.s2 = "world";
    std::cout << "b1 = b2 calls ";
    b1 = b2; // implicitly-defined copy assignment
    std::cout << "b1.s1 = " << b1.s1 << "; b1.s2 = " << b1.s2 << '\n';

    C c1, c2;
    //c1 = c2;


    //Third Assignmnet

    std::cout<<'\n'<<'\n'<<"Third assignment:"<<'\n'; 
}            
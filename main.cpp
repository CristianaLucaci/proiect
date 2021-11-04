#include <iostream>
#include "people.cpp"
#include "red.cpp"

int main(){

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

}
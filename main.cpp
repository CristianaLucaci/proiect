#include <iostream>
#include "people.cpp"
#include "color.cpp"
#include "red.cpp"

int main(){

    /*** Item 4: Make sure that objects are initialized before they’re used. */
    //in cazul variabilelor statice initializarea se face automat cu 0; de asemenea, in cazul vectorilor

    //initializare
    int a = 5;

    //instantiere
    int b, c;

    b=7;
    c=15;

    std::cout << "b= "<< b<< "c= "<<c<< std::endl;

    /*** Item 5: Know what functions C++ silently writes and calls. */

   // -copy constructor and assignment operator

   people redHead;
   people people1;

   people people2 = redHead; // copy constructor

   people2.printAge();
   people1 = people2;

   /*** Item 6: Explicitly disallow the use of compiler generated functions you do not want. */
   Red red1;
   Red red2;
   //Red red3 = red1; //nu putem copia pt ca e deleted copy operator

}
#include <iostream>
#include "namespace.cpp"

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int biggestNumber(int a, int b){
    return a>=b?a:b;
}

int main(){

    /*** Item 4: Make sure that objects are initialized before they’re used. */
    //in cazul variabilelor statice initializarea se face automat cu 0; de asemenea, in cazul vectorilor

    //initializare
    int a = 5;

    //instantiere
    int b, c;

    b=7;
    c=15;

    swap(b,c);

    std::cout << "b= "<< b<< "c= "<<c<< std::endl;
}
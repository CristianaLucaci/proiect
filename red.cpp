#include <iostream>
#include "colour.cpp"

class Red: public colour{
    private:
    std::string action="color becomes red";
    static int count;

    public:
    Red(){
        //count++;
        std::cout<<"Red construcotr"<<std::endl;
    }

    ~Red(){
        std::cout<<"Red destructor"<<std::endl;
    }
};
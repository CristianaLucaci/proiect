#include <iostream>
#include "color.cpp"

class Red: public color{
    private:
    std::string action="color becomes red";
    static int count;

    public:
    Red(){
        count++;
        std::cout<<"Red construcotr"<<std::endl;
    }

    ~Red(){
        std::cout<<"Red destructor"<<std::endl;
    }
};
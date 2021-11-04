#include <iostream>

class people {
    private: 
    int age = 15;
    std::string hair = "red";

    public:
    people(){
        std::cout<<"Apelare construcotr fara parm"<<std::endl;
    }

    people(const people& p){
        std::cout << "Apelare Copy constructor "<<std::endl;

        this->hair=p.hair;
    }

    people& operator=(const people& p){
        std::cout << "Apelare copy assignment operator "<<std::endl;

        this->hair=p.hair;
        return *this;
    }

    int printAge(){
        std::cout<< "age =" << age <<std::endl;
        return this->age;
    }

    virtual ~people(){
        std::cout<< "Apleare Destructor"<<std::endl;
    }
};
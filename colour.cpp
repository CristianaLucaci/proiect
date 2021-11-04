#include <iostream>

class colour{
    private:
    std::string value = "color";

    public: 
    colour(){
        std::cout<<"hello color"<< std::endl;
    }

    colour(const colour &color) = delete;

    // colour& operator = (const colour& c);

    virtual ~colour(){
        std::cout<<"bye color"<<std::endl;
    }
};
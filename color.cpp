#include <iostream>

class color{
    private:
    std::string value = "color";

    public: 
    color(){
        std::cout<<"hello color"<< std::endl;
    }

    color(const color &color) = delete;

    color& operator = (const color& c);

    virtual ~color(){
        std::cout<<"bye color";
    }
};
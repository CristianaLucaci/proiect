#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

class A
{
    public:
    int n;
    std::string s1;
    A() = default;
    A(A const&) = default;
    // copy-and-swap idiom
    A& operator=(A other)
    {
        std::cout << "copy assignment of A\n";
        std::swap(n, other.n);
        std::swap(s1, other.s1);
        return *this;
    }
};
 
class B : public A
{   
    public:
    std::string s2;
    // implicitly-defined copy assignment
};
 
class C
{
    public:
    A *a;
    // not copy-swap
    // note: copy-and-swap would always reallocate resources
    C& operator=(const C& other)
    {
        if(this == &other)
            return *this;
        else{
            a = new A(*other.a);
        }
        return *this;
    }
};
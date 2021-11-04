#ifndef max_number
#define max_number = 33
#endif

namespace bigNum {
    int biggestNumber(int a, int b){
        if(a>=b)
            return b;
        else
            return a;
    }
}
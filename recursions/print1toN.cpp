#include <iostream>

int print1toN(int x){
    if (x==0)
    {
        return -1;
    };
    
    print1toN(x-1);
    std::cout<<x<<std::endl;
    return 1;
};

int main(){
    print1toN(20);
    return 0;
}
#include <iostream>

int exp(int m , int n){
    if(n==0){
        return 1;
    }
    return exp(m,n-1)*m;
}
int main(){
    int ans = exp(2,5);
    std::cout<<ans<<std::endl;
    return 0;
}
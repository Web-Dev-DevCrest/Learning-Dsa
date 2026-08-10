#include <iostream>

int x{0};
int exp(int m , int n){
    x++;
    if(n==0){
        return 1;
    }
    return exp(m,n-1)*m;
//This is order of n . 
}

//Improved method
int y {0};
int expImproved(int m , int n ){
    y++;
    if (n==0){
        return 1;
    }
    if(n%2==0){
        return expImproved(m*m,n/2);
    }
    
    return (m * expImproved(m*m,(n-1)/2));
}
int main(){

    int ans = exp(2,16);
    std::cout<<ans<<" Iterations taken = "<<x<<std::endl;
    int ans2 = expImproved(2,16);
    std::cout<<ans2<<" Iterations taken in 2nd = "<<y<<std::endl;
    return 0;

}
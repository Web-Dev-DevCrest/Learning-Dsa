#include <iostream>


int factorialTillN(int n){
    if (n>0){
        return factorialTillN(n-1)*n;
    }
  return 1;
}
int main (){
int ansByRecursion = factorialTillN(8);
std::cout<<ansByRecursion<<std::endl;
int n = 9;
int product = 1;
while(n>0){
    product = product*n;
    n--;
}
std::cout<<product<<std::endl;
return 0;
}


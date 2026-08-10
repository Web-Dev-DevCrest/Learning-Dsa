#include <iostream>
//Recursion 
int sumOfNnumbers(int n){
   if (n==0){
    return 0;
   }
   return sumOfNnumbers(n-1)+n;
}
int main (){
int ans = sumOfNnumbers(20);
std::cout<<ans<<std::endl;
  
    int sum {0};
    int i = 10;
    while(i>0){
        sum = sum+i;
        i--;
    }
    std::cout<<sum<<std::endl;
    sum = 0;
    for (int j = 50; j>0;j--){
    sum += j;  // This is basically sum = sum + j 
    };
  std::cout<<sum<<std::endl; 
         return 0;
}



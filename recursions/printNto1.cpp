#include <iostream>


void ascendingOrderPrint(int x){
    if(x==0){
        return;
    }
    std::cout<<x<<std::endl;
    ascendingOrderPrint(x-1);

}
int main(){
 ascendingOrderPrint(20);
    return 0;
}
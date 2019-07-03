#include <iostream>

int main(){
    int val = 6, newVal = 100;
    int&r_val = val; //another name of val
    r_val++;
    std::cout << val << std::endl;
    r_val = newVal; //just assign value instead changing reference
    std::cout << val << std::endl;
}

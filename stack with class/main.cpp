#include <iostream>
#include "stack.hpp"

int main() {
    stack stk;
    for(int i = 0; i < 5; i++){
        stk.push(i);
        std::cout << "size : " << stk.size() << "\n";
    }
    
    for(int i = 0; i < 5; i++){
        stk.pop();
    }
}

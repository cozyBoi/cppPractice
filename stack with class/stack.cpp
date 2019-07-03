#include <iostream>
#include "stack.hpp"

stack::stack(){
    top = -1;
}

void stack::push(int val){
    if(top >= 99) std::cerr << "stack is full\n";
    else {
        std::cout << "push the value " << val << "\n";
        contents[++top] = val;
    }
}

int stack::pop(){
    int ret = -1;
    if(top <= -1) std::cerr << "stack is empty\n";
    else {
        ret = contents[top--];
        std::cout << "pop the value " << ret << "\n";
    }
    
    return ret;
}

int stack::size(){
    return top + 1;
}

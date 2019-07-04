#include <iostream>

int main(){
    std::function<int(int)> fact;
    fact = [&fact](int n) -> int {
        if(n > 0){
            return n*fact(n-1);
        }
        return 1;
    };
    
    std::cout << "factorial(" << 6 << ") = " << fact(6) << "\n";
    
    return 0;
}

#include <iostream>

int main(){
    int i = 6;
    [](int&v){v*=7;}(i);
    std::cout << i << "\n";
    return 0;
}

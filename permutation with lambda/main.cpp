#include <iostream>
#include <algorithm>
#include <string>
#include <functional>

int main(){
    std::function<void(std::string, int)> pmt;
    pmt = [&](std::string str, int pointing){ // difference between [&] and [=] ??
        if(pointing == str.size() - 1) { // base case
            std::cout << str << "\n";
            return ;
        }
        for(int i = pointing; i < str.size(); i++){
            if(pointing != i && str[pointing] == str[i]) continue;
            std::swap(str[pointing], str[i]);
            pmt(str, pointing + 1);
            std::swap(str[pointing], str[i]);
        }
    };
    
    std::string str1 = "abc";
    pmt(str1, 0);
    
    return 0;
}

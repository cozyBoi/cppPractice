#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int total_product = 1;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    std::for_each(v.begin(), v.end(), [&](int i){total_product *= i;});
    std::cout << total_product << "\n";
    return 0;
}

#include <iostream>
#include <vector>

struct compare1 {
    bool operator()(int a,int b){return a > b;}
};

struct compare2 {
    bool operator()(int a,int b){return a < b;}
};

template<typename T>
void swap(T&a, T&b){
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename TYPE, typename Comp>
void bubbleSort(TYPE& arr, Comp& comp, int size){
    for(int i = size-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(!comp(arr[j], arr[j+1])){ //called functor
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

template<typename TYPE>
void printArguments(const TYPE& contents){
    for(auto&a : contents){
        std::cout << a << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> v1;
    
    compare1 c1;
    compare2 c2;
    
    v1.push_back(3); v1.push_back(2); v1.push_back(1); v1.push_back(4);
    
    printArguments(v1);
    bubbleSort(v1, c1, v1.size());
    printArguments(v1);
    bubbleSort(v1, c2, v1.size());
    printArguments(v1);
    
    return 0;
}

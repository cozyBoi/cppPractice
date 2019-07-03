#include <iostream>

int main(){
    int**dp = new int*[5];
    for(int i = 0; i < 5; i++){
        dp[i] = new int[5];
        for(int j = 0; j < 5; j++){
            dp[i][j] = i*j;
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << dp[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    for(int i = 0; i < 5; i++){
        delete[] dp[i];
    }
    delete[] dp;
    
    return 0;
}

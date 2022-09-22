#include<iostream>

int main(){
    
    int i,n;
    bool is_prime = true;
    
    while(std::cin>>n){

        if(n<=1){
            is_prime = false;
        }

        for(i = 2; i <= n/2; ++i){
            if(n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    
        if(is_prime)
            std::cout << n << " is a prime: True";
        else
            std::cout << n << "is a prime: False";
    }
    return 0;
}

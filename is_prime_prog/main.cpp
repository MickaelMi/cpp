#include <iostream>

bool is_prime(unsigned long x)
{
    if (x <= 1 || x%2 == 0 && x != 2) {
        return false;
    }

    for (unsigned i = 3; i <= x/2; i+=2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    unsigned long n;
    while(std::cin >> n)
    {
        if(is_prime(n))
        {
            std::cout << n << " is a prime: True\n";
        }else
            std::cout << n << " is a prime: False\n";
    }
    return 0;
}

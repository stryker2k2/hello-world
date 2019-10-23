#include <iostream>

int main ()
{
    int i;
    
    for (i = 0; i < 10; i++)
    {
        std::cout << "[-] Value is: " << i+1 << std::endl;
    }

    std::cout << "[!] Version 0.0.1" << std::endl;
    std::cout << "[!] Hello World Complete!" << std::endl;

    //std::cin.get();
    return 0;
}
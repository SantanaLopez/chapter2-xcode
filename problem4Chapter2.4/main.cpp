//
//  main.cpp
//  problem4Chapter2.4
//
//  Created by Santana Lopez on 10/26/22.
//

#include <iostream>

int doublenumber(int x)
{
    return 2 * x;
}

int main()
{
    int x{};
    std::cout << "Enter an intenger ";
    std::cin >> x;
    std::cout << doublenumber(x) << '\n';
    
    return  0;
    
}

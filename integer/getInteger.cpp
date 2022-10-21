//
//  getInteger.cpp
//  integer
//
//  Created by Santana Lopez on 10/31/22.
//
#include <iostream>

#include "getInteger.hpp"
int getInteger()
{
    
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;
    return x;
    
    
}


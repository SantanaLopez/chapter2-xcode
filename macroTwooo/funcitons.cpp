//
//  funcitons.cpp
//  macroTwooo
//
//  Created by Santana Lopez on 11/2/22.
//

#include "funcitons.hpp"
#include <iostream>

void doSomething()
{
    
#ifdef PRINT
    std::cout << "Printing!";
#endif
#ifndef PRINT
    std::cout << "Not Printing!";
#endif
    
}

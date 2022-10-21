//
//  main.cpp
//  integer
//
//  Created by Santana Lopez on 10/31/22.
//

#include <iostream>

int getInteger();

int main()
{
    
    int x { getInteger() };
    int y { getInteger() };
    
    std::cout << x << " + " << y << " is " << x + y << '\n';
    
    return 0;

}

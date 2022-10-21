//
//  main.cpp
//  math
//
//  Created by Santana Lopez on 10/21/22.
//

#include <iostream>

int returnFive()
{
    std::cout << "Enter an intenger ";
    int input{};
    std::cin >> input;
    
    return input;
    
}


int main (){
    
    int x{ returnFive()};
    int y{ returnFive()};
    
    std::cout << x << " + " << y << " = " << x + y;
    
    return 0;
    
}

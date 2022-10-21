//
//  main.cpp
//  2.4
//
//  Created by Santana Lopez on 10/24/22.
//

#include <iostream>


int getValueFromUser()
{
    std::cout << "Enter integer: ";
    int input{};
    std::cin >> input;
    
    return input;
    
}


void printDouble(int value)
{

    std::cout << value << " doubled is: " << value * 2 << '\n';
}


int main()
{
    
    printDouble(getValueFromUser());
    
    return 0;

}

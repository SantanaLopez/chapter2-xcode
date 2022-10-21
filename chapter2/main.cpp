//
//  main.cpp
//  chapter2
//
//  Created by Santana Lopez on 10/20/22.
//

#include <iostream>

void doB()
{
    std:: cout << "In doB()\n";

}

void doA()
{
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}


int main()
{
    
    std::cout << "Starting main()\n";
    
    doA();
    
    std::cout << "Ending main()\n";
    
    
}

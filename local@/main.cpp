//
//  main.cpp
//  local@
//
//  Created by Santana Lopez on 10/31/22.
//

#include <iostream>

int add2(int x , int y, int z);

int main(){
    
    int a{ };
    std::cout << "Enter an intenger for a: " << '\n';
    std::cin >> a;
    int b{ };
    std::cout << "Enter an intenger for b: " << '\n';
    std::cin >> b;
    int c{ };
    std::cout << "Enter an intenger for c: " << '\n';
    std::cin >> c;

    
    std::cout << add2(a,b,c) << '\n';
    
    return 0;
}

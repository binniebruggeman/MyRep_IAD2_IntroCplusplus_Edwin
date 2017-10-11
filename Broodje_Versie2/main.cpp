//
//  main.cpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Broodmandje.hpp"

int main() {
    Broodmandje mandje1 = Broodmandje();
    mandje1.toon();
    
    mandje1.voegToe("ciabatta");
    std::cout << "---mandje1" << std::endl;
    mandje1.toon();
    
    Broodmandje mandje2 = Broodmandje();
    mandje2 = mandje1;
    std::cout << "---mandje2" << std::endl;
    mandje2.toon();
    
    mandje1.voegToe("croissant");
    std::cout << "---mandje1" << std::endl;
    mandje1.toon();
    
    std::cout << "---mandje2" << std::endl;
    mandje2.toon();



    
    int c;
    std::cin >> c;
    
    return 0;
}

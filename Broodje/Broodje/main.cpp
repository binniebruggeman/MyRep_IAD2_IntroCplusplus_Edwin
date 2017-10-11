//
//  main.cpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Broodmandje.hpp"

void geefMandjeDoor(Broodmandje* mandje){
    std::cout << "Mandje gekregen" << std::endl;
    mandje->toon();
    
    mandje->voegToe("croissant");
    mandje->toon();
}

int main() {
    Broodmandje* mandje = new Broodmandje();
    mandje->toon();
    
    mandje->voegToe("ciabatta");
    mandje->toon();
    
    geefMandjeDoor(mandje);
    mandje->toon();
    
    return 0;
}

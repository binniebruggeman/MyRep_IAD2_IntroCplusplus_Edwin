//
//  main.cpp
//  LibraryNoMemoryLeaks_2
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//
//  COPY CONSTRUCTOR COPY CONSTRUCTOR COPY CONSTRUCTOR

#include <iostream>
#include "Library.hpp"

int main() {
    Library library1 = Library();
    library1.toon();
    
    std::cout << "---Library 1" << std::endl;
    library1.voegToe("Thriller");
    library1.toon();
    
    std::cout << "---Library 2" << std::endl;
    Library library2 = library1;
    library2.toon();
    
    std::cout << "---Library 1" << std::endl;
    library1.voegToe("Fiction");
    library1.toon();
    
    std::cout << "---Library 2" << std::endl;
    library2.toon();
    
    int c;
    std::cin >> c;
    
    return 0;
}

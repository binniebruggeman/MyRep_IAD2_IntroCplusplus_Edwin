//
//  main.cpp
//  LibraryNoMemoryLeaks_3
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Library.hpp"

int main() {
    Library* library = new Library();
    library->toon();
    
    library->voegToe("Thriller");
    library->toon();
    
    library->voegToe("Fiction");
    library->toon();
    
    delete library;
    
    int c;
    std::cin >> c;
    
    return 0;
}

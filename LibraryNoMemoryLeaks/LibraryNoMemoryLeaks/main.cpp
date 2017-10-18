//
//  main.cpp
//  LibraryNoMemoryLeaks
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Library.hpp"
using namespace std;


int main() {
    Library library1 = Library();
    library1.toon();
    
    library1.voegToe("Thriller");
    std::cout << "---Library 1" << std::endl;
    library1.toon();
    
    Library library2;
    library2 = library1;
    std::cout << "---Library 2" << std::endl;
    library2.toon();
    
    library1.voegToe("Fiction");
    std::cout << "---Library 1" << std::endl;
    library1.toon();
    
    std::cout << "---library 2" << std::endl;
    library2.toon();
    
    int c;
    std::cin >> c;
    
    return 0;
}

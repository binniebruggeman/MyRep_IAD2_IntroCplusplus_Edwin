//
//  Library.hpp
//  LibraryNoMemoryLeaks
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once

#include <iostream>
#include "Book.hpp"
using namespace std;

class Library {
public:
    Library();
    virtual ~Library();
    Library(const Library& library);
    //        Library& operator=(const Library&);
    void toon();
    
    void voegToe(std::string type);
    
private:
    Book* book = new Book();
};

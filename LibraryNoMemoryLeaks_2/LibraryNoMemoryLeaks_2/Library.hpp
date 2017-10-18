//
//  Library.hpp
//  LibraryNoMemoryLeaks_2
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once
#include "Book.hpp"

class Library {
public:
    Library();
    virtual ~Library();
    //        Library(const Library& library);
    
    void toon();
    
    void voegToe(std::string type);
    
private:
    Book* book = new Book();
};

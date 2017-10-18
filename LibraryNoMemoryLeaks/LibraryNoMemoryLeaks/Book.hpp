//
//  Book.hpp
//  LibraryNoMemoryLeaks
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//
#pragma once

#include <string>

class Book {
public:
    Book();
    Book(std::string type);
    virtual ~Book();
    
    std::string _type = "unknown";
};

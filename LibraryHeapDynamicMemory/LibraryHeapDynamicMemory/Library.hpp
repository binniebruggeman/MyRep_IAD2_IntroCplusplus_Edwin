//
//  Library.hpp
//  LibraryHeap
//
//  Created by Binnie Bruggeman on 10/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once

#include <stdio.h>
#include "Book.hpp"

class Library{
public:
    Library();
    
    void showBooks();
    void addBook(std::string bookName);
private:
    Book* book = new Book;
};


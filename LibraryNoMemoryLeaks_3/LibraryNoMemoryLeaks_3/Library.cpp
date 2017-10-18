//
//  Library.cpp
//  LibraryNoMemoryLeaks_3
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include "Library.hpp"
#include <iostream>

Library::Library() {
    std::cout << "Library: constructor" << std::endl;
}

Library::~Library() {
    std::cout << "Library: destructor" << std::endl;
    delete book;
}

void Library::toon() {
    std::cout << "Book in library: " << book->_type << std::endl;
}

void Library::voegToe(std::string type) {
    delete book;
    book = new Book(type);
}

//
//  Library.cpp
//  LibraryNoMemoryLeaks
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include "Library.hpp"
#include <iostream>

Library::Library() {
    std::cout << "Library: ctor" << std::endl;
}

Library::~Library() {
    std::cout << "Library: dtor" << std::endl;
    delete book;
}

Library::Library(const Library& library) {
    std::cout << "Library: copy-ctor" << std::endl;
    book= new Book();
    book->_type = library.book->_type;
}

void Library::toon() {
    std::cout << "   Book in library: " << book->_type << std::endl;
}

void Library::voegToe(std::string type) {
    delete book;
    book = new Book(type);
}

//Library& Library::operator=(const Library& otherLibrary) {
//    if (this != &otherLibrary) {
//        if (book) {
//            delete book;
//        }
//        book = new Book(otherLibrary.book->_type);
//    }
//    return *this;
//}

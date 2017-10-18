//
//  Book.cpp
//  LibraryNoMemoryLeaks_2
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Book.hpp"

Book::Book(std::string type) {
    _type = type;
}

Book::Book() {
    std::cout << "Book: ctor" << std::endl;
}

Book::~Book() {
    std::cout << "Book: dtor" << std::endl;
}

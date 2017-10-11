//
//  Library.cpp
//  LibraryHeap
//
//  Created by Binnie Bruggeman on 10/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include "Library.hpp"
#include <iostream>
//using namespace std; //This enables you to write names you use from the standard library namespace std, in short. For example 'std::cout' can now be written as 'cout'. In this code I will use full names instead.

Library::Library(){

}

void Library::showBooks(){
    std::cout << "Rented books: " << book->_type << std::endl;
}

void Library::addBook(std::string bookName){
    book = new Book(bookName);
}


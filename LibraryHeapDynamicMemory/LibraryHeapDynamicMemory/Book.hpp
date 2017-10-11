//
//  Book.hpp
//  LibraryHeap
//
//  Created by Binnie Bruggeman on 10/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <string>
using namespace std;

class Book{
private:
    string name;
    Book* p;
public:
    Book(string n = " ", Book * next = nullptr)
    : name(n), p(next) {
    }
    
    string getName();
    Book* getNext();
};


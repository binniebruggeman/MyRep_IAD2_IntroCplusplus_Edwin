//
//  Broodje.cpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//
#include <iostream>
#include "Broodje.hpp"
using namespace std;


Broodje::Broodje(std::string type){
    _type = type;
}

Broodje::Broodje(){
    std::cout << "Broodje: ctor" << std::endl;
}

Broodje::~Broodje(){
    std::cout << "Broodje: dtor" << std::endl;
}

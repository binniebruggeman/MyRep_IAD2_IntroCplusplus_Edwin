//
//  Broodmandje.cpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include "Broodmandje.hpp"
#include <iostream>

Broodmandje::Broodmandje(){

}

void Broodmandje::toon(){
    std::cout << "Broodmandje" << broodje->_type << std::endl;
}

void Broodmandje::voegToe(std::string type){
    broodje = new Broodje(type);
}

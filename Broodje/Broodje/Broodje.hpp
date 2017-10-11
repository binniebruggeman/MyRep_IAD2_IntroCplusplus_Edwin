//
//  Broodje.hpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once
#define Broodje_hpp

#include <stdio.h>
#include <string>


class Broodje {
public:
    Broodje(std::string type);
    std::string _type = "onbekend";
    

    Broodje();
};

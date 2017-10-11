//
//  Broodmandje.hpp
//  Broodje
//
//  Created by Binnie Bruggeman on 04/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once

#include <stdio.h>
#include "Broodje.hpp"

class Broodmandje{
public:
    Broodmandje();
    
    void toon();
    void voegToe(std::string type);
private:
    Broodje* broodje = new Broodje;
};



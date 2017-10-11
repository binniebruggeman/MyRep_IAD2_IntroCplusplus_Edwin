//
//  Persoon.hpp
//  Opdracht2_versie2
//
//  Created by Binnie Bruggeman on 26/09/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <string>

class Persoon{
    
    private:
    
public:
    int age;
    std::string name;
    
    virtual int getAge();
    virtual std::string getName();


};

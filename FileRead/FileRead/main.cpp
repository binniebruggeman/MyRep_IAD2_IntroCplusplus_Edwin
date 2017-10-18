//
//  main.cpp
//  FileRead
//
//  Created by Binnie Bruggeman on 18/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include <fstream>

#define FILE "/Users/binniebruggeman/Desktop/HKU1718/test_tekstFile_voorC++.txt"

int main() {
    char ch;
    
    std::ifstream in_stream;
    in_stream.open(FILE);
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std:: endl;
        exit(1);
    }
    
    std::ofstream out_stream;
    out_stream.open("/Users/binniebruggeman/Desktop/HKU1718/testout.txt");
    if (!out_stream) {
        std::cout <<"Probleem bij openen out file" << std::endl;
        exit(1);
    }
    
    bool skip = true;
    
    while (!in_stream.eof()){
        in_stream >> ch;
        
        skip = !skip;
        if(!skip){
        out_stream << ch;
        }
    }
    
    out_stream.close();
    in_stream.close();
//
//    std::string data;
//    getline(in_stream, data);
//    std::cout << data;
//    
////    //in_stream.get(ch); //this is the same as in_stream >> ch;
////    in_stream >> std::noskipws;
////    in_stream >> ch;
////    
////    std::cout << ch;
//    
//    while (!in_stream.eof()) {
//    getline(in_stream, data);
//    std::cout << data;
////        in_stream >> ch;
////        //in_stream.get(ch); //this is the same as in_stream >> ch;
////        std::cout << ch;
//    }
//    in_stream.close();
    
    return 0;
}

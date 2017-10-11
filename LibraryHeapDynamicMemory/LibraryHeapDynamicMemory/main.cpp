//
//  main.cpp
//  LibraryHeap
//
//  Created by Binnie Bruggeman on 10/10/17.
//  Copyright © 2017 Binnie Bruggeman. All rights reserved.
//

#include <iostream>
#include "Library.hpp"

void checkRentedBooks(Library* rentedBooks){
    std::cout << "Check rented books" << std::endl;
    rentedBooks->showBooks();
    
    rentedBooks->addBook("Thriller");
    rentedBooks->showBooks();
}

int main() {
    Library* rentedBooks = new Library();
    rentedBooks->showBooks();
    
    rentedBooks->addBook("Science");
    rentedBooks->showBooks();
    
    rentedBooks->addBook("Fiction");
    rentedBooks->showBooks();
    
    checkRentedBooks(rentedBooks);
    rentedBooks->showBooks();
    return 0;
}

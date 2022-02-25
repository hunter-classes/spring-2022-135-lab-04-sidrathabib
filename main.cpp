#include <iostream>
#include <string>
#include "shapes.h"

//--------------------Tests-------------------//

int main() {
//Task A: Box
    std::cout << "Testing Box!" << std::endl;
    std::cout << box(3, 4) << std::endl;
    std::cout << box(9, 1) << std::endl;
    std::cout << "------------------------" << std::endl;

//Task B: Checkerboard
    std::cout << "Testing Checkerboard!" << std::endl;
    std::cout << checker(5, 7) << std::endl;
    std::cout << checker(4, 2) << std::endl;
    std::cout << "------------------------" << std::endl;


//Task C: Cross
    std::cout << "Testing Cross!" << std::endl;
    std::cout << cross(6) << std::endl;
    std::cout << cross(2) << std::endl;
    std::cout << "------------------------" << std::endl;


//Task D: Lower Triangle 
    std::cout << "Testing Lower Triangle!" << std::endl;
    std::cout << lower(9) << std::endl;
    std::cout << lower(6) << std::endl;
    std::cout << "------------------------" << std::endl;

//Task E: Upper Triangle
    std::cout << "Testing Upper Triangle!" << std::endl;
    std::cout << upper(3) << std::endl;
    std::cout << upper(7) << std::endl;
    std::cout << "------------------------" << std::endl;

//Task F: Upside-Down Trapezoid or Triangle
    std::cout << "Testing Upside-Down Trapezoid or Triangle!" << std::endl;
    std::cout << trapezoid(5, 6) << std::endl;
    std::cout << trapezoid(2, 1) << std::endl;
    std::cout << "------------------------" << std::endl;

//Task G: Checkerboard (3x3)
    std::cout << "Testing Checkerboard (3x3)!" << std::endl;
    std::cout << checker3(8, 9) << std::endl;
    std::cout << checker3(5, 12) << std::endl;
    std::cout << "------------------------" << std::endl;

    return 0; 
}
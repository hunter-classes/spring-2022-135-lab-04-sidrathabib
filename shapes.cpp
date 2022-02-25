#include <iostream> 
#include <string>
#include "shapes.h"

//---------------Task A: Box---------------//
std::string box(int w, int h) {
  std::string box = "";
  std::cout << "Shape: \n"; 
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      box += "*";
    }
    box += "\n";
  }

  return box;
}

//---------------Task B: Checkerboard---------------//
std::string checker(int w, int h) {
  std::string checker = "";
  std::cout << "Shape: \n"; 
  for (int i = 0; i <= h; i++) {
     for (int j = 0; j <= w; j++) {
        if(i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0) {
                checker += "*";
            }
            else {
                checker += " ";
            }
        }
        checker += "\n";
    }
    return checker;
}

//---------------Task C: Cross---------------//
std::string cross(int size) {
    std::string cross = "";
    int h = size;
    int w = size;
    std::cout << "Shape: \n"; 
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(i == j || j == size - 1 - i) {
                cross += "*";
            }
            else {
                cross += " ";
            }
        }
        cross += "\n";
    }
    
    return cross;
}

//---------------Task D: Lower Triangle---------------//
std::string lower(int h) {

    std::string lower = "";
    std::cout << "Shape: \n"; 
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < i + 1; j++) {
            lower += "*";
        }
        lower += "\n";
    }
    
    return lower;
}

//---------------Task E: Upper Triangle---------------//
std::string upper(int h) {
    std::string upper = "";
    std::cout << "Shape: \n"; 
    int filled = h;
    int empty = 0;
    for(int i = 0; i < h; i++) {
        for(int k = 0; k < empty; k++) {
            upper += " ";
        }
        empty++;
        for(int j = 0; j < filled; j++) {
            upper += "*";
        }
        filled--;
        upper += "\n";
    }
    
    return upper;
}

//---------------Task F: Upside-Down Trapezoid or Triangle---------------//
std::string trapezoid(int w, int h) {
    std::string trapezoid = "";
    int empty = 0;
    int filled = w;
    std::cout << "Shape: \n"; 
    for(int i = 0; i < h; i++) {
        if(w - i * 2 <= 0) {
            return "Impossible shape!\n";
        }
        for(int k = 0; k < empty; k++) {
            trapezoid += " ";
        }
        for(int j = 0; j < filled; j++) {
            trapezoid += "*";
        }
        filled -= 2;
        for(int l = 0; l < empty; l++) {
            trapezoid += " ";
        }
        empty++;
        trapezoid += "\n";
    }
    
    return trapezoid;
}

//---------------Task G: Checkerboard (3x3)---------------//
std::string checker3(int w, int h) {
  std::string checker3 = "";
  std::cout << "Shape: \n"; 
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (i % 6 < 3) {
        if (j % 6 < 3)
          checker3 += "";
        else
          checker3 += " ";
        }
        else if (j % 6 >= 3)
          checker3 += "";
        else
          checker3 += " ";
      }
      checker3 += "\n";
    }

    return checker3;
}
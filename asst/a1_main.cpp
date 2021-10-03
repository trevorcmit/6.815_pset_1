#include "a1.h"
#include <iostream>

using namespace std;

// This is a way for you to test your functions.
// We will only grade the contents of a1.cpp and Image.cpp
int main() {
  // cout << "nothing done in a1_main.cpp, debug me !" << endl;

  

  Image im("./Input/castle_small.png");
  std::vector<Image> LC = lumiChromi(im);
  cout << "finished lumichromi(im)" << endl;
  LC[0].write("./Output/LuminanceChrominance+1+lumiChromi.png");
  LC[1].write("./Output/LuminanceChrominance+2+lumiChromi.png");
  LC[0].write("./Output/LuminanceChrominance+3+color2gray.png");
  LC[1].write("./Output/LuminanceChrominance+4+color2gray.png");


  // Colorspace tests
  // Image im("./Input/castle_small.png");
  // Image out = color2gray(im);
  // out.write("./Output/Color2Gray+1+color2gray.png");
  // return 0;

  // Example
  // Image im("./Input/castle_small.png");
  // std::vector<Image> LC = lumiChromi(im);
  // LC[0].write("./Output/castle_luminance.png");
  // LC[1].write("./Output/castle_chrominance.png");
}

// Include important C++ libraries here 
#include <string>
#include <stdio.h>
#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespace"
using namespace sf; 
int main() 
{ 
   // Create a video mode object   
   VideoMode vm(1920, 1080);
   // Create and open a window for the game
   RenderWindow window(vm, "Timber!!!", Style::Fullscreen); 
   return 0; 
} 
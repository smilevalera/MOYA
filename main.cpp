#include <time.h>
#include "Game.h"
using namespace sf;

int main() {

    srand(time(0));
   
    Game game;
    game.play();

   
    return 0;
}
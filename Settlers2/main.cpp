#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "ResourcePath.hpp"
#include "controllers/game.hpp"

int main(int, char const**)
{
    Game game;
    game.loop();
    
    return EXIT_SUCCESS;
}

//
//  game.hpp
//  Settlers2
//
//  Created by Jan Lewandowski on 05/02/2022.
//  Copyright © 2022 Jan Lewandowski. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "window.hpp"

class Game {
private:
    Window window;
public:
    Game();
    ~Game();
    void loop();
    void dispose();
    void update();
    void draw();
};

#endif /* game_hpp */

//
//  game.cpp
//  Settlers2
//
//  Created by Jan Lewandowski on 05/02/2022.
//  Copyright © 2022 Jan Lewandowski. All rights reserved.
//

#include <iostream>
#include "constants.h"
#include "game.hpp"

Game::Game() : window(WIN_WIDTH, WIN_HEIGHT, WIN_NAME, WIN_FRAMERATE) {
    std::cout << "Constructed Game"<< std::endl;
}

Game::~Game() {
    std::cout << "Destructed Game"<< std::endl;
}

void Game::loop() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.getRenderWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                dispose();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                dispose();
            }
        }
        
        update();
        draw();
    }
}

void Game::dispose() {
    window.dispose();
}

void Game::update() {
    //UPDATE DATA
}

void Game::draw() {
    window.clear();
    //DRAW HERE
    window.display();
}

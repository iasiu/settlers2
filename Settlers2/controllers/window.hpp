//
//  window.hpp
//  Settlers2
//
//  Created by Jan Lewandowski on 05/02/2022.
//  Copyright © 2022 Jan Lewandowski. All rights reserved.
//

#ifndef window_hpp
#define window_hpp

#include <stdio.h>
#include <string>
#include <SFML/Graphics.hpp>

class Window {
private:
    int width;
    int height;
    int framerateLimit;
    std::string title;
    sf::RenderWindow renderWindow;
    
public:
    Window(int width, int height, std::string title, int framerateLimit);
    ~Window();
    sf::RenderWindow* getRenderWindow();
    void clear();
    void display();
    void dispose();
    bool isOpen();
};

#endif /* window_hpp */

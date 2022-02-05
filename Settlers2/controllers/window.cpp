//
//  window.cpp
//  Settlers2
//
//  Created by Jan Lewandowski on 05/02/2022.
//  Copyright © 2022 Jan Lewandowski. All rights reserved.
//

#include <iostream>
#include "window.hpp"

Window::Window(int width, int height, std::string title, int framerateLimit)
: renderWindow(sf::VideoMode(width, height), title,  sf::Style::Titlebar | sf::Style::Close)
{
    this->width = width;
    this->height = height;
    this->title = title;
    this->framerateLimit = framerateLimit;
    renderWindow.setFramerateLimit(framerateLimit);
    std::cout << "Constructed Window"<< std::endl;
}

Window::~Window() {
    std::cout << "Destructed Window"<< std::endl;
}

void Window::clear() {
    renderWindow.clear();
}

void Window::display() {
    renderWindow.display();
}

bool Window::isOpen() {
    return renderWindow.isOpen();
}

void Window::dispose() {
    renderWindow.close();
}

sf::RenderWindow* Window::getRenderWindow() {
    return &renderWindow;
}

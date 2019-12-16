#include <iostream>
#include <SFML/Graphics.hpp>
#include "startApp.h"

////////////////////////////////////////////////////
///////
///////
/////// I have used the "SFML" library, to create this software(GameOfLife.exe)
///////
///////
///////		                        -------Abir Ganguly.(Ceator of GameOfLife.exe)
///////
////////////////////////////////////////////////////


//Constants:
#define TITLE "The Game of Life --Developed by Abir Ganguly"
#define FPS 60

const int LENGTH = getScreenLength();   //  From startApp.h
const int BREADTH = getScreenBreadth(); //  From stratApp.h

void drawCells(sf::RenderWindow* window)
{

}

//Here goes the main function...
int main()
{

    start();    //  From startApp.h

    sf::RenderWindow window(sf::VideoMode(LENGTH, BREADTH), TITLE);
    //Use either window.setVerticalSyncEnabled(true); or window.setFramerateLimit(FPS);
    //or else, it may cause severe problems(According to SFML manual.)

    //window.setVerticalSyncEnabled(true);    //I commented out this line.

    //The this function may not work properly in all pc's, because the user may
    //force turn off yhe vertical synchronization, by changing his graphics driver settings.

    //The window.setFramerateLimit(FPS);, can cause sleep accuracy problems, as the value of
    //milliseconds is not precise in all pc's, and the user's monitor may refresh at a frequency,
    //which is not equal to the "FPS", provided in this software.


    window.setFramerateLimit(FPS);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
            if(event.type == sf::Event::KeyPressed)
            {
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                {
                    window.close();
                }
            }
        }
        window.clear();
        drawCells(&window);
        window.display();
    }
    return 0;
}

// CMake_Ninja.cpp : définit le point d'entrée de l'application.
//

#include "CMake_Ninja.h"
#include <SFML/Window.hpp>

using namespace std;

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

	cout << "Hello CMake." << endl;

	MyLibrary::ClassLife lib;
	lib.SetLife(1);
	cout << "Life = " << lib.GetLife() << endl;
	lib.SetLife(5);
	cout << "Life = " << lib.GetLife() << endl;

	system("Pause");
	return 0;
}

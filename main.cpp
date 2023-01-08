#include <SFML/Graphics.hpp>
#include "Function.h"
#include "settings.h"
#include "BAT.h"
#include "BALL.h"
using namespace sf;

int main()
{
	// Îáúåêò, êîòîðûé, ñîáñòâåííî, ÿâëÿåòñÿ ãëàâíûì îêíîì ïðèëîæåíèÿ
	RenderWindow window(VideoMode(width, height), title);
	window.setVerticalSyncEnabled(true);
	Bat bat;
	batInit(bat);
	//ШАР
	Ball ball;
	ballInit(ball);
	// Ãëàâíûé öèêë ïðèëîæåíèÿ. Âûïîëíÿåòñÿ, ïîêà îòêðûòî îêíî
	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat, ball);
		checkCollision();
		drawGame(window, bat, ball);
	}
	return 0;
}
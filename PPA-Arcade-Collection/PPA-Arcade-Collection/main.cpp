#include "CTest.h"
#include "PacMan.h"

int main()
{
	Game* game = new PacMan;
	game->init();
	game->run();
	delete game;
	return 0;
}

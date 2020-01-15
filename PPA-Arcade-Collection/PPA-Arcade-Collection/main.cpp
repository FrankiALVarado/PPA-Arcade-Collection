#include "CTest.h"
#include "PacMan.h"

int main()
{
	Game* game = new PacMan;
	game->run();
	delete game;
	return 0;
}

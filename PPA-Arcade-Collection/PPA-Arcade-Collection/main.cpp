#include "CTest.h"

int main()
{
	Game* game = new CTest;
	game->run();
	delete game;
	return 0;
}

#include "CTest.h"
#include "CBreakOut.h"

int main()
{
	Game* game = new CBreakOut;
	game->run();
	delete game;
	return 0;
}

#include "gameplay.h"
#include "gameengine.h"

GamePlay::GamePlay()
{
}

GamePlay::~GamePlay()
{
}

void GamePlay::startGame()
{
    if (_game)
        _game->startGame();
}

void GamePlay::stepOver()
{
    if (_game)
        _game->stepOver();
}

void GamePlay::setGame(GameEngine *game)
{
    _game = game;
}

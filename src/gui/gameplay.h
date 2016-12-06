#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <qglobal.h>
class GameEngine;
class GamePlay
{
public:
    GamePlay();
    virtual ~GamePlay();

    virtual void startGame();
    virtual void stepOver();

    void setGame(GameEngine *game);

protected:
    GameEngine *_game{nullptr};
};

#endif // GAMEPLAY_H

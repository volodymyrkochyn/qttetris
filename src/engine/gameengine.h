#ifndef GAMEENGINE_H
#define GAMEENGINE_H


class GameEngine
{
public:
    GameEngine();
    virtual ~GameEngine();

    virtual void startGame() =0;
    virtual void stopGame() =0;
    virtual void stepOver() =0;
};

#endif // GAMEENGINE_H

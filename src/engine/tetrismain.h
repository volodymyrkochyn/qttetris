#ifndef TETRISMAIN_H
#define TETRISMAIN_H

#include "gameengine.h"
#include "tetrisrawdata.h"

class RandomGenerator;

class TetrisMain : public GameEngine
{
public:
    TetrisMain();
    static const int Width = 10;
    static const int Height = 20;
    static const int BricksCount = 7;

    void startGame() override;
    void stopGame() override;
    void stepOver() override;

    void setRandomGenerator(RandomGenerator *generator);

private:
    TetrisRawData _data;
    RandomGenerator *_random{nullptr};
};

#endif // TETRISMAIN_H

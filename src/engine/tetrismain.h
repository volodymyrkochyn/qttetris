#ifndef TETRISMAIN_H
#define TETRISMAIN_H

#include "gameengine.h"
#include "tetrisrawdata.h"

#include <QObject>

class RandomGenerator;
class TetrisBrick;

class TetrisMain : public QObject, public GameEngine
{
    Q_OBJECT
public:
    TetrisMain();
    static const int Width = 10;
    static const int Height = 20;
    static const int BricksCount = 7;

    void startGame() override;
    void stopGame() override;
    void stepOver() override;

    void setRandomGenerator(RandomGenerator *generator);

private slots:
    void brickIsDown();

private:
    TetrisBrick* generateBrick() const;

private:
    TetrisRawData _data;
    RandomGenerator *_random{nullptr};
    TetrisBrick *_currentBrick{nullptr};
};

#endif // TETRISMAIN_H

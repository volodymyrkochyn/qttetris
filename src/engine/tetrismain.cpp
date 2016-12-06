#include "tetrismain.h"
#include "tetrisbrick.h"
#include "randomgenerator.h"

TetrisMain::TetrisMain() :
    _data(Width, Height)
{
    connect(&_data, &TetrisRawData::brickIsDown, this, &TetrisMain::brickIsDown);
}

void TetrisMain::startGame()
{
    _data.clear();
}

void TetrisMain::stopGame()
{
    //
}

void TetrisMain::stepOver()
{
    if (!_currentBrick)
        _currentBrick = generateBrick();

    if (!_currentBrick)
        return;

    _currentBrick->initBrick(_data.rawData());
}

void TetrisMain::setRandomGenerator(RandomGenerator *generator)
{
    _random = generator;
    if (_random)
        _random->setRange({TetrisBrick::BT_I, TetrisBrick::BT_Z});
}

void TetrisMain::brickIsDown()
{
    delete _currentBrick;
    _currentBrick = nullptr;
}

TetrisBrick *TetrisMain::generateBrick() const
{
    if (!_random)
        return nullptr;

    int random = _random->getRandome();
    auto brick = ::generateBrick((TetrisBrick::BrickType)random);
    return brick;
}

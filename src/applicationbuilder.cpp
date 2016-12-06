#include "applicationbuilder.h"
#include "tetrismain.h"
#include "consolegui.h"

#include <QDebug>

ApplicationBuilder::ApplicationBuilder()
{
    initGame();
    initGamePlay();
}

ApplicationBuilder::~ApplicationBuilder()
{
}

void ApplicationBuilder::run()
{
    _gameplay->startGame();
}

void ApplicationBuilder::initGame()
{
    _game.reset(new TetrisMain);
    qDebug("Game initialize");
}

void ApplicationBuilder::initGamePlay()
{
    _gameplay.reset(new ConsoleGUI);
    _gameplay->setGame(_game.data());
    qDebug("Gameplay initialize");
}

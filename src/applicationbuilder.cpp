#include "applicationbuilder.h"
#include "engine/tetrismain.h"

#include <QDebug>

ApplicationBuilder::ApplicationBuilder()
{
    initGame();
    initGamePlay();
}

void ApplicationBuilder::run()
{
    qDebug("Game successfully started");
}

void ApplicationBuilder::initGame()
{
    qDebug("Game initialize");
}

void ApplicationBuilder::initGamePlay()
{
    qDebug("Gameplay initialize");
}

#ifndef APPLICATIONBUILDER_H
#define APPLICATIONBUILDER_H

#include <QScopedPointer>
class GamePlay;
class GameEngine;
class ApplicationBuilder
{
public:
    ApplicationBuilder();
    ~ApplicationBuilder();
    void run();

private:
    void initGame();
    void initGamePlay();

private:
    QScopedPointer<GamePlay> _gameplay;
    QScopedPointer<GameEngine> _game;
};

#endif // APPLICATIONBUILDER_H

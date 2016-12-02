#ifndef ENGINEBUILDER_H
#define ENGINEBUILDER_H

#include "randomgenerator.h"

class GameEngine;
class Gameplay;

class EngineBuilder
{
public:
    EngineBuilder();
    virtual ~EngineBuilder() {}

    virtual void initSeeder(Seeder *seeder);
    virtual void initGame(GameEngine *engine);
    virtual void initGameplay(Gameplay *gameplay);

private:
    RandomGenerator _generator;
    GameEngine *_engine;
    Gameplay *_gameplay;
};

#endif // ENGINEBUILDER_H

#include "enginebuilder.h"
#include "seeder.h"

EngineBuilder::EngineBuilder()
{
}

void EngineBuilder::initSeeder(Seeder *seeder)
{
    _generator.setSeeder(seeder);
}

void EngineBuilder::initGame(GameEngine *engine)
{
    _engine = engine;
}

void EngineBuilder::initGameplay(Gameplay *gameplay)
{
    _gameplay = gameplay;
}

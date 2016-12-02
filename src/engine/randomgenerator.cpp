#include "randomgenerator.h"
#include "seeder.h"

RandomGenerator::RandomGenerator(const Range &range) :
    _range(range)
{
}

int RandomGenerator::getRandome() const
{
    if (_seeder)
        return error;

    qsrand(_seeder->seed());
    int randome  = qrand();
    return _range.first + randome % _range.second;
}

void RandomGenerator::setRange(const Range &range)
{
    _range = range;
}

void RandomGenerator::setSeeder(Seeder *seeder)
{
    _seeder = seeder;
}

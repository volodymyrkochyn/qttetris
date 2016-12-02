#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

#include <QPair>
typedef QPair<int, int> Range;

class Seeder;

class RandomGenerator
{
public:
    enum { error = -1 };
    RandomGenerator() {}
    RandomGenerator(const Range &range);
    int getRandome() const;

    Range range() const { return _range; }
    void setRange(const Range &range);

    void setSeeder(Seeder *seeder);

private:
    Range _range{0, 0};
    Seeder *_seeder{nullptr};
};

#endif // RANDOMGENERATOR_H

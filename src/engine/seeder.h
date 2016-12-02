#ifndef SEEDER_H
#define SEEDER_H

#include <qglobal.h>

class Seeder
{
public:
    virtual ~Seeder() {}
    virtual uint seed() const;
};

#endif // SEEDER_H

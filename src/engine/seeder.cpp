#include "seeder.h"

#include <QTime>

uint Seeder::seed() const
{
    return QTime::currentTime().msec();
}

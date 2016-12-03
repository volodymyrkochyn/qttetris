#include "tetrisbrick.h"

TetrisBrick::TetrisBrick()
{
}

TetrisBrick *generateBrick(TetrisBrick::BrickType type)
{
    switch (type)
    {
    case TetrisBrick::BT_I:
        return new IBrick;
    case TetrisBrick::BT_J:
        return new JBrick;
    }
    return nullptr;
}

int IBrick::height() const
{
    return 1;
}

QBitArray IBrick::array() const
{
    QBitArray ar(4, true); //1111
    return ar;
}

int JBrick::height() const
{
    return 2;
}

QBitArray JBrick::array() const
{
    QBitArray ar(6, false); //100
    ar.setBit(2);           //111
    ar.setBit(3);
    ar.setBit(4);
    ar.setBit(5);
    ar.setBit(6);
    return ar;
}

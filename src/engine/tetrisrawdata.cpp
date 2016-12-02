#include "tetrisrawdata.h"

TetrisRawData::TetrisRawData(int width, int height) :
    _width(width),
    _height(height)
{
    initRaw();
}

TetrisRawData::~TetrisRawData()
{
    for (int i = 0; i < _width; ++i)
        delete[] _raw;
}

void TetrisRawData::initRaw()
{
    const int width = _width;
    const int height = _height;
    _raw = new int*[width];
    for (int i = 0; i < width; ++i)
    {
        _raw[i] = new int[height];
    }
}

void TetrisRawData::clear()
{
    for (int i = 0; i < _width; ++i)
        for (int j = 0; j < _height; ++j)
            _raw[i][j] = empty;
}

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

void TetrisRawData::setBit(int x, int y)
{
    if (x >= 0 && x < _width)
        if (y >=0 && y < _height)
            _raw[x][y] = full;
}

bool TetrisRawData::test(int **value, int size_w, int size_h)
{
    for (int i = 0; i < size_w && i < _width; ++i)
        for (int j = 0; j < size_h && j < _height; ++j)
            if (value[i][j] == full && _raw[i][j] == full)
                return false;
    return true;
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

void TetrisRawData::checkFullRow()
{
    //
}

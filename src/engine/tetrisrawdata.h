#ifndef TETRISRAWDATA_H
#define TETRISRAWDATA_H


class TetrisRawData
{
public:
    enum Values { empty, full };
    TetrisRawData(int width, int height);
    ~TetrisRawData();

private:
    TetrisRawData(const TetrisRawData &copy) = delete;
    TetrisRawData& operator=(const TetrisRawData &copy) = delete;

    void initRaw();
    void clear();

private:
    int _width;
    int _height;
    int **_raw;
};

#endif // TETRISRAWDATA_H

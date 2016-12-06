#ifndef TETRISRAWDATA_H
#define TETRISRAWDATA_H

#include <QObject>

class TetrisRawData : public QObject
{
    Q_OBJECT
public:
    TetrisRawData(int width, int height);
    ~TetrisRawData();

    bool test(int **value, int size_w, int size_h);

    void clear();
    int** rawData() const { return _raw; }

signals:
    void rowFull(int);
    void brickIsDown();

private:
    TetrisRawData(const TetrisRawData &copy) = delete;
    TetrisRawData& operator=(const TetrisRawData &copy) = delete;

    void initRaw();
    void checkFullRow();

private:
    int _width;
    int _height;
    int **_raw;
};

#endif // TETRISRAWDATA_H

#ifndef TETRISBRICK_H
#define TETRISBRICK_H

#include <QBitArray>

class TetrisBrick
{
public:
    enum BrickType { BT_I, BT_J, BT_L, BT_O, BT_S, BT_T, BT_Z };
    TetrisBrick();
    virtual ~TetrisBrick() {}

    virtual BrickType type() const =0;
    virtual int height() const =0;
    virtual QBitArray array() const =0;

    virtual void initBrick(int **startData) =0;
};

class IBrick : public TetrisBrick
{
public:
    BrickType type() const override { return BT_I; }
    int height() const override;
    QBitArray array() const override;

    void initBrick(int **startData) override;
};

class JBrick : public TetrisBrick
{
public:
    BrickType type() const override { return BT_J; }
    int height() const override;
    QBitArray array() const override;

    void initBrick(int **startData) override;
};

TetrisBrick* generateBrick(TetrisBrick::BrickType type);

#endif // TETRISBRICK_H

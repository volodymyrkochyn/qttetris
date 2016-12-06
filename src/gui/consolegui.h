#ifndef CONSOLEGUI_H
#define CONSOLEGUI_H

#include "gameplay.h"

class ConsoleGUI : public GamePlay
{
public:
    ConsoleGUI();
    void startGame() override;
    void stepOver() override;
};

#endif // CONSOLEGUI_H

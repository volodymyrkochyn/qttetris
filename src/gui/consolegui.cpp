#include "consolegui.h"

#include <QDebug>
#include <QTextStream>

QString quit{"q"};
QString test{"test"};

ConsoleGUI::ConsoleGUI()
{
}

void ConsoleGUI::startGame()
{
    QTextStream textstream(stdin);
    QString userInput;
    while (userInput.compare(quit, Qt::CaseInsensitive) != 0)
    {
        userInput = textstream.readLine();
    }
    qDebug("exit game");
}

void ConsoleGUI::stepOver()
{
    //
}

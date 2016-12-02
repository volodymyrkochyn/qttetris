#include <QCoreApplication>

#include "applicationbuilder.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ApplicationBuilder builder;
    builder.run();

    return a.exec();
}

#include "main.h"
#include "mainwindow.h"
#include <QApplication>

MainWindow::~MainWindow()
{
    // Cleanup code here if needed
}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    a.setStyleSheet(
        "QMainWindow { background-color: #000; color: #fff; }"
    );

    w.show();

    // This ensures the application exits when the last window is closed.
    // This is the default behavior, but explicit connection can be a good practice
    // if you have complex window relationships.
    QObject::connect(&a, &QApplication::lastWindowClosed, &a, &QApplication::quit);

    return a.exec();
}

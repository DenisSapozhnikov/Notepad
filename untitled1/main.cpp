#include <QApplication>
#include <QLabel>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);              // QApp... instead of Qapp...
    QLabel *label = new QLabel("hello world"); // QLabel * instead of Qlabel

    label->show();  // <- label-> instead of label.

    return app.exec();
}

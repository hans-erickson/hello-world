#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include <QWidget>
 
int main(int argc, char **argv)
{
    // This is one of several possible approaches to "Hello world" in
    // Qt. A QMessageBox could be used instead, or a QFrame could be
    // used with a single label.

    // Note that there is no reason for the nested braces here other
    // than to emphasize the minimal scope in which each widget is
    // needed.
    QApplication app(argc, argv);
    {
        QMainWindow* window = new QMainWindow;
        {
            QWidget* centralWidget = new QWidget;
            {
                QHBoxLayout* hbox = new QHBoxLayout;
                {
                    QLabel* label = new QLabel("Hello world!");

                    hbox->setAlignment(Qt::AlignHCenter);
                    hbox->addWidget(label);
                }

                centralWidget->setLayout(hbox);
            }

            window->setCentralWidget(centralWidget);
        }

        window->show();
    }

    return app.exec();
}

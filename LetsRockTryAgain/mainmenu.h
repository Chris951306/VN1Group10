#ifndef MAINMENU_H
#define MAINMENU_H
#include "service.h"
#include "add.h"

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow{
    Q_OBJECT


public:
    void connClose();
    bool connOpen();

    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private slots:
    void on_pushAddButton_clicked();

    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
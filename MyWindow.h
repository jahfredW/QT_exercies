#ifndef MYWINDOW_H
#define MYWINDOW_H


#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>

class MyWindow : public QWidget
{
    Q_OBJECT

    public:
    MyWindow();

    public slots:
    void changerLargeur(int largeur);


    private:
    QSlider *m_slider;


};
#endif // MYWINDOW_

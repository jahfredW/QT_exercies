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
    void changerHauteur(int hauteur);


    private:
    QSlider *m_sliderH;
    QSlider *m_sliderV;

};
#endif // MYWINDOW_

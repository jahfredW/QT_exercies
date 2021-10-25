#include "MyWindow.h"



void MyWindow::changerLargeur(int largeur)
{
    setFixedSize(largeur, 100);
}

MyWindow::MyWindow(): QWidget()
{
    setFixedSize(200,100);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setRange(200, 600);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
}





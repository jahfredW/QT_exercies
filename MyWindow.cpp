#include "MyWindow.h"



void MyWindow::changerLargeur(int largeur)
{
    setFixedSize(largeur, height());
}

void MyWindow::changerHauteur(int hauteur)
{
    setFixedSize(width(), hauteur);
}

MyWindow::MyWindow(): QWidget()
{
    setFixedSize(200,100);

    m_sliderH = new QSlider(Qt::Horizontal, this);
    m_sliderH->setRange(200, 600);
    m_sliderH->setGeometry(10, 5, 150, 20);

    m_sliderV = new QSlider(Qt::Vertical, this);
    m_sliderV->setRange(30,200);
    m_sliderV->setInvertedAppearance(true);
    m_sliderV->setGeometry(180, 5, 20, 50);


    QObject::connect(m_sliderH, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    QObject::connect(m_sliderV, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int)));
}






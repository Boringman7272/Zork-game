#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QWidget>

class widget : public QWidget
{
    Q_OBJECT
public:
    explicit widget(QWidget *parent = nullptr);

signals:

};

#endif // UI_WIDGET_H

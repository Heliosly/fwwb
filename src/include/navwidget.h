#ifndef NAVWIDGET_H
#define NAVWIDGET_H

#include<DListView>
 DWIDGET_USE_NAMESPACE
 ///最左边导航栏
class NavWidget : public QWidget
{
    Q_OBJECT
public:
    NavWidget();
    DListView *ListView1=new DListView(this);
};

#endif // NAVWIDGET_H

#ifndef GET_ALT_ID_H
#define GET_ALT_ID_H

#include <QDialog>

namespace Ui {
class get_alt_id;
}

class get_alt_id : public QDialog
{
    Q_OBJECT
    
public:
    explicit get_alt_id(QWidget *parent = 0);
    ~get_alt_id();
    
private:
    Ui::get_alt_id *ui;
};

#endif // GET_ALT_ID_H

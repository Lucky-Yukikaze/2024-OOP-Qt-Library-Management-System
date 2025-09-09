#ifndef DLG_BOOKBR_H
#define DLG_BOOKBR_H

#include <QDialog>

namespace Ui {
class Dlg_BR;
}

class Dlg_BR : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_BR(QWidget *parent = nullptr);
    ~Dlg_BR();
    void setType(bool isReturn);
    void setBookId(int id);
private slots:
    void on_btn_borrow_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::Dlg_BR *ui;
    int m_bookid;
    bool m_isReturn = false;
};

#endif // DLG_BOOKBR_H

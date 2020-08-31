//---------------------------------------------------------------------------
#ifndef tcpoptdlgH
#define tcpoptdlgH
//---------------------------------------------------------------------------
#include <QDialog>

#include "ui_tcpoptdlg.h"
#define MAXHIST		10

//---------------------------------------------------------------------------
class TcpOptDialog : public QDialog, private Ui::TcpOptDialog
{
    Q_OBJECT

protected:
    void  showEvent(QShowEvent *);

public slots:
    void  BtnOkClick();
    void  BtnNtripClick();

private:
    void  AddHist(QComboBox *list, QString *hist);
    int  ExecCmd(QString cmd, int show);

public:
	int Opt;
    QString Path,History[MAXHIST],MntpHist[MAXHIST];

    explicit TcpOptDialog(QWidget* parent);
private slots:
    void on_MntPnt_textActivated(const QString &arg1);
    void on_MntPnt_textHighlighted(const QString &arg1);
};
//---------------------------------------------------------------------------
#endif

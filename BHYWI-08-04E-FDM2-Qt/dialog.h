#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <vector>
#include <fstream>
using namespace std;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
  double dx;
  vector<double> u_new, u_old;
  int n;
  int nt;
  ofstream out_file;
  double Ne;
  double dt;
  QPushButton* pushButtonIC;
  QPushButton* pushButtonBC;
  QPushButton* pushButtonMAT;
  QPushButton* pushButtonRUN;
  QPushButton* pushButtonRUN1;
  QPushButton* pushButtonRUN2;
  QPushButton* pushButtonSHO;
  double* matrix;
  double* vecb;
  double* vecx;
  bool nexttimestep;
  double u_bc_l,u_bc_r;

private slots:
    void on_pushButtonIC_clicked();
    void on_pushButtonSHO_clicked();
    void on_pushButtonRUN_clicked();
    void on_pushButtonBC_clicked();
    void on_pushButtonMAT_clicked();
    void RunTimeStep();
    void RunTimeLoop();
    void ContinueTimeLoop();
    void AssembleEquationSystem();
    void AnalyticalSolution();
};

#endif // DIALOG_H

#ifndef VERIFYMATRIX_H
#define VERIFYMATRIX_H

#include <QtWidgets>

class VerifyMatrix
{

public:
    VerifyMatrix();
    ~VerifyMatrix();

    bool guardarMatriz();

private:
    //la bandera depende 1-fila 2-columna
    //num-la columna ha ser revisada
    //
   public:
    void mostrarMensaje(QWidget *parent);
    bool verify(int matrix[9][9], int num, int flag);

};

#endif // VERIFYMATRIX_H

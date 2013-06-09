#include "verifymatrix.h"
#include <QMessageBox>
#include <maintable.h>

VerifyMatrix::VerifyMatrix()
{
}

VerifyMatrix::~VerifyMatrix(){

}

void VerifyMatrix::mostrarMensaje(QWidget *parent){
    QMessageBox *mensaje = new QMessageBox();
    mensaje->about(parent, "Ha ganado", "Juego Exitoso, 100 puntos");
}

//bool VerifyMatrix::verificarMatriz(int matriz[9][9]){

//}

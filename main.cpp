#include "mainwindow.h"
#include <QApplication>
#include "usuario.h"
#include "producto.h"
#include "gerente.h"
#include "cliente.h"
#include "empleado.h"
#include <vector>
#include <string>
#include "aprobado.h"

using namespace std;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    vector<Usuario*> *users=new vector<Usuario*>;
    vector <Producto*> *products=new vector<Producto*>;
    vector<Aprobado*>* listrecovery=new vector<Aprobado*>;
    Gerente* p= new Gerente("1","!","admin","admin");
    users->push_back(p);
    MainWindow w(0,users,products,listrecovery);
    w.show();
    return a.exec();
}

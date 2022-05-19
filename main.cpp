//----------------------------------------
// Dato de Entrada: radio, altura (double)
// Dato de Salida: ALateral, ATotal, Volumen,
//               : ASupCilindrica
//----------------------------------------
#include "CCilindro.h"


int main()
{ tNumero r,h;

   cout << "Radio : ";
   cin >> r;
   cout << "Altura: ";
   cin >> h;
   CCilindro *pObj= nullptr;

   pObj = new CCilindro;
   pObj->setRadio(r);  ///--- (*pObj).setRadio(r);
   pObj->setAltura(h);
    cout << "Area de la superficie cilindrica: " << pObj->areaSC()<< "\n";
    cout << "Area lateral                    : " << pObj->areaLateral()  << "\n";
    cout << "Area total                      : " << pObj->areaTotal()   << "\n";
    cout << "Volumen                         : " << pObj->volumen() << "\n";
    delete pObj;
    pObj = nullptr;

   return 0;
}



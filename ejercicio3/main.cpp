#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

entero numero;
caracter crt;

cout << "ingrese el caracter:";
cin >> crt;
cout << "\ningrese el numero:";
cin >> numero;
if (crt == 'a' || crt == 'c' || crt == 'g'|| crt =='e' ){
  if (numero%2!=0)
  cout << "negro"<<endl;
  else
  cout<<"blanco"<<endl;
}
else{ 
  if (numero %2 == 0 )
  cout<<"negro"<<endl;
  else
  cout<<"blanco"<<endl;
}
}

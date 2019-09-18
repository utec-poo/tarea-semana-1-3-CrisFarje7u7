#include <iostream>

using namespace std;

int main() {

int numero;
char crt;

cout << "Ingrese el caracter: \n";
cin >> crt;
cout << "Ingrese el numero: \n";
cin >> numero;
if (crt == 'a' || crt == 'c' || crt == 'g'|| crt =='e' ){
  if (numero%2!=0)
  cout << "El color de la casilla es negro\n";
  else
  cout<<"El color de la casilla es blanco\n";
}
else{ 
  if (numero %2 == 0 )
  cout<<"El color de la casilla es negro\n";
  else
  cout<<"El color de la casilla es blanco\n";
}
return 0;
}

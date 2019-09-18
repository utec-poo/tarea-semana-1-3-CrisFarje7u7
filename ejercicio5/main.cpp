#include <iostream>
using namespace std;

int main() {
  int total=0, pares=0, impares=0;
  int numero=-1;
  cout<<"Ingrese los numeros: \n";
  while (numero != 0 ){
    cin>> numero;
    if (numero!=0)
      total++;
      if (numero%2==0){
      pares++;
      }
      else{
      impares++;
      }
  }
  cout << "El total de numeros es:"<<total<<"\nPares: "<<pares-1<<"\nImpares: "<<impares;
  
  return 0;
}

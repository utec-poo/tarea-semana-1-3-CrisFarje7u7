#include <iostream>

using namespace std;

int calculo(int base, int altura)
{
return ((base*altura)/2);
}

int main() {
  int base;
  int altura;
  cout <<"Ingrese la base: \n";
  cin >>base;
  cout <<"Ingrese la altura: \n";
  cin >> altura;
  
  cout << "El area del triangulo es: " <<calculo(base, altura);


  return 0;
}

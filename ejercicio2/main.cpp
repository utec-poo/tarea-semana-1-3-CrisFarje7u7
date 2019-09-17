#include <iostream>
using namespace std;
int main()
{
  int numero=0;
  int monto=0;
  int claro=0;

  cout << "Bienvenido a la venta de entradas al concierto\n";
  cout <<" ZONAS:\n Super Vip: OPCION 1\n Vip: OPCION 2\n Preferencial: OPCION 3\n General: OPCION 4\n"; 
  cout <<"Ingrese el numero de opcion que desea comprar: \n";
  cin>>numero;
  while(numero >4)
    {cout <<"Es una opcion invalida\n Ingrese la opcion nuevamente: ";
    cin>>numero;}

cout<<"¿Es cliente claro?\n";
cout <<" SI:Ingrese 1\n NO:Ingrese 0\n";
cin >> claro;

switch(numero)
{
  case 1: {cout<<"El precio de esta opcion es: 212\n";
  monto = 212;} 
  break;
  case 2: {cout<<"El precio de esta opcion es: 170\n"; 
  monto = 170;}
  break;
  case 3: {cout<<"El precio de esta opcion es: 136\n";
  monto= 136;}
  break;
  case 4: {cout<<"El precio de esta opcion es: 59\n";
  monto = 59;}
  break;
  default:cout<<"Esta opcion es invalida\n";
}


if (claro==1)
{
  monto=((monto*80)/100);
  cout <<" Usted tiene un 20% de descuento por ser cliente claro\n El precio de entrada es: "<<monto<< "\n GRACIASSS" ;
}
else
{
cout<<"GRACIASSS";
}

  return 0;
}

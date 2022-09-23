//Programa que presenta las operaciones básicas
//Creado por Kerlly Castillo 
//Fecha: 23-09-2022
#include<iostream>
using namespace std;
int main()
{
	float KJCP_x,KJCP_y,KJCP_s,KJCP_m,KJCP_d,KJCP_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de KJCP_x=:";
	cin>>KJCP_x;
	cout<<"Ingrese en valor de KJCP_y=:";
	//Operaciones 
	cin>>KJCP_y;
	KJCP_s=KJCP_x+KJCP_y;
	KJCP_m=KJCP_x*KJCP_y;
	KJCP_d=KJCP_x/KJCP_y;
	KJCP_r=KJCP_x-KJCP_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<KJCP_x<<" + "<<KJCP_y<<" = "<<KJCP_s<<endl;
	cout<<"Las multiplicacion de "<<KJCP_x<<" * "<<KJCP_y<<" = "<<KJCP_m<<endl;
	cout<<"Las division de "<<KJCP_x<<" / "<<KJCP_y<<" = "<<KJCP_d<<endl;
	cout<<"Las resta de "<<KJCP_x<<" - "<<KJCP_y<<" = "<<KJCP_r<<endl;
	return 0;
}

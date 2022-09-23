//Creado por: Kerlly Castillo
#include<iostream>
using namespace std;
int main()
{
	int KJCP_i=0,KJCP_l;
	float KJCP_x,KJCP_s=0;
	cout<<"ingrese el limite KJCP_l="; cin>>KJCP_l;
	do{

	cout<<"ingrese el numero KJCP_x="; cin>>KJCP_x;
	KJCP_i=KJCP_i+1;
	KJCP_s=KJCP_s+KJCP_x;



	}while(KJCP_i<KJCP_l);
	cout<<"Se ingresaron "<<KJCP_l<<" numeros "<< "que sumaron "<<KJCP_s<<endl;
	return 0;
}

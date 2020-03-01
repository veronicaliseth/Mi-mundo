#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string nombre;
int incidente, ubicacion, unidad;

void unidad1();
void pedirDatos1();
void pedirDatos2();
void unidadEmergencia();
void verificarIncidente();
void verificarUbicacion();

main(){
	pedirDatos1();
    pedirDatos2();
    unidadEmergencia();
	verificarIncidente();
	verificarUbicacion();
}
void unidad1(){
	srand(time(NULL));
	unidad=1+rand()%9;
	switch(unidad){
		case 1:cout<<"Unidad: Patrulla 1"<<endl;
		break;
		case 2:cout<<"Unidad: Patrulla 2"<<endl;
		break;
		case 3:cout<<"Unidad: Patrulla 3"<<endl;
		break;
		case 4:cout<<"Unidad: Ambulancia 1";
		break;
		case 5:cout<<"Unidad: Ambulancia 2";
		break;
		case 6:cout<<"Unidad: Ambulancia 3";
		break;
		case 7:cout<<"Unidad: Bombero 1";
		break;
		case 8:cout<<"Unidad: Bombero 2";
		break;
		case 9:cout<<"Unidad: Bombero 3";
	}
}
void pedirDatos1(){
	cout<<"Llamo al 911"<<endl<<"Ingrese su nombre completo por favor"<<endl;
	cin>>nombre;
	cout<<"\nNombre: "<<nombre<<endl;
	cout<<"Eliga el tipo de incidente por el cual pidio ayuda"<<endl;
	cout<<"1.Accidente de vehiculo automotor con lesiones"<<endl;
	cout<<"2.Accidente de aeronave con fallecido"<<endl;
	cout<<"3.Electrico/lesion por corriente electrica"<<endl;
	cout<<"4.Lesionado por arma blanca"<<endl;
	cout<<"5.Incendio en la escuela"<<endl;
	cin>>incidente;	
}
void pedirDatos2(){
	cout<<"\nIngrese la ubicacion del accidente"<<endl;
	cout<<"1.Via publica(Mezquite)"<<endl;
	cout<<"2.Universidad Politecnica"<<endl;
	cout<<"3.Panteon de suchiapa"<<endl;
	cout<<"4.Presidencia municipal"<<endl;
	cout<<"5.Parque central"<<endl;
	cin>>ubicacion;
}
void unidadEmergencia(){
	cout<<"\nUnidades de emergencia"<<endl;
	cout<<"Patrullas (1, 2 y 3)"<<endl;
	cout<<"Ambulancias (1, 2 y 3)"<<endl;
	cout<<"Bomberos (1, 2 y 3)"<<endl;
}
void verificarIncidente(){
	if(incidente>=1 || incidente<=5){
	switch(incidente){
		case 1:cout<<"\nIncidente: Accidente de vehiculo automotor con lesiones"<<endl; 
		break;
		case 2:cout<<"\nIncidente: Accidente de aeronave con fallecido"<<endl; 
		break;
		case 3:cout<<"\nIncidente: Electrico/lesion por corriente electrica"<<endl; 
		break;
		case 4:cout<<"\nIncidente: Lesionado por arma blanca"<<endl; 
		break;
		case 5:cout<<"\nIncidente: Incendio en la escuela"<<endl; 
		break;
		default:cout<<"\nLo lamento no tenemos los primeros auxilios para ese incidente"<<endl;
	}
  }
}
void verificarUbicacion(){
	if((ubicacion>0 || ubicacion<6) && (incidente<1 || incidente>6)){
		cout<<"Llame a otro numero de emergencia";
	}else{
		if((ubicacion>0 || ubicacion<6)&&(incidente>0 || incidente>6))
		switch(ubicacion){
		 case 1:cout<<"Ubicacion: Via publica(Mezquite)"<<endl; unidad1();
	     break;
		 case 2:cout<<"Ubicacion: Universidad Politecnica"<<endl; unidad1();
		 break;
		 case 3:cout<<"Ubicacion: Panteon de suchiapa"<<endl; unidad1();
		 break;
		 case 4:cout<<"Ubicacion: Presidencia municipal"<<endl; unidad1();
		 break;
		 case 5:cout<<"Ubicacion: Parque central"<<endl; unidad1();
		 break;
		 default:cout<<"Lo lamento no contamos con unidades cerca para atender su emergencia"<<endl;	
		}
	}	
}


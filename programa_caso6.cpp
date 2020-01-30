#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string nombre;
int ubicacion, incidente, patrulla1,patrulla2, patrulla3, 
    ambulancia1, ambulancia2, ambulancia3,bombero1, bombero2,
	bombero3;
	 
void pedirDatos();
void verificarIncidente();
void verificarUbicacion();
void unidadAleatorio();

main(){
	pedirDatos();
    verificarIncidente(),
    verificarUbicacion();
	unidadAleatorio();
}

void pedirDatos(){
	cout<<"Llamo al 911-Ingrese su nombre completo por favor"<<endl;
	cin>>nombre;
	cout<<"Eliga el tipo de incidente por el cual pidio ayuda"<<endl;
	cout<<"1.Accidente de vehiculo automotor con lesiones"<<endl;
	cout<<"2.Accidente de aeronave con fallecido"<<endl;
	cout<<"3.Electrico/lesion por corriente electrica"<<endl;
	cout<<"4.Lesionado por arma blanca"<<endl;
	cout<<"5.Incendio en la escuela"<<endl;
	cin>>incidente;
	verificarIncidente();
	cout<<"\nIngrese la ubicacion del accidente"<<endl;
	cout<<"1.Via publica(Mezquite)"<<endl;
	cout<<"2.Universidad Politecnica"<<endl;
	cout<<"3.Panteon de suchiapa"<<endl;
	cout<<"4.Presidencia municipal"<<endl;
	cout<<"5.Parque central"<<endl;
	cin>>ubicacion;
	verificarUbicacion();
    unidadAleatorio();
}

void verificarIncidente(){
	if(incidente>0 || incidente<6){
	switch(incidente){
		case 1:cout<<"Incidente: Accidente de vehiculo automotor con lesiones";break;
		case 2:cout<<"Incidente: Accidente de aeronave con fallecido";break;
		case 3:cout<<"Incidente: Electrico/lesion por corriente electrica";break;
		case 4:cout<<"Incidente: Lesionado por arma blanca";break;
		case 5:cout<<"Incidente: Incendio en la escuela";break;
		default:cout<<"Lo lamento no tenemos los primeros auxilios para ese incidente";
		}
	}
}
void verificarUbicacion(){
	if(ubicacion>0 || ubicacion<6){
	switch(ubicacion){
		case 1:cout<<"Ubicacion: Via publica(Mezquite)";break;
		case 2:cout<<"Ubicacion: Universidad Politecnica";break;
		case 3:cout<<"Ubicacion: Panteon de suchiapa";break;
		case 4:cout<<"Ubicacion: Presidencia municipal";break;
		case 5:cout<<"Ubicacion: Parque central";break;
		default:cout<<"Lo lamento no contamos con unidades cerca para atender su emergencia";	
		}
	}
}
void unidadAleatorio(){
	srand(time(NULL));
	patrulla1=rand()%3;
	patrulla2=rand()%3;
	patrulla3=rand()%3;
	ambulancia1=rand()%3;
	ambulancia2=rand()%3;
	ambulancia3=rand()%3;
	bombero1=rand()%3;
	bombero2=rand()%3;
	bombero3=rand()%3;
}

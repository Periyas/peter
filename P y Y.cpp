#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<string.h>

using namespace std;

struct p
{	
	char nombre[10];
	int cedula;
	p *EQS;
};

p *a1;
p *aux;
p *aux2XD;

int n = 0;
int registrar(){
		
	if(a1==NULL){
	a1 = (struct p *) malloc (sizeof(struct p));
	cout<<"Ingresa la CC: ";
	cin>>a1->cedula;
	cout<<"Ingresa el nombre: ";
	cin>>a1->nombre;	
	a1->EQS = NULL;		
	
	n=n+1;
	
	}else{

	aux = (struct p *) malloc (sizeof(struct p));
	cout<<"Ingresa la CC: ";
	cin>>aux->cedula;
	cout<<"Ingresa el nombre: ";
	cin>>aux->nombre;
	aux->EQS = NULL;
	aux2XD=a1; 
	while (aux2XD->EQS!=NULL)
	aux2XD=aux2XD->EQS;	
	aux2XD->EQS = aux;
	aux2XD = aux = NULL;
	free(aux);
	free(aux2XD);

	n=n+1;

	}	
	return 0;
}

int mostrar(){
		
		int opcc;
		int i;
	for(aux=a1; aux!=NULL; aux=aux->EQS){
			cout<<"CC: "<<aux->cedula<<endl;

			cout<<"Nombre del Paciente: "<<aux->nombre<<endl;

			cout<<"\n";
			
			
		}
	cout<<"los pacientes son "<<n<<" \n";
	cout<<"Escriba 1 para continuar: ";
	cin>>opcc;
	while(opcc = 1){


	return 0;
}

}

int menu(){

	int opc;
	do
	{
		system("cls");
        cout<<""<<endl;
		cout<<"Piri's and Yan's Hospital \n ";
		cout<<"Menu Principal \n";
		cout<<"1) Registrar paciente.  \n";
		cout<<"2) Mostrar pacientes. \n";
		cout<<"3) Salir. \n";
		cout<<":";
		cin>>opc;
		switch(opc)
		{
			case 1: registrar();
					break;
			case 2: mostrar();
					break;
			case 3:;
					break;
		}

	}while(opc!=3);
	return 0;
}

int main(){

   menu();	
}

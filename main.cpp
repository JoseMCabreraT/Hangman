#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

void MENU();
void ACERCA();
void REGISTRO();
void JUGADORES();
string ALIAS[5];
int VIDAS[4];
int NIVELESAPROBADOS[6];
int PUNTAJE[6];
int NumeroJugadores, i,j,OPORTUNIDADES=5;
int REGISTROZ=0;
void JUGAR();
string NIVEL1[15]={"carro","casa","perro","llave","juego","mano","sapo","cosa","auto","lapiz","tecla","papa","mama","hola","saco"};
string NIVEL2[15]={"corneta","trompeta","camisa","pantalon","borrador","numero","helado","carpeta","zapato","cuaderno","navidad","religion","sonido","pagina","sombrero"};
string NIVEL3[15]={"telefono","diccionario","estudiante","lapicero","excelente","chocolate","compilador","libreria","automovil","camioneta","baterista","cocotero","continente","desarrollo","semaforo"};
string NIVEL4[15]={"computadora","barquisimeto","optimizacion","estupefacto","extraterrestre","alfanumerico","velociraptor","locomotora","almacenamiento","interesante","fotografia","cinematografia","estereotipo","mayoritario","cuidadosamente"};
string NIVEL5[15]={"memoria ram","tarjeta de video","disco duro","lenguaje de programacion","sistema operativo","telefono inteligente","torta de chocolate", "tarjeta de red","tarjeta madre","video juego","pagina web","mundial de futbol","futbol venezolano","cruce peatonal","zona escolar"};
int Jugando, tam;
char C;

main()
{
   MENU();
}//main

void MENU()
{
    int opc;
    do{system("cls");
    cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    cout<<"1.-Acerca de"<<endl;
    cout<<"2.-Registro Jugador"<<endl;
    cout<<"3.-Reiniciar Registro Jugadores"<<endl;
    cout<<"4.-Mostrar Jugadores"<<endl;
    cout<<"5.-Jugar Nivel"<<endl;
    cout<<"0.-Salir\n"<<endl;
    cout<<"Porfavor ingrese su opcion"<<endl;
    cin>>opc;

    if(opc<0 || opc>=6)
    {
    cout<<"Porfavor ingrese una opcion valida.\n"<<endl;
    system("PAUSE");
    }

    switch(opc)
    {
    case 1: ACERCA();
        break;
    case 2: REGISTRO();
        break;
    case 3:
        break;
    case 4: JUGADORES();
        break;
    case 5: JUGAR();
        break;
    }//switch
    if(opc==0)
    {
        cout<<"\nGRACIAS, REGRESE PRONTO.\n"<<endl;
        system("PAUSE");
    }
}while(opc<0 || opc>=6 || opc!=0);
    return;
}//MENU

void ACERCA()
{system("cls");
    cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    cout<<"Desarrollado por:\t"<<endl;
    cout<<"\nJose Miguel Cabrera"<<endl;
    cout<<"\nAgradecimientos:\t"<<endl;
    cout<<"\nDios, su amado Hijo, Virgen Maria, San Miguel Arcangel"<<endl;
    cout<<"A todos miles de gracias\n"<<endl;
    system("PAUSE");
    return;
}//ACERCA

void REGISTRO()
{system("cls");
bool aux=false;
if(REGISTROZ==0)
{
do{system("cls");
    cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    cout<<"Porfavor ingrese numero de jugadores"<<endl;
    cin>>NumeroJugadores;
    if(NumeroJugadores<=1 || NumeroJugadores>=6)
    {
        cout<<"El minimo de jugadores debe ser 2 y maximo 5\n"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        system("PAUSE");
    }
}while(NumeroJugadores<=1 || NumeroJugadores>=6);
/*ALIAS[NumeroJugadores];
VIDAS[NumeroJugadores];
NIVELESAPROBADOS[NumeroJugadores];
PUNTAJE[NumeroJugadores];*/
for(i=0; i<NumeroJugadores; i++)
{
    cout<<"Por favor ingrese alias del jugador numero"<<" "<<i+1<<endl;
    do{
    cin>>ALIAS[i];
    switch(NumeroJugadores)
    {
    case 2:
        if(ALIAS[1]==ALIAS[0])
        {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
    break;
    case 3:
        if(ALIAS[1]==ALIAS[0])
        {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
       if(i==2)
        {
            if(ALIAS[2]==ALIAS[1] || ALIAS[2]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
    break;
    case 4:
         if(ALIAS[1]==ALIAS[0])
        {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
       if(i==2)
        {
            if(ALIAS[2]==ALIAS[1] || ALIAS[2]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
        if(i==3)
        {
            if(ALIAS[3]==ALIAS[2] || ALIAS[3]==ALIAS[1] || ALIAS[3]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
    break;
    case 5:
        if(ALIAS[1]==ALIAS[0])
        {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
       if(i==2)
        {
            if(ALIAS[2]==ALIAS[1] || ALIAS[2]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
        if(i==3)
        {
            if(ALIAS[3]==ALIAS[2] || ALIAS[3]==ALIAS[1] || ALIAS[3]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
        if(i==4)
            {
            if(ALIAS[4]==ALIAS[3] || ALIAS[4]==ALIAS[2] || ALIAS[4]==ALIAS[1] || ALIAS[4]==ALIAS[0])
                {
        cout<<"ALIAS REPETIDO, POR FAVOR INGRESE OTRO."<<endl;
        aux=false;
        }
        else
        {
            aux=true;
        }
        }
    break;
    }//switch
    }while(aux==false);

    VIDAS[i]=3;
    NIVELESAPROBADOS[i]=0;
    PUNTAJE[i]=0;
}//for i
for(i=0; i<NumeroJugadores; i++)
    NIVELESAPROBADOS[i]=0;
REGISTROZ=1;
}
else
{
    cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    cout<<"ERROR, YA HIZO EL REGISTRO DE JUGADORES."<<endl;
}
    system("PAUSE");
    return;
}//REGISTRO

void JUGADORES()
{system("cls");
cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    if(REGISTROZ==1)
    {
switch(NumeroJugadores)
{
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
}//switch
}
else
{
    cout<<"NO HAY USUARIOS REGISTRADOS.\n"<<endl;
}
system("PAUSE");
    return;
}//JUGADORES

void JUGAR()
{system("cls");
cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    if(REGISTROZ==1)
    {
cout<<"POR FAVOR SELECCIONE JUGADOR PARA INICIAR AVENTURA:\n"<<endl;
for(i=0; i<NumeroJugadores; i++)
{
    cout<<i<<".-"<<ALIAS[i]<<endl;
}//for i
cout<<"POR FAVOR INGRESE OPCION:"<<endl;
cin>>Jugando;
system("cls");
for(i=0; i<5; i++)
{
    for(j=0; j<5; j++)
    {
        cout<<"\t\t       FOMECA\n"<<endl;
    cout<<"\t\tJUEGO DEL AHORCADO"<<endl;
    cout<<"\t*----------------------------------------*\n\n"<<endl;
    cout<<"\t\tNIVEL:"<<(i+1)<<" "<<"PARTIDA:"<<(j+1)<<"\n"<<endl;
    cout<<"JUGADOR:"<<" "<<ALIAS[Jugando]<<"\t\t\t\t"<<"NIVELES APROBADOS="<<" "<<NIVELESAPROBADOS[Jugando]<<"\n"<<endl;
    cout<<"VIDAS="<<"  "<<VIDAS[Jugando]<<"\t\t\t\t"<<"PUNTAJE="<<" "<<PUNTAJE[Jugando]<<"\n"<<endl;
    cout<<"OPORTUNIDADES="<<" "<<OPORTUNIDADES<<"\n"<<endl;
    string word=NIVEL1[rand() % 15];
    cout<<word<<endl; //CON ESTO SE VERIFICA SI LA PALABRA ES LA CORRECTA.
    cout<<"PALABRA POR ADIVINAR:"<<endl;
    for (int y=0;y<word.length();y++)
    cout<<"*";
    cout<<"\n"<<endl;
    cout<<"INGRESE SU OPCION="<<endl;
    C=getch();
    //cout<<word.find_first_of(C)<<endl; //ESTO MUESTRA NUMEROS PARA DETERMINAR EXISTENCIA DE LA PALABRA.
    int Aparecio=word.find(C);
    if(Aparecio==1)
    {
        cout<<"LA LETRA SE ECUENTRA EN LA PALABRA "<<endl;
    }
    else
    {
        cout<<"LA LETRA NO SE ECUENTRA EN LA PALABRA"<<endl;
    }
    system("PAUSE");
    }//for j
}//for i
    }//if
    else
    {
        cout<<"NO HAY USUARIOS REGISTRADOS.\n"<<endl;
    }
    system("PAUSE");
    return;
}//JUGAR

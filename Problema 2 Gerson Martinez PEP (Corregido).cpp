//Un caracol cae en un pozo de H metros de profundidad.Este caracol durante el dia asciende una 
//distancia  Ld metros, pero durante la noche, al quedarse dormido,resbala y deciende Ln metros
//Realice  una programa que simulando el movimiento del caracol para H,Ld y Ln dados por el usuario .
//El programa debe arrojar como resultado en cuantos dias el caracol dias el caracol sale del 
//pozo (si es que sale)

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
float H,Ld, Ln;
float funcionCaracol=0;
float sumatoria=0;
int doceHoras=0, dias=0;

cout<<"Ingrese el la altura H del pozo:";cin>>H;
cout<<"Ingrese la altura que asciende el caracol durante el dia (Ld):";cin>>Ld;
cout<<"Ingrese la altura que deciende el caracol durante la noche (Ln):";cin>>Ln;

if(Ld==Ln){
    cout<<"El caracol no podra salir del pozo "<<endl;
}
if((Ld<Ln)&&(Ld<H)){
    cout<<"El caracol no podra salir del pozo "<<endl;
}
if(Ld==H){
    cout<<"El caracol sube en un dia (12 Horas)"<<endl;
} 
if((Ld==H)&&(Ln>=Ld)){
        cout<<"El caracol sube en un dia (12 Horas)"<<endl;

    
}
if((Ld<Ln)&&(Ld>=H)){
        cout<<"El caracol sube en un dia (12 Horas)"<<endl;

    
}

if((Ld!=H)&&(Ld>Ln)){
    while(sumatoria<H){
    funcionCaracol=(Ld*(pow(cos(doceHoras*((3.141592654)/2)),2)))-(Ln*(pow(sin(doceHoras*((3.141592654)/2)),2)));
   
   cout<<funcionCaracol<<endl;
   sumatoria=funcionCaracol+sumatoria;
    doceHoras++;
    
    
}

   
}


cout<<sumatoria<<endl;
cout<<doceHoras<<endl;

if(doceHoras&2==0){
    dias=doceHoras/2;
    cout<<"El caracol saldra del poso en :"<<dias<<"";

}

if(doceHoras%2==1){
    dias=(((doceHoras)-1)/2);
    cout<<"El caracol saldra del poso en :"<<dias<<"dias+12 horas";

    
}



    return 0;
}
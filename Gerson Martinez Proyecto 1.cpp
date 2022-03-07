#include <iostream>

using namespace std;

int main()
{
float SumOperation=0,SubtrationOperation=0,MultiplicationOperation=0,DivisionOperation=0;
float NumberOne,Numbertwo;
char Operation;



cout<<"Digite el primer Numero: ";cin>>NumberOne;
cout<<"Digite el segundo Numero: ";cin>>Numbertwo;



cout<<"Ingrese a=Suma, b=Resta, c=Multiplicacion, d= Division : ";cin>>Operation;

switch(Operation){
    case 'a': SumOperation=NumberOne+Numbertwo;
    cout<<"La suma es: "<<SumOperation<<endl;
    break;
    case 'b': SubtrationOperation=NumberOne-Numbertwo;
    cout<<"La division es: "<<SubtrationOperation<<endl;
    break;
    case 'c':MultiplicationOperation=NumberOne*Numbertwo;
    cout<<"La muliplicacion es: "<<MultiplicationOperation<<endl;
    break;
    case 'd':
    if(Numbertwo==0){
        cout<<"La division entre 0 no esta determinada "<<endl;
    }
    else{
        DivisionOperation=NumberOne/Numbertwo;
        cout<<"La dvision es: "<<DivisionOperation<<endl;
    }
    break;
    default:
    cout<<"La letra introducida no coincide con ninguna operacion";
    break;
}


    return 0;
}


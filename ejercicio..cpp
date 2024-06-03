#include<iostream>
using namespace std;
int suma(int entero1,int entero2){
    int resultado=0;
    resultado=(entero1+entero2);
    return resultado;
}
int resta(int entero1,int entero2){
    int resultado=0;
    resultado=(entero1-entero2);
    return resultado;
}
int multiplicacion(int entero1,int entero2){
    int resultado=0;
    resultado=(entero1*entero2);
    return resultado;
}
float division(int entero1,int entero2){
    float resultado=0;
    resultado=float(entero1)/float(entero2);
    return resultado;
}
float media(int entero1, int entero2){
    float resultado=0;
    resultado=(float(entero1)+ float(entero2))/2;
    return resultado;
}
int main(){
    int n1=0,n2=0,respuesta=0, respuesta2=0, respuesta3=0;
    float respuesta4=0.00, respuesta5=0;
    n1=8;
    n2=5;
    respuesta=suma(n1,n2);
    respuesta2=resta(n1,n2);
    respuesta3=multiplicacion(n1,n2);
    respuesta4=division(n1,n2);
    respuesta5=media(n1,n2);
    cout<<"El resultdado es: "<<respuesta<<"\n";
    cout<<"El resultdado es: "<<respuesta2<<"\n";
    cout<<"El resultdado es: "<<respuesta3<<"\n";
    cout<<"El resultdado es: "<<respuesta4<<"\n";
    cout<<"El resultdado es: "<<respuesta5<<"\n";
    

    return 0;
}
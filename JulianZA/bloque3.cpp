/*
#include <iostream>
#include <math.h>

using namespace std;

int main() {/*
    int numero,dato=5;

    cout << "Digite un numero: " << endl;
    cin >> numero;

    if(numero>=dato){
        cout << "El numero es mayor o igual a 5 " << endl;
    }else{
        cout << "El numero es menor a 5 " << endl;
    }

    int numero;
    cout << "Digite un numero: " << endl;
    cin >> numero;

    switch (numero) {
        case 1: cout << "Es el numero 1"; break;
        case 2: cout << "Es el numero 2"; break;
        case 3: cout << "Es el numero 3"; break;
        case 4: cout << "Es el numero 4"; break;
        case 5: cout << "Es el numero 5"; break;
        default: cout << "No esta en el rango de 1-5"; break;
    }

    return 0;
*//*
    int n1,n2,n3;
    cout << "Digite el numero 1: " << endl; cin >>n1;
    cout << "Digite el numero 2: " << endl; cin >>n2;
    cout << "Digite el numero 3: " << endl; cin >>n3;
    if((n1>=n2)&&(n1>=n3)){
        cout << "El numero 1 es el mayor" << endl;
    }else if(((n2>=n1)&&(n2>=n3))){
        cout << "El numero 2 es el mayor" << endl;
    }else {
        cout << "El numero 3 es el mayor" << endl;
    }
*//*
    int n1;
    cout << "Digite el numero: " << endl; cin >>n1;
    if(n1%2==0){
        cout<<"El numero es par";
    }else{
        cout<<"El numero es impar";
    }*/
/*
    int n1;
    cout << "Digite el numero: " << endl; cin >>n1;
    if(n1==0){
        cout<<"El numero es 0";
    }else if(n1>0){
        cout<<"El numero es positivo";
    }else{
        cout<<"El numero es negativo";
    }
    *//*
    char letra;
    cout << "Digite un caracter: "; cin >> letra;
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minuscula" << endl; break;
        default : cout << "NO es una vocal miniscula"; break;
    }*//*
    int n1;
    cout << "Digite el numero: " << endl; cin >>n1;
    if(n1>=18&&n1<=25){
        cout<<"Su edad esta en el rango de 18-25";
    }else{
        cout<<"El numero no esta en el rango de 18-25";
    }*//*
    int n1,n2,n3,n4;
    cout << "Digite el numero 1: " << endl; cin >>n1;
    cout << "Digite el numero 2: " << endl; cin >>n2;
    cout << "Digite el numero 3: " << endl; cin >>n3;
    cout << "Digite el numero 4: " << endl; cin >>n4;
    if((n1==n4)||(n2==n4)||(n3==n4)){
        cout << "El numero es igual a uno de los numeros anteriores" << endl;
    }else{
        cout << "El numero no es igual a ninguno de los anteriores" << endl;
    }*/
    /*
    int n1;
    cout << "Digite el numero: " << endl; cin >>n1;
    int unidades= n1%10;
    n1=n1/10;
    int decenas =n1%10;
    n1=n1/10;
    int centenas = n1%10;
    n1=n1/10;
    int millares = n1%10;
    n1=n1/10;

    switch (millares) {
        case 1: cout << "M"; break;
        case 2: cout << "MM"; break;
        case 3: cout << "MMM"; break;
    }

    switch (centenas) {
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;

    }
    switch (decenas) {
        case 1: cout << "X"; break;
        case 2: cout << "X"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;

    }
    switch (unidades) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;

    }
    */
    /*
    int n1;
    cout << "Digite el numero entre 1-12: " << endl; cin >>n1;
    switch (n1) {
        case 1: cout << "Enero"; break;
        case 2: cout << "Febrero"; break;
        case 3: cout << "Marzo"; break;
        case 4: cout << "Abril"; break;
        case 5: cout << "Mayo"; break;
        case 6: cout << "Junio"; break;
        case 7: cout << "Julio"; break;
        case 8: cout << "Agosto"; break;
        case 9: cout << "Septiembre"; break;
        case 10: cout << "Octubre"; break;
        case 11: cout << "Noviembre"; break;
        case 12: cout << "Diciembre"; break;
        default: cout << "No existe mes con ese numero"; break;
    }
*//*
    int saldo;
    int opc;
    int dinero;
    saldo=1000;
    cout << "-------------MENU DEL CAJERO-------------------"<< endl;
    cout << "\t BIENVENIDO A SU CAJERO AUTOMATICO" << endl;
    cout << "1.-Ingresar dinero en cuenta"<< endl;
    cout << "2.-Retirar dinero de la cuenta" << endl;
    cout << "3.-Salir" << endl;
    cout << "OPCION: "<<endl;
    cin >> opc;

    switch (opc) {
        case 1: cout << "Ingrese el dinero para la cuenta:"<<endl;
                cin >> dinero;
                saldo=dinero+saldo;
                cout <<"El nuevo saldo es: "<< saldo <<endl;break;
        case 2: cout << "Ingrese el dinero a retirar:"<<endl;
                cin >> dinero;
                saldo=saldo-dinero;
                cout <<"El nuevo saldo es: "<< saldo <<endl;break;
        case 3: cout << "Adios :D"; break;
        default: cout << "No existe esa opcion";
    }
}*/
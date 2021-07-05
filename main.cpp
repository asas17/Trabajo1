#include <iostream>

using namespace std;

int mayor(int a, int b, int c) {
    int d;
    if (a > b)
        if (a > c)
            d = a;
        else
            d = c;
    else if (b > c)
        d = b;
    else
        d = c;
    return d;
}
string nmes(int a){
    string b="";
    if(a==1)
        b="Enero";
    else if(a==2)
        b="Febrero";
    else if(a==3)
        b="Marzo";
    else if(a==4)
        b="Abril";
    else if(a==5)
        b="Mayo";
    else if(a==6)
        b="Junio";
    else if(a==7)
        b="Julio";
    else if(a==8)
        b="Agosto";
    else if(a==9)
        b="Septiembre";
    else if(a==10)
        b="Octubre";
    else if(a==11)
        b="Noviembre";
    else if(a==12)
        b="Diciembre";
    else
        b="Mes fuera de rango";
    return b;

}
string cua(int a, string b){
    string aux="";
    for(int x=1;x<=a;x++) {
        for (int c = 1; c <= 10; c++)
            aux = aux + b;
        aux = aux + "\n";
    }
    return aux;
}
void cua2(int a, char b){
    for(int c=1;c<=a;c++)
    {
        for(int d=1; d<=10;d++)
            cout<<b;
        cout<<endl;
    }
}
bool esPrimo (int num){
    int cont=2;
    bool flat=true;
    while(cont <= num /2 && flat==true){
        if(num % cont == 0)
            flat=false;
        cont++;
    }
    return flat;
}
void imprimeprimos(int a){
    int b=1; int c=1;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            cout<<" "<< c;
            b++;
        }
    }
}
int sumaprimo(int a){
    int b=1; int c=1; int d=0;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            d+=c;b++;
        }
    }
    return d;
}
string mes(int a, int c) {
    string b;
    if (a == 1) {
        b = "Enero tiene 31 dias";
    } else if (a == 2) {
        if (c == 1) {
            b = "Febrero tiene 29 dias";
        } else {
            b = "Febrero tiene 28 dias";
        }
    } else if (a == 3) {
        b = "Marzo tiene 31 dias";
    } else if (a == 4) {
        b = "Abril tiene 30 dias";
    } else if (a == 5) {
        b = "Mayo tiene 31 dias";
    } else if (a == 6) {
        b = "Junio tiene 30 dias";
    } else if (a == 7) {
        b = "Julio tiene 31 dias";
    } else if (a == 8) {
        b = "Agosto tiene 31 dias";
    } else if (a == 9) {
        b = "Septiembre tiene 30 dias";
    } else if (a == 10) {
        b = "Octubre tiene 31 dias";
    } else if (a == 11) {
        b = "Noviembre tiene 30 dias";
    } else if (a == 12) {
        b = "Diciembre tiene 31 dias";
    }
    return b;
}

int main() {
    int a, b;
    cout << endl << "el mayor de 20, 10, 8 es: " << mayor(20, 10, 8);
    cout << endl << "el mayor de 20, 30, 21 es: " << mayor(20, 30, 21);
    cout << endl << "el mayor de 20, 30, 210 es: " << mayor(20,30,210);
    cout << endl << "el mes 5 corresponde a " << nmes(5);
    cout << endl << "el mes 1 corresponde a " << nmes(1);
    cout << endl << "el mes 12 corresponde a " << nmes(12);
    cout << endl << "el mes 15 corresponde a " << nmes(15);
    cout<<endl;
    cout<<cua(5,"+")<<endl;
    cua2(5,'c');
    cout<<endl<<"ingrese la cantidad de numeros primos que desea imprimir"<<endl;
    cin>>a;
    imprimeprimos(a);
    cout<<endl<<"ingrese la cantidad de numeros primos que desea sumar"<<endl;
    cin>>a;
    cout<<endl<<"la suma es: "<<sumaprimo(a)<<endl;
    cout << endl << "Ingrese el mes en numero entero" << endl;
    cin >> a;
    cout << "Es anio bisiesto? escriba 1 para si, escriba 2 para no" << endl;
    cin >> b;
    cout << mes(a, b);
}

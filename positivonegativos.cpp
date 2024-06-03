//programa principal donde usuario meta dos numeros y debe de decir si es positivo o negativo, par o impar
#include <iostream>
using namespace std;
//funciones q digan si es par o impar y si es negativo o positivo
string parimpar(int y){
    
    int res=0;

    res = y%2;

        if(res==0){
        return "Es Par";
        }
        
        else{
        return "Es Impar";
        }
    
}

string positivo(int x){
    
    if(x<0){
        return "Es negativo";
    }
    else{
        return "Es positivo";
    }

}

int main(){
    int a,b;

    cout << "Ingrese un numero entero a=";
    cin >> a;

    cout << "Ingrese un numero entero b=";
    cin >> b;

    cout << "Su numero " << a << " es: " << parimpar(a) << " y " << positivo(a) <<endl;
    cout << "Su numero " << b << " es: " << parimpar(b) << " y " << positivo(b) <<endl;



}
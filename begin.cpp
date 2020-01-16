#include <iostream>
using namespace std;

int main (){
    float celcius, fahrenheit;
    int i,batas;
    string keluaran;
     
    cout<<"Celcius = ";
    cin>>celcius;
    fahrenheit = ((9*celcius/5)+32);
    cout<<"Fahrenheit = "<<fahrenheit;

    int fahrenheitint = (int)fahrenheit;
    
    if (fahrenheitint % 2 == 0){
        keluaran="Bilangan Genap";
    } else {
        keluaran="Bilangan Ganjil";
    }

    cout<<"Masukkan batas: ";
    cin>>batas;
    for ( i = 0; i < batas; i++){
        cout<<keluaran<<"\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
	int nota;
	
	cout<< "Por favor ingrese la nota: "; cin >> nota;
	
	if(nota >0 && nota <100){
		if(nota >= 90){
			cout<<"Calificacion A = Excelente " << endl;
		}else if(nota >=80 && nota < 90){
		    cout<<"Calificacion B = Muy bueno " << endl;
        }else if(nota >=70 && nota < 80){
		    cout<<"Calificacion C = Bueno " << endl;
	    }else if(nota >=60 && nota < 70){
		    cout<<"Calificacion D = Debe mejorar" << endl; 
	    }else if(nota >=0 && nota < 60){
	    	cout<<"Calificacion F = Deficiente" << endl;
		}
	}else{
		cout<<"Nota no entra en el rango {0-100}";
	}
	return 0;
}

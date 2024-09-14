#include <iostream>

using namespace std;

enum TipoEmpleado { JUNIOR, SENIOR, MANAGER };

double CalcularSalarioSemanal (TipoEmpleado tipo, double HrsTrabajadas){
	double TarifaHoras;
	double HrsExtra = 0;
	double SalarioBase;
	
	switch (tipo) {
		case JUNIOR:
		TarifaHoras=10.0;
		break;
		case SENIOR:
		TarifaHoras=20.0;
		break;
		case MANAGER:
		TarifaHoras = 30.0;
		break;
	}

if (HrsTrabajadas > 40 ){
	HrsExtra = HrsTrabajadas - 40;
	HrsTrabajadas = 40;
}

SalarioBase = HrsTrabajadas * TarifaHoras;
double SalarioHrsExtra = HrsExtra * TarifaHoras * 1.5;

return SalarioBase + SalarioHrsExtra;
}

int main (){
	TipoEmpleado empleado = JUNIOR;
	double HrsTrabajadas = 45; 
	
	double salario = CalcularSalarioSemanal ( empleado, HrsTrabajadas );
	cout << "El salario semanal de un empleado es : Q  " << salario << endl;
	return 0;
}

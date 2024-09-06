#include <iostream>

void tribonacci(int n) {
int resultado[n];
resultado[1] = 1;
resultado[2] = 2;
resultado[3] = 3;

for (int i = 3; i < n; i++) {
resultado[i] = resultado[i - 1] + resultado[i - 2] + resultado[i - 3];
}

std::cout << "Secuencia Tribonacci: ";
for (int i =1 ; i < n; i++) {
std::cout << resultado[i] << " ";
}
}

int main() {
int numTerminos;

std::cout << "Ingrese el numero de terminos que desea calcular: ";
std::cin >> numTerminos;

tribonacci(numTerminos);

return 0;
}

#include <iostream>
#include <string>


int main()
{
 int num1, num2, num3;
 
std::cout << "Ingrese un numero: ";
std::cin >> num1;
std::cout << "Ingrese otro numero: ";
std::cin >> num2;
num3= num1>num2 ? num1:num2;
std::cout << "Los numeros son: " << num1 << " y " << num2 << std::endl;
std::cout << "El numero mayor es: " << num3 << std::endl;

}

#include <iostream>
#include <string>

int main()
{ 
  float num1, num2, num3, num4;
  std::cout << "Ingrese 3 numeros con decimales: \n";
  std::cin >> num1 >> num2 >> num3;
  num4= num1>num2 ? num1:num2;
  num4= num4>num3 ? num4:num3;
  std::cout << "El numero mayor es: " << num4 << std::endl;
  
}

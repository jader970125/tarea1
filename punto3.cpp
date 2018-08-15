#include <iostream>
#include <string>

int main()
{ 
 std::string impar, par, num1;
 impar= "impar";
 par= "par";
 int num;

 std::cout << "Ingrese un numero: ";
 std::cin >> num;  
 num=num%2;
 num1 = num!=0 ? impar:par;
 std::cout << "El numero que ingreso es " << num1 << std::endl;

}

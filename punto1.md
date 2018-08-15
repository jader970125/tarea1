
#include <iostream>
#include <string>

int main()
{ 
 float num1=5.26, x=5.26;
 int num2=8, y=x, z=8; 
 float w=z; // cambio de tipo implicito
 

 x=int(num1); // cambio explicito
 y=float(num2);  // cambio explicito
 std::cout << "El numero flotante es 5.26 y se pasa a entero \n y el numero entero es 8 y se pasa a flotante " <<std::endl;
 std::cout << "El siguiente numero es el numero float a int: " << x  << "\nY este es el entero a flotante: " << z << std::endl;

}

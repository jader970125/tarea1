#include <iostream>
#include <string>

int main()
{ 
 int num, uni, dec, cen, unimil, decemil;

 std::cout << "Ingrese un numero de 5 digitos: ";
 std::cin >> num;  
 decemil=(num%100000)/10000;
 unimil=(num%10000)/1000;
 cen=(num%1000)/100;
 dec=(num%100)/10;
 uni=num%10;
 std::cout << "El numero que ingreso es " << decemil << " " << unimil << " " << cen << " " << dec << " " << uni << std::endl;

}

#include <iostream>
#include <string>

int main()
{ 
  std::string word1, word2, word3, word4, word5, word6;
  std::cout << "Ingrese 3 palabras: \n";
  std::cin >> word1 >> word2 >> word3;
  word4 = word1<=word2 ? word1:word2;
  word4 = word4<=word3 ? word4:word3;
  word6 = word1>=word2 ? word1:word2;
  word6 = word6>=word3 ? word6:word3;
  word5 = word1!=word4 && word1!=word6 ? word1:word5;
  word5 = word2!=word4 && word2!=word6 ? word2:word5;
  word5 = word3!=word4 && word3!=word6 ? word3:word5;
  
  
  std::cout << "\nEstas son las palabras en orden alfabetico: \n";
  std::cout << word4 << " " << word5 << " " << word6;
  
  
}

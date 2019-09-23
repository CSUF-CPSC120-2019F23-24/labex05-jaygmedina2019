// Random Rectangle

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

int main()
{
  /*Planted a seed so that everytime the code is executed it will randomly
  generate a number everytime that the program is executed. */
  unsigned seed = time(0);
  srand(seed);
  std::string numbersign;
  int maximum = 40; //set the maximum value which is the length of the rectangle
  int number;

  number = rand() % maximum + 1;

  numbersign.assign(number, '#'); //Assigning the the random number for the string

  std::cout << numbersign << std::endl;
  std::cout << numbersign << std::endl;
  std::cout << numbersign << std::endl;

  return 0;

}

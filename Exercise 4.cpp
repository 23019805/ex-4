#include <iostream>
using namespace std;
int
main ()
{
  int choice, num1, num2;
  bool Options = false, Options1 = false;
  char cont;
  do
	{
	  cout << "=================\n" "menu\n" "=================";
	  do
		{
		  cout <<
			"\n1.Add \n2.Substract \n3.Multiply \n4.Divide \n5.Modulus \nEnter your choice(1-5) \n=================\n";
		  std::cin >> choice;
		  if (choice == 1 || choice == 2 || choice == 3 || choice == 4
			  || choice == 5) 
			{
			  Options = true;
			}
		}
	  while (Options == false);
	  cout << "\nEnter integer number 1:";
	  cin >> num1;
	  cout << "\nEnter integer number 2:";
	  cin >> num2;
	  if (choice == 1)
		{

		  cout << "\nResults:" << num1 + num2 << endl;
		}
	  if (choice == 2)
		{

		  cout << "\nResults:" << num1 - num2 << endl;
		}
	  if (choice == 3)
		{
		  cout << "\nResults:" << num1 * num2 << endl;
		}
	  if (choice == 4)
		{
		  if (num2 == 0)
			{
			  cout << "The second integer is zero, divide by zero" << endl;
			}
		  else
			{
			  cout << "Result: " << num1 / num2 << endl;
			}
		}
	  if (choice == 5)
		{
		  cout << "\nResults:" << num1%num2 << endl;
		}

	  cout << "\nPress y or Y to continue:";
	  cin >> cont;
	}
  while (cont == 'Y' || cont == 'y');
  cout << "\n=================";
  return 0;
}
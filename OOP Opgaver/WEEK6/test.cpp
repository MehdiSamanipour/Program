#include <iostream>
#include <string>
using namespace std; 

int calculateSumUpToN(int n);

void printEvenNumbers(int x);

int bogstav(char c, std::string s);



int main ()
{

	//opgave 1
	/*int num = 0;
	int sum = 0;
	std::cout << "enter a integer number " << std::endl;
	std::cin >> num;
	for(size_t i=0;i<=num;i++)
	{
		 sum += i ;
	}
	std::cout << "sum is " << sum;*/

	//opgace 2
	/*int x = 0;
	std::cout << "enter a positive number " << std::endl;
	std::cin >> x;
	for(size_t i=1;i<=x;i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i ;
		}
		else
		{
			std::cout << " ";
		}
	}*/

	//opgave 3 
	//int n;
	//std::cout << "Enter a positive integer: ";
	//std::cin >> n;
	//int sum = calculateSumUpToN(n);
	//std::cout << "The sum of all numbers up to " << n << " is: " << sum << std::endl;
	//return 0;


	//opgave 3
//	int x = 0;
//	std::cout << "Enter a positive number: ";
//	std::cin >> x;
//	printEvenNumbers(x);
//	return 0;
//}

 


	//
	//	int n, i, j;
	//	bool is_prime;

	//	// Prompt the user to enter a value
	//	std::cout << "Indtast en værdi: ";

	//	// Read in the user's value
	//	std::cin >> n;
	//if (n>=2)
	//{
	//	// 2 is always a prime number, so we output it first
	//	std::cout << "Primtalene mellem 2 og " << n << " er: 2 ";

	//	// We check all odd numbers from 3 to n to see if they are prime
	//	for (i = 3; i <= n; i += 2) {
	//		is_prime = true;

	//		// We check if i is divisible by any previous prime number
	//		for (j = 3; j <= sqrt(i); j += 2) {
	//			if (i % j == 0) {
	//				is_prime = false;
	//				break;
	//			}
	//		}

	//		// If i is a prime number, we output it
	//		if (is_prime) {
	//			std::cout << i << " ";
	//		}
	//	}

	//	
	//}
	//else


	//	std::cout << "cannot find any prime number frist prime number is 2 " << std::endl;


	//opgave 5
 
	//	int n=0, fib1 = 0, fib2 = 1, fib3;
	//	std::cout << "Indtast et tal:  ";
	//	std::cin >> n;
	//	std::cout << 0 << " " << 1<<" " ; // første Fibonacci-tal
	//	while (fib2 <= n) {
	//		fib3 = fib1 + fib2;
	//		if (fib3 <= n) {
	//			std::cout << fib3 << " ";
	//		}
	//		fib1 = fib2;
	//		fib2 = fib3;
	//	}
	//	std::cout << n;
	//	return 0;
//opgave 7   

	//string linje;
	//cout << "Indtast en linje tekst: ";
	//getline(std::cin, linje);

	//int antalMellemrum = 0;
	//for (char c : linje) {
	//	if (c == ' ') {
	//		antalMellemrum++;
	//	}
	//}

	//cout << "Antallet af mellemrum: " << antalMellemrum << std::endl;

	// opgave 8  

	char c;
	string s;
	cout << "Indtast et tegn: ";
	cin >> c;
	cin.ignore(); // to ignore the newline character after reading 'c'
	cout << "Indtast en streng: ";
	getline(cin, s);
	int count = bogstav(c, s);
	cout << "Antallet af '" << c << "' i strengen er: " << count << std::endl;

	return 0;
}

	






/**
* Calculates the sum of all numbers up to and including the entered number.
* @param n The positive integer number up to which the sum needs to be calculated.
* @return The sum of all numbers up to and including `n`.
*/
//int calculateSumUpToN(int n) {
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//void printEvenNumbers(int x)
//{
//	for (size_t i = 1; i <= x; i++)
//	{
//		if (i % 2 == 0)
//		{
//			std::cout << i << " ";
//		}
//	}
//}

int bogstav(char c, std::string s) {
	if (s.length() == 0) {
		return 0;
	}
	else {
		if (s[0] == c) {
			return 1 + bogstav(c, s.substr(1));
		}
		else {
			return bogstav(c, s.substr(1));
		}
	}
}



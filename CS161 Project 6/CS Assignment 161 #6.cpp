// Program : CS161 HW #6
// Name    : Brandan Tyler Lasley
// Date    : 11/3/2013 21:15
// Description: Finds the nth prime number ( i think )
// Sources : Previous knowledge of other languages, some math websites, also asked someone whats an nth prime. 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
bool isPrime(int);

int main(){
    int primelimit = 0;
	cout << "Please enter the highest nth prmie (ex. 1000000): ";
	cin >> primelimit; 
	cout << endl;

	if (primelimit < 10) {
		cout << "Fatal Error: Value must be greater than 10" << endl;
		getchar();
		getchar();
		return 0x1;
	}
	
	
	cout << left << setw(22) <<  "n: " << setw(22) << "nth prime: " << endl;

	for (int i = 10; i <= primelimit;) {
		int primeCount = 0;
		int nthPrime;

		for (int x = 1; x++;) {

			if (isPrime(x)) {
				primeCount++;
				if (primeCount == i) {
				nthPrime = x;
				break; 
				}
			}

		}
		cout << left << setw(22) <<  i << setw(22) << nthPrime << endl;
		i *= 10;

	}
	cout << endl << endl << "Done! Press Enter to close." << endl;

	// Exit Footer
	getchar();
	getchar();
	return 0;
}


bool isPrime(int num)
{
	int x = 0; // counter 
	for(int i=1;i<=num;i++) { // loop
		if(num % i ==0) { // see how many times it has /'d into itself from 1 to x
			x++;
		}
	}
	if (x == 2) { // check if test has failed or passed.
		return true;
	} else {
		return false;
	}
}
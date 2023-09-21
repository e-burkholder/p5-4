#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int cardNum1, cardNum2, sumNum, digit, digit2, digit3, sum1 = 0, sum2 = 0;
	cout << "Please enter 8-digit number: ";
	cin >> cardNum1;
	cardNum2 = cardNum1;

	while (cardNum1 > 0) {
		digit = cardNum1 % 10;
		cardNum1 = cardNum1 / 100;
		sum1 = sum1 + digit;
	}

	while (cardNum2 > 0) {
		digit2 = cardNum2 % 100;
		digit2 = 2 * (digit2 / 10);
		cardNum2 = cardNum2 / 100;

		while (digit2 > 0){
			digit3 = digit2 % 10;
			sum2 = digit3 + sum2;
			digit2 =digit2 / 10;
		}

	}
	
	sumNum = (sum1 + sum2) % 10; //looking for remainder of addition for next part

	//Validity output code
	if (sumNum == 0) {
		cout << "Card is valid.";
	}
	
	else {
		cout << "Card is not valid.";
	}

	return 0;
}
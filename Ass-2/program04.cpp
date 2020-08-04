#include<iostream>
class Calculator {
	private:
		double result;
	public:
		double doCalc(double, double, char);
};

double Calculator::doCalc(double d1, double d2, char ch) {
	
	switch(ch) {
		case '+':
			result = d1 + d2;
			break;
		case '-':
			result = d1 - d2;
			break;
		case '*':
			result = d1 * d2;
			break;
		case '/':
			result = d2!=0? d1/d2 : 0;
			break;
		case '%':
			result = (int)d1 % (int)d2;
			break;
		default:
			result = 0.0;
	}
	
	return result;
}

int main() {
	double a1, a2;
	char op;
	Calculator calc;
	std::cout << "Enter the two numbers: ";
	std::cin >> a1 >> a2;
	std::cout << "Enter the operator (+ - * / %): ";
	std::cin >> op;
	std::cout << "Result => " << calc.doCalc(a1, a2, op) << std::endl;
	return 0;
}
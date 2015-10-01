#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char choice;

	cout << "Enter the a and b:" << endl;
	cin >> a;
	cin >> b;
	cout << "if you want a sum, enter the '+' " << endl;
	cout << "If you want a residual, enter the '-' " << endl;
	cout << "If you want a denom, enter the '/' or ':'" << endl;
	cout << "If you want a product, enter the '*'" << endl;
	while (true)
	{
		cin >> choice;
		if (choice == '+' || choice == '-' || choice == '/' || choice == '*' || choice == ':') break;
		cout << "Enter enother" << endl;
	}
	double result;
	switch (choice)
	{
	case '+':
		result = a + b;
		cout << "Your sum is:" << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "Your residual is:" << result << endl;
		break;
	case '*':
		result = a*b;
		cout << "Your product is:" << result << endl;
		break;
	case '/':
	case ':':
		result = a / b;
		while (true)
		{
			if (b > 0 || b < 0) break;
			cout << "Enter b>0 or b<0" << endl;
			cin >> b;
		}
		cout << "Your denom is:" << result << endl;
		break;
	}
	cout << a << choice << b << "=" << result << endl;
	system("pause");
	return 0;
}
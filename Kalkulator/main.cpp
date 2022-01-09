#include <iostream>

int add(int a, int b)
{
	int result = a + b;
	return result;
}
int remove(int a, int b)
{
	int result = a - b;
	return result;
}
int multiple(int a, int b)
{
	int result = a * b;
	return result;
}
int dividing(int a, int b)
{
	int result = a / b;
	return result;
}
int modulo(int a, int b)
{
	int result = a % b;
	return result;
}
int pow(int a, int b)
{
	int result = a;
	for (int id = 0; id < b - 1; ++id)
	{
		result = result * a;
	}
	return result;
}
int factorial(int a)
{
	int result = a;
	for (int id = 1; id < a; ++id)
	{
		result = result * id;
	}
	return result;
}
int fibonacci(int index_of_fibo)
{
	int a = 0;
	int b = 1;
	if (index_of_fibo == 1)
	{
		return a;
	}
	if (index_of_fibo == 2)
	{
		return b;
	}
	for (int id = 3; id <= index_of_fibo; ++id)
	{
		int t = a + b;
		a = b;
		b = t;
	}
	return b;
}
// int main()
//{
//	std::cout << "Hello world ";
//	int sum = add( 10, 50 );
//	std::cout << sum << " ";
//	int result = remove( 20, 10 );
//	std::cout << result;
//
//}
// int main()
//{
//	int a;
//	int b;
//	std::cin >> a;
//	std::cin >> b;
//	int sum = add( a, b );
//	std::cout << sum;
//}
// int main()
//{
//	int a;
//	int b;
//	std::cin >> a;
//	std::cin >> b;
//	int sum = remove( a, b );
//	std::cout << sum;
//}

// int main()
//{
//	int a;
//	int b;
//	std::cout << "podaj wartosc";
//	std::cin >> a;
//	std::cout << "podaj wartosc";
//	std::cin >> b;
//	std::cout << add( a, b );
//}
// int main()
//{
//	int a;
//	int b;
//	std::cout << "podaj wartosc:";
//	std::cin >> a;
//	std::cout << "podaj wartosc:";
//	std::cin >> b;
//	std::cout << multiple( a, b );
//}
// int main()
//{
//	int a;
//	int b;
//	std::cout << "podaj wartosc:";
//	std::cin >> a;
//	std::cout << "podaj wartosc:";
//	std::cin >> b;
//	std::cout << dividing( a, b );
//}
// int main()
//{
//	int a;
//	int b;
//	int c;
//	std::cout << "podaj wartosc:";
//	std::cin >> a;
//	std::cout << "podaj wartosc:";
//	std::cin >> b;
//	std::cout << "1. dodawanie\n2. odejmowanie\n3. mnozenie\n4. "
//				 "dzielenie\n5. reszta z dzielenia\npodaj
// wartosc:
//"; 	std::cin >> c; 	if( c == 1 )
//	{
//		int sum = add( a, b );
//		std::cout << sum << " ";
//	}
//	else if( c == 2 )
//	{
//		int sum = remove( a, b );
//		std::cout << sum;
//	}
//	else if( c == 3 )
//	{
//		std::cout << multiple( a, b );
//	}
//	else if( c == 4 )
//		std::cout << dividing( a, b );
//	}
//	else if( c == 5 )
//	{
//		std::cout << modulo( a, b );
//	}
//	else
//	{
//		std::cout << "pocaluj sie w nos";
//	}
//	system( "pause" );
//}
int main()
{
	int a;
	int b;
	int c = 1;

	do
	{
		std::cout << "0. Zamkniecie aplikacji\n1. dodawanie\n2. odejmowanie\n3. "
			"mnozenie\n4. "
			"dzielenie\n5. reszta z dzielenia\n6. potegowanie\n7. "
			"silnia\n8. ciag fibonacciego\n";
		std::cout << "podaj numer operacji matematycznej:";
		std::cin >> c;
		std::cout << "podaj wartosc:";
		std::cin >> a;
		if (c != 0 && c != 7 && c != 8)
		{
			std::cout << "podaj wartosc:";
			std::cin >> b;
		}

		int result;
		switch (c)
		{
		case 0:

			std::cout << "konczymy program ";
			break;
		case 1:

			result = add(a, b);
			std::cout << result << "\n";
			break;
		case 2:
			result = remove(a, b);
			std::cout << result << "\n";
			break;
		case 3:
			result = multiple(a, b);
			std::cout << result << "\n";
			break;
		case 4:
			result = dividing(a, b);
			std::cout << result << "\n";
			break;
		case 5:
			result = modulo(a, b);
			std::cout << result << "\n";
			break;
		case 6:
			result = pow(a, b);
			std::cout << result << "\n";
			break;
		case 7:
			result = factorial(a);
			std::cout << result << "/n";
			break;
		case 8:
			result = fibonacci(a);
			std::cout << result << "/n";
			break;
		default:
			std::cout << "pocaluj sie w nos";
			break;
		}
		system("pause");
		system("CLS");
	} while (c != 0);
}
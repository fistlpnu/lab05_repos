#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b)
{
	return a * a + a * b + b * b;
}

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;


	double g1_s = g(1, s); // 1 частина чисельника
	double g_t1 = g(t, 1); // 2 частина чисельника
	double chiselnik = g1_s + pow(1 + pow(g_t1, 2), 2); // Весь чисельник
	double g_s_t1 = g(s + t, 1); // 1 частина знаменника
	double znamennik = 1 + pow(g_s_t1, 3); // Весь знаменник

	double result = chiselnik / znamennik;
	
	cout << "Result: " << result << endl;
	

	return 0;
}

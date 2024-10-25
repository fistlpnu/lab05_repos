#include <iostream>
#include <cmath>

using namespace std;


double g(const double a, const double b)
{
    return a * a + a * b + b * b;
}

double calculateResult(double s, double t)
{
    double g1_s = g(1, s);
    double g_t1 = g(t, 1);
    double chiselnik = g1_s + pow(1 + pow(g_t1, 2), 2);
    double g_s_t1 = g(s + t, 1);
    double znamennik = 1 + pow(g_s_t1, 3);

    return chiselnik / znamennik;
}

int main()
{
    double s, t;
    cout << "s = "; std::cin >> s;
    cout << "t = "; std::cin >> t;
    double result = calculateResult(s, t);
    cout << "Result: " << result << std::endl;
    return 0;
}

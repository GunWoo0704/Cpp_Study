#include <iostream>

using namespace std;

float change(float);

int main()
{
	float a, b; // a : ¼·¾¾¿Âµµ, b : È­¾¾¿Âµµ

	cout << "¼·¾¾¿Âµµ¸¦ ÀÔ·Â : ";
	cin >> a;

	b = change(a);
	cout << "¼·¾¾" << a << "µµ´Â È­¾¾¿Âµµ·Î" << b << "µµ ÀÔ´Ï´Ù";

	return 0;
}

float change(float x)
{
	float c = 1.8 * x + 32.0;

	return c;
}
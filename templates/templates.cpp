#include "templates.h"

int main()
{
	Min(3, 8);
	Min(4.5f, 2.3f);

	Max(9, 1);
	Max(23.0f, 20.9f);

	Clamp(3, 5, 4);
	return 0;

	char FORFOR = Min('a', 'Z');
	char WHATWHAT = Max('b', 'D');
}
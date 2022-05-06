#include <iostream>
#include <stdlib.h>

#define PT(n) std::cout << n
#define NP 5		// numero de puntos

int main()
{
	char m = 'X';
	char b = ' ';
	int gap = 0;	// vacios entre series de puntos
	if (gap > NP / 2)	// limita los vacios a como mucho la mitad de puntos
		gap = NP / 2 ;
	for (int i = 0; i <= 2*NP; i++)
	{
		for (int j = 0; j <= 2*NP ; j++)
			if( abs(i-NP)+abs(j-NP) > NP+gap-1)
				PT(m);
			else
				PT(b);
		PT('\n');
	}
	PT('\n');

	std::cin.get();
	return 0;
}
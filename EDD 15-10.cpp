#include <iostream>

using namespace std;

int main ()
{
	int i = 1, suma=0;
	do {
		cout << "Numero : " << i << endl;
		suma = suma + i;
		i= i + 1;
		
	} while ( i <= 10);
	cout << "La suma total es:" << suma;
	return 0;
}
        
        	
       

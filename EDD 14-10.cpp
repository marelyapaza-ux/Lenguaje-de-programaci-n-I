#include <iostream>

using namespace std;

int main ()
{
	int i,j;
	for (i = 1; i <= 10; i++) {
		if (i == 10) {
            continue;
        }
        
        cout << " Tabla del " << i << endl;
        
        for ( j = 1; j<=10; j++) {
        	if (j == 10) {
        		break;
        	}
        	cout << i << " x " << j << " = " << i * j << endl;
        }
    }
			   
    return 0;
}
        
        	
        	   

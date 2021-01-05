#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero1,numero2,resultado,i;
	cout <<"Digite numero uno ";
	cin>> numero1;
	cout <<"Digite numero dos ";
	cin>> numero2;
	for(i=1;i<=2;i=i+1){
	resultado=numero1%numero2;
    }
	if (resultado==0)
	{cout <<"Numero 1 es divisor de numero2";
	}else {cout <<"Numero 1 no es divisor de numero2";
	}
	return 0;
}



//identificar nùmeros primos
//Barranco Diaz Carmen Viridiana 

#include <iostream>
using namespace std;

int main() {
	int N=0;
	int primo=0;
cout<< "Dame un numero entero" <<endl;
cin>> N;
for(int i=2 ; i<=(N/2); i++)
{
	if ((N%i)==0){
	primo=1;
	break;
	}
	}
if (primo==0)
  cout<<"tu nùmero es primo"<<endl;
else 
  cout<< "tunùmero no es primo" <<endl;

return 0;
}


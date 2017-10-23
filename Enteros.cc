//Programa que suma N numeros enteros 
//Barranco Diaz Carmen Viridiana 
//23-oct-2017

#include <iostream>
using namespace std;
int main() {
	int sum=0;
	int N=0;
	int count=1;
cout<< "Dame un nùmero entero"<<endl;
cin>> N;
for(int i=0; i<=N; i++){
	sum=sum+i;
}
cout<<"La suma de los N nùmeros naturales es:"<<
sum<<endl;

return 0;
}



#include <iostream>

using namespace std;

int main(){

	int suma=0;
	int average=0;
	int minor=100.000;
	int major=0;
	int N=20;

	int num[20];
	cout<<"Dime 20 numeros enteros desordenados : "<< endl;

	for(int i=0;i<=N-1;i++){
       cin>>num[i];

	   suma = suma+num[i];

	   if(minor>num[i]){
		   minor = num[i];
	   }

	   if(major<num[i]){
		   major = num[i];
	   }
	
	}

	average = suma/20;

	cout<<"La suma de los elementos del vector es : "<<suma<<endl;
	cout<<"El promedio de los elementos del vector es : "<<average<<endl;
	cout<<"El mmenor de los elementos del vector es : "<<minor<<endl;
	cout<<"El mayor de los elementos del vector es : "<<major<<endl;

	system ("PAUSE");
	return 0;
}

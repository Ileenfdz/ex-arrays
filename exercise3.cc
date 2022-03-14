#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char pal[40], copy[40];
	bool continuar;

	cout<<"Dime una palabra palindroma : ";
	cin>>pal;

	for(int i=(strlen(pal) -1);i>=0;i--){
		copy[strlen(pal)-i-1]=pal[i];
	}
	copy[strlen(pal)]='\0';

	if(strcmp(pal,copy)==0){
		cout<<"Es palindroma"<<endl;
		continuar=true;
	}
	else{
		cout<<"No es palindroma"<<endl;
		continuar=false;
	}

	system("PAUSE");
	return 0;
}
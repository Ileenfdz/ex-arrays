#include <iostream>

using namespace std;

int main(){
    char letters[5];
	
	cout<< "Dame 5 letras coorelativas : ";
	
	for(int i=0;i<sizeof(letters);i++){
         cin>>letters[i];
		letters[i] = letters[i] + 3;
	}

	for(int i=0;i<sizeof (letters);i++){
	cout<<letters[i]<< " " ;
	}

	cout<<endl;

	system ("PAUSE");
	return 0;
}
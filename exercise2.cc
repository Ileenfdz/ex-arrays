#include <iostream>

using namespace std;

void bubbleLessMajor(int list[],int N){

	cout<<"Los numeros de menor a mayor"<< endl;

	for(int i=0;i<=N-1;i++){
		for(int j=N-1;j>=i+1;j--){
			if(list[j-1]>list[j]){
				int var=list[j];
				list[j]=list[j-1];
				list[j-1]=var;}	 
		}
		
        cout<< list[i] <<",";
		
	}

	cout<< endl;

}
void bubbleMajorMinor(int list[],int N){

	cout<<"Los numeros de mayor a menor : "<< endl;

	for(int b=0;b<=N-1;b++){
		for(int j=N-1;j>=b+1;j--){
			if(list[j-1]<list[j]){
				int var=list[j];
				list[j]=list[j-1];
				list[j-1]=var;}	 
		}
		
        cout<< list[b] <<",";
		
	}

	cout<<endl;

}
int main(int){

	int N= 20;
	int list[20]={38,10,68,21,3,78,90,58,43,22,12,5,17,64,28,54,102,42,63,98};

	cout<<"Los numeros sin ordenar"<<endl;

	for(int i=0;i<=N-1;i++){

	    cout<<list[i]<< ",";
	}

	cout<<endl;

	bubbleLessMajor(list, N);
	bubbleMajorMinor(list, N);

	system ("PAUSE");
	return 0;

}
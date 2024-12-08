#include <iostream>
#include <vector>
#include <chrono>
#include "DyV.h"

using namespace std;

int main(){

	vector<int>a={2,6,3,7,8,9,1,4,5,0};
	cout << "Array Int Original: " << "(";
	for(int i=0;i<a.size();i++){
                cout<<a[i] << "," <<" ";    
        }
        cout << ")";
	cout<<endl;
	
	cout<< "Comenzando Quicksort...";
	cout<<endl;
	
	auto start = std::chrono::system_clock::now();
	Quicksort(a,0,9);
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = end - start;
	cout << "Tiempo: " << duration.count() << "s" << std::endl;
	
	cout << "Array Int Ordenado" << "(";
	for(int i=0;i<a.size();i++){
		cout<<a[i] << "," <<" ";
	}
	cout << ")";
	cout<<endl;
	
	cout << "Búsqueda del número 3 con Busqueda_Binaria)" << endl << "posición:";
	cout << Busqueda_binaria(3,a,0,9) << endl;
	cout<<endl;
	
	float c=0.2;
	vector<float>b={0.2,0.6,0.3,0.7,0.8,0.9,0.1,0.4,0.5,0.0};
        cout << "Array Float Original: " << "(";
	for(int i=0;i<b.size();i++){
                cout<<b[i] << "," <<" ";    
        }
        cout << ")";
	cout<<endl;
	
	cout<< "Comenzando Quicksort...";
	cout<<endl;
	
	start = std::chrono::system_clock::now();
	Quicksort(b,0,9);
	end = std::chrono::system_clock::now();
	duration = end - start;
	cout << "Tiempo: " << duration.count() << "s" << std::endl;
	
	
        cout << "Array Float Ordenado" << "(";
	for(int i=0;i<b.size();i++){
		cout<<b[i] << "," <<" ";
	}
	cout << ")";
	cout<<endl;
	
	cout << "Búsqueda del número 0.6 con Busqueda_Binaria)" << endl << "posición:";
	cout<<Busqueda_binaria(c,b,0,9)<<endl;
        cout<<endl;
return 0;
}

// {}   <>

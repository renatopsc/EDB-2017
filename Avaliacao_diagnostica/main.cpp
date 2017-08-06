#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>     /* strtof */

using namespace std;

struct Aluno{
	string numero;
	

};

int main(){
	string nomeCompleto;
	string temp;
	int i;
	int numEstudante = 0;
	ifstream arq("entrada.txt");
	Aluno estudante[40];
	if(arq.is_open()){
		while(getline(arq, nomeCompleto)){
			temp = "";
			for(i = 0; i < (int)nomeCompleto.size(); i++){
				if(nomeCompleto[i] != ','){
					temp = temp + nomeCompleto[i];
				}else{
					estudante[numEstudante].numero = temp; 
					numEstudante++;
					temp ="";
					//break;
				}
			}
	
		}
	}else{
		cout << "Arquivo invalido!" << endl;				
	}
	arq.close();

	cout << "Lendo Registros... " << endl;
	for(i = 0; i < 40; i++){
		cout << "Lendo numero " << i + 1 <<" = "<< estudante[i].numero << endl;
		
	}
	cout << "Convertendo..." << endl;
	/*Array para armazenar numeros*/
	float array[40];
	
	for(i = 0; i < 40; i++){
		array[i] = strtof((estudante[i].numero).c_str(),0);	
	}
	float media;
	for(i = 0; i < 40; i++){
		cout << "Numero " << i + 1 << " = " << array[i] << endl;
		media = media + array[i];
	}
	media = media / 40;
	cout << "Media das notas dos alunos: " << media << endl;
	return 0;
}

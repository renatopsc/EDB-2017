#include <iostream>

using std::cin;
using std::cout;
using std::endl;
	
int main(int argc, char* argv[]){
	string linha;
	string temp;
	int i;
	if(argc < 4)
	cout << "Entrda invalida!" << endl;
	ifstream arq("entrada.in");

	if(arq.is_open()){
		while(getline(arq, nomeCompleto)){
			temp = "";
			for(i = 0; i < (int)linha.size(); i++){
				if(linha[i] != ','){
					temp = temp + linha[i];
				}else{
					break;
				}
			}
				estudante[numEstudante].nome = temp;
				temp = "";
				for(i = i + 1; i < (int)linha.size(); i++){
					if(linha[i] == ';'){
					
					}else{
						temp = temp + linha[i];
					}
					
				}
				//estudante[numEstudante].nota = temp;
				//numEstudante++;
		}
	}else{
		cout << "Arquivo invalido!" << endl;				
	}
arq.close();




	return 0;
}

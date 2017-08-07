#include <iostream>
#include <cstring> /* Para uso da funcao strcmp() */
#include <string>
#include <fstream>
#include <cstdlib>     /* strtof */
using namespace std;
struct Aluno{
	string numero;
	

};

/** @brief Funcao principal */
int main(int argc, char const *argv[])
{
	string nomeCompleto;
	string temp;
	int i, j;
	int numEstudante = 0;
	ifstream arq("entrada.in");
	Aluno estudante[40];	

				

	if (argc > 1){
			for(j = 1; j < argc; j++){
			
				cout <<"argumento passado com sucesso" << endl;

				//targ = argv[j];
					//cout <<"Targ: "<< targ << endl;
					cout <<"Argv: "<< *argv[j] << endl;
					///ler arquivo

			}
	}
	
	

	cout << "Lendo Registros... " << endl;
	for(i = 0; i < 5; i++){
		cout << "Lendo numero " << i + 1 <<" = "<< estudante[i].numero << endl;
		
	}

////////////////////////////////////////


	//int numero;
	//string nome;
	ofstream outFile;
	
	outFile.open("saida.out", ios::out);
	if(! outFile){
		cout <<"Arquivo saida.txt nao pode ser aberto" << endl;
		abort();
	}

		//armazena dados em outFile
		for(i = 0; i < 5; i++){
			
			outFile << estudante[i].numero << " " << '\n';
		}
	outFile.close();
	return 0;
}

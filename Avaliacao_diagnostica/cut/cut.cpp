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


										
										if(arq.is_open()){
											while(getline(arq, nomeCompleto)){
												temp = "";
												for(i = 0; i < (int)nomeCompleto.size(); i++){
													if(nomeCompleto[i] != *argv[i]){
														temp = temp + nomeCompleto[i];
													}else{
														break;
													}
												}
													estudante[numEstudante].numero = temp;
													temp = "";
													for(i = i + 1; i < (int)nomeCompleto.size(); i++){
														if(nomeCompleto[i] == '\n'){
					
														}else{
															temp = temp + nomeCompleto[i];
														}
					
													}
													estudante[numEstudante].numero = temp;
													numEstudante++;
											}
										}else{
											cout << "Arquivo invalido!" << endl;				
										}
										arq.close();

	cout << "Lendo Registros... " << endl;
	for(i = 0; i < 40; i++){
		cout << "Lendo nome: " << estudante[i].numero << endl;
		//cout << "Lendo nota: " << estudante[i].nota << endl;
	}
	cout << "Convertendo..." << endl;
	/*Array para armazenar notas e calcular media*/
	float array[2];
	/* Convertendo para float */
	//float aNumero=strtof((estudante[0].nota).c_str(),0); // string to float
	//float bNumero=strtof((estudante[1].nota).c_str(),0);
	//cout << "A = " << aNumero << " e B = " << bNumero << endl;

	for(i = 0; i < 2; i++){
		array[i] = strtof((estudante[i].numero).c_str(),0);
	}
	float media;
	for(i = 0; i < 2; i++){
		cout << "nota " << i + 1 << " = " << array[i] << endl;
		media = media + array[i];
	}
					
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
/*
	cout <<"Entre com o numero e o nome do funcionario\n" << "Fim do arquivo CTRL_Z termina a entrada de dados\n\n";
	while(cin >> numero >> nome){
		outFile << numero << " " << nome << '\n';
		cout <<"? ";
	}
*/

		for(i = 0; i < 5; i++){
//			cout << "Lendo numero " << i + 1 <<" = "<< estudante[i].numero << endl;
			outFile << estudante[i].numero << " " << '\n';
		}
	outFile.close();
	return 0;
}

#pragma once
#include "tabela.h"
#include <stack>
#include <queue>
#include <vector>
#include "AssemblyFunctions.h"
#include <string>

using namespace std;

class Polonesa
{

private: 

public:

	Polonesa()
	{
	}

	~Polonesa()
	{
	}

	vector<string, allocator<string>> conversaoNotacao(vector<string, allocator<string>> *expressaoOriginal) {
		int tipoToken;
		vector<string, allocator<string>> pilhaAuxiliar;
		vector<string, allocator<string>> filaSaida;
		string tokenAtual;
		unsigned int posiAtual = 0;
		
		while (posiAtual < expressaoOriginal->size()) {
			tokenAtual = expressaoOriginal->at(posiAtual);
			posiAtual++;
			tipoToken = getTipoToken(tokenAtual);
			
			switch (tipoToken) {
			case _NUMERO:
				filaSaida.push_back(tokenAtual);
				break;
			case _OPERADOR: {
				string topoPilha;
				if (pilhaAuxiliar.empty() == true)pilhaAuxiliar.push_back(tokenAtual);
				else {
					while (pilhaAuxiliar.empty() == false) {
						topoPilha = pilhaAuxiliar.back();
						if (topoPilha.front() == '(')break;
						if (tokenAtual.front() == '^' && precedencia(tokenAtual, topoPilha) < 0) {
							filaSaida.push_back(topoPilha);
							pilhaAuxiliar.pop_back();
						}else if (precedencia(tokenAtual, topoPilha) <= 0) {
							filaSaida.push_back(topoPilha);
							pilhaAuxiliar.pop_back();
						}
						else break;
					}
					pilhaAuxiliar.push_back(tokenAtual);
				}
			}
				break;
			case _FUNCAO:
				pilhaAuxiliar.push_back(tokenAtual);
				pilhaAuxiliar.push_back("(");
				break;
			case _ABRIR_PARENTESES:
				pilhaAuxiliar.push_back(tokenAtual);
				break;
			case _FECHAR_PARENTESES: {
				string topoPilha;
				topoPilha = pilhaAuxiliar.back();
				while (topoPilha.front() != '(') {
					filaSaida.push_back(topoPilha);
					pilhaAuxiliar.pop_back();
					topoPilha = pilhaAuxiliar.back();
				}
				pilhaAuxiliar.pop_back();
				topoPilha = pilhaAuxiliar.back();
				if (getTipoToken(topoPilha) == _FUNCAO) {
					filaSaida.push_back(topoPilha);
					pilhaAuxiliar.pop_back();
				}
			}
				break;

			}
		}
		while (pilhaAuxiliar.empty() == false) {
			filaSaida.push_back(pilhaAuxiliar.back());
			pilhaAuxiliar.pop_back();
		}
		return filaSaida;

	}

	//menor que zero 'a' possui maior precedencia
	//igual a zero  'a' e 'b' possuem a mesma precedencia
	//maior que zero 'b' possui maior precedencia
	int precedencia(string a, string b) {
		int precedenciaA, precedenciaB;
		char operador;
		
		operador = a.front();
		if (operador == _ADD || operador == _SUB)precedenciaA = 1;
		else if (operador == _MUL || operador == _DIV)precedenciaA = 2;
		else if (operador == _XPOWY || operador == _POW2) precedenciaA = 3;
		else if (operador == _FAT)precedenciaA = 4;

		operador = b.front();
		if (operador == _ADD || operador == _SUB)precedenciaB = 1;
		else if (operador == _MUL || operador == _DIV)precedenciaB = 2;
		else if (operador == _XPOWY) precedenciaB = 3;
		else if (operador == _FAT)precedenciaB = 4;

		return precedenciaB - precedenciaA;
	}

	int getTipoToken(string tokenAtual) {
		char primeiroCharString = tokenAtual.at(0);

		if ( (primeiroCharString >= '0' && primeiroCharString <= '9')
			|| primeiroCharString == _PI )return _NUMERO;

		if (primeiroCharString == '(')return _ABRIR_PARENTESES;

		if (primeiroCharString == ')')return _FECHAR_PARENTESES;

		if ((primeiroCharString >= 'a' && primeiroCharString <= 'i'))return _OPERADOR;

		return _FUNCAO;
			//103404806-5

	}
	string calcularPolonesa(vector<string, allocator<string>> filaExp) {
		vector<string, allocator<string>> pilhaDeCalculo;
		string tokenAtual,operadorA,operadorB;
		AssemblyFunctions operacoes;
		int tipoToken;

		while (filaExp.empty() == false) {
			tokenAtual = filaExp.front();
			filaExp.erase(filaExp.begin());
			tipoToken = getTipoToken(tokenAtual);
			switch (tipoToken) {
			case _NUMERO:
				pilhaDeCalculo.push_back(tokenAtual);
				break;
			case _OPERADOR:
				switch (tokenAtual.front()) {
					
					if (tokenAtual.front() != _FAT && tokenAtual.front() != _POW2){
						operadorB = pilhaDeCalculo.back();
						pilhaDeCalculo.pop_back();
					}
					operadorA = pilhaDeCalculo.back();
					pilhaDeCalculo.pop_back();
					
					case _ADD:
						pilhaDeCalculo.push_back(to_string(operacoes.soma(stof(operadorA), stof(operadorB))));
						break;
					case _MUL:		
						pilhaDeCalculo.push_back(to_string(operacoes.multiplicacao(stof(operadorA), stof(operadorB))));
						break;
					case _SUB:
						pilhaDeCalculo.push_back(to_string(operacoes.subtracao(stof(operadorA), stof(operadorB))));
						break;
					case _DIV:
						pilhaDeCalculo.push_back(to_string(operacoes.divisao(stof(operadorA), stof(operadorB))));
						break;
					case _POW2:
						operadorB = "2";
					case _XPOWY:
						break;
					case _FAT:
						break;
						
				}
				break;
			case _FUNCAO:
				break;
			}
		}
		return pilhaDeCalculo.back();
		
	}

};


#pragma once
#include "tabela.h"
#include <stack>
#include <queue>
#include <vector>

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

	queue<string, allocator<string>> conversaoNotacao(vector<string, allocator<string>> *expressaoOriginal) {
		int tipoToken;
		stack<string, allocator<string>> pilhaAuxiliar;
		queue<string, allocator<string>> filaSaida;
		string tokenAtual;
		int posiAtual = 0;
		
		while (posiAtual < expressaoOriginal->size()) {
			tokenAtual = expressaoOriginal->at(posiAtual);
			posiAtual++;
			tipoToken = getTipoToken(tokenAtual);
			
			switch (tipoToken) {
			case _NUMERO:
				filaSaida.push(tokenAtual);
				break;
			case _OPERADOR: {
				string topoPilha;
				if (pilhaAuxiliar.empty() == true)pilhaAuxiliar.push(tokenAtual);
				else {
					while (pilhaAuxiliar.empty() == false) {
						topoPilha = pilhaAuxiliar.top();
						if (topoPilha.front() == '(')break;
						if (tokenAtual.front() == '^' && precedencia(tokenAtual, topoPilha) < 0) {
							filaSaida.push(topoPilha);
							pilhaAuxiliar.pop();
						}else if (precedencia(tokenAtual, topoPilha) <= 0) {
							filaSaida.push(topoPilha);
							pilhaAuxiliar.pop();
						}
						else break;
					}
					pilhaAuxiliar.push(tokenAtual);
				}
			}
				break;
			case _FUNCAO:
				pilhaAuxiliar.push(tokenAtual);
				pilhaAuxiliar.push("(");
				break;
			case _ABRIR_PARENTESES:
				pilhaAuxiliar.push(tokenAtual);
				break;
			case _FECHAR_PARENTESES: {
				string topoPilha;
				topoPilha = pilhaAuxiliar.top();
				while (topoPilha.front() != '(') {
					filaSaida.push(topoPilha);
					pilhaAuxiliar.pop();
					topoPilha = pilhaAuxiliar.top();
				}
				pilhaAuxiliar.pop();
				topoPilha = pilhaAuxiliar.top();
				if (getTipoToken(topoPilha) == _FUNCAO) {
					filaSaida.push(topoPilha);
					pilhaAuxiliar.pop();
				}
			}
				break;

			}
		}
		while (pilhaAuxiliar.empty() == false) {
			filaSaida.push(pilhaAuxiliar.top());
			pilhaAuxiliar.pop();
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
};


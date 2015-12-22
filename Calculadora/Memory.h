#pragma once
#include <vector>
#include <string>
#include <allocators>

using namespace std;

class Memory{
private: vector<string, allocator<string>> *expressao;

public:
	Memory() {
		expressao = new vector<string, allocator<string>>(0);
	}
	~Memory();
	
	
	bool inserirNovoNumero(char novoDig){
		string stringAtual;
		if (expressao->empty() == true)expressao->push_back("");
		
		stringAtual = expressao->back();
		if (stringAtual.length() == 1 && stringAtual.back() == '0') {
			expressao->back() = novoDig;
			return true;
		}
		else {
			expressao->back() += novoDig;
			return false;
		}
	}

	void novoOperador(char novoOperador) {
		expressao->push_back("");
		expressao->back() = novoOperador;
		expressao->push_back("");
	}

	int decimal() {
		if (expressao->empty() == true)expressao->push_back("");
		if (expressao->back().empty() == true) {
			expressao->back() = "0,";
			return 1;
		}
		if (expressao->back().find(',', 0) == -1) {
			expressao->back() += ",";
			return 0;
		}
		return 2;
		
	}

	int remover() {
		string stringAtual;
		char charAtual;

		if (expressao->empty() == true)return 0;

		stringAtual = expressao->back();
		
		if (stringAtual.empty() == true) {
			expressao->pop_back();
			stringAtual = expressao->back();
		}

		charAtual = stringAtual.back();
		expressao->back().pop_back();

		if (stringAtual.empty() == true)expressao->pop_back();

		if ((charAtual >= '0' && charAtual <= '9') || charAtual == ',')return 1;
		if (charAtual >= 'a' && charAtual <= 'h')return 1;
		if (charAtual >= 'i' && charAtual <= 'j')return 2;
		if (charAtual >= 'k' && charAtual <= 'm')return 3;
		if (charAtual >= 'n' && charAtual <= 'q')return 4;
		if (charAtual >= 'r' && charAtual <= 'r')return 5;
		if (charAtual >= 's' && charAtual <= 's')return 6;
		if (charAtual >= 't' && charAtual <= 'u')return 7;
		return 0;
	}

	void clearMemory() {
		expressao->resize(1);
		expressao->back() = "";
	}
};


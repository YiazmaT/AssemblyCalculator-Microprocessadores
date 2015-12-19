#pragma once
#include <vector>
#include <string>
#include <allocators>

class Memory{
private: std::vector<std::string, std::allocator<std::string>> expressao;
private: int posicao;
private: bool ultimoNumero;
private: bool esperandoNum;
public:
	Memory() {
		posicao = 0;
		esperandoNum = true;
		ultimoNumero = false;
	}
	~Memory();
	
	System::String^ inserirNovoNumero(char novo){
		
		//expressao.back() += novo;

	}

};


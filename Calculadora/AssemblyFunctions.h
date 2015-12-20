#pragma once
class AssemblyFunctions
{
public:

	AssemblyFunctions()
	{
	}

	~AssemblyFunctions()
	{
	}

	float soma(float a, float b) {
		__asm {
			finit
			fld a
			fld b
			addp sp(1),sp(0)
			fstp a
		}
		return a;
	}

	float subtracao(float a, float b) {
		__asm {
			finit
			fld a
			fld b
			subp sp(1), sp(0)
			fstp a
		}
		return a;
	}

	float divisao(float a, float b) {
		__asm {
			finit
			fld a
			fld b
			fdivp st(1), st(0)
			fstp a
		}
		return a;
	}

	float multiplicacao(float a, float b) {
		__asm {
			finit
			fld a
			fld b
			fmulp st(1), st(0)
			fstp a
		}
		return a;
	}

	float sin(float a) {
		__asm {
			finit
			fld a
			fsin st(0)
			fstp a
		}
		return a;
	}

	float cos(float a) {
		__asm {
			finit
			fld a
			fcos st(0)
			fstp a
		}
		return a;
	}

	float tg(float a) {
		__asm {
			finit
			fld a
			fsincos st(0)
			fdivp st(1), st(0)
			fstp a
		}
		return a;
	}

	float sqrt(float a) {
		__asm {
			finit
			fld a
			fsqrt
			fstp a
		}
		return a;
	}

	float xElevadoAoQuadrado(float a) {
		__asm {
			finit
			fld a
			fld a
			fmulp st(1), st(0)
			fstp a
		}
		return a;
	}

	int fatorial(int a) {
		__asm {
			mov ecx, a
			mov eax, 1
			@loop:
			mul ecx
			loop @loop
			mov a, eax
		}
		return a;
	}
};


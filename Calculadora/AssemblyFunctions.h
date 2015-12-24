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
			faddp st(1),st(0)
			fstp a
		}
		return a;
	}

	float subtracao(float a, float b) {
		__asm {
			finit
			fld a
			fld b
			fsubp st(1), st(0)
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
			fsin
			fstp a
		}
		return a;
	}

	float cos(float a) {
		__asm {
			finit
			fld a
			fcos
			fstp a
		}
		return a;
	}

	float tg(float a) {
		__asm {
			finit
			fld a
			fsincos
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
			a_loop:
			mul ecx
			loop a_loop
			mov a, eax
		}
		return a;
	}
};


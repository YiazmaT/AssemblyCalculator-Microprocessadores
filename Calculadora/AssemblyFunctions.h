#pragma once
#include<string.h>
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


	float RaizNdeX(float x, float n) {
		__asm {
			finit
				fld1
				fld n
				fdiv
				fstp n
		}

		x = xElevadoAy(x, n);
		return x;
	}

	float log(float x,float a) {
		__asm {
			finit
				fld1
				fld a
				fyl2x
				fld1
				fdiv st, st(1)
				fld1
				fld x
				fyl2x
				fmul
				fstp x
		}

		return x;
	}

	float xElevadoAy(float x, float y) {
		__asm {
			finit
				fld y
				fld1
				fld x
				fyl2x
				fmul
				fld st
				frndint
				fsub st(1), st
				fxch
				f2xm1
				fld1
				fadd
				fscale
				fstp x
		}
		return x;
}

	float fatorial(int x) {
		float result;
		__asm {
				finit
					fld1
					fldz
					mov ecx, x

					_loop :
					fld1
					faddp st(1), st(0)
					fmul st(1), st(0)

					dec ecx
					jnz _loop

					fstp x
					fstp result
			}
			return result;
	}

	float arctg(float x) {
		__asm {
			finit
				fld x
				fld1
				fpatan
				fst x
		}
		return x;
	}

	float arcsin(float x) {
		__asm {
			finit
				fld x
				fld x
				fmulp st(1), st(0)
				fld1
				fld st(1)
				fsubp st(1), st(0)
				fdivp st(1), st(0)

				fsqrt
				fld1
				fpatan

				fstp x
		}
		return x;
	}

	float arccos(float x) {
		int y;
		__asm {
			
			finit
				fld1
				fld x
				fld x
				fmulp st(1), st(0)
				fst y
				fsubp st(1), st(0)
				fld y
				fdivp st(1), st(0)
				fsqrt
				fld1
				fpatan

				fstp x
		}
		return x;
	}

	float converteGrauRadiano(float grau) {
		float constante = 180;
		__asm {
			fld grau
			fldpi
			fmulp st(1), st(0)
			fld constante
			fdivp st(1), st(0)
			fstp constante
		}
		return constante;
	}
};


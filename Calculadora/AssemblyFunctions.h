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


	float RaizNdeX(float x, float n) {
		float constante_1 = 1;
		__asm {
			finit
				fld constante_1
				fld n
				fdiv
				fstp n
		}

		x = xElevadoAy(x, n);
		return x;
	}

	float log(float x,float a) {
		float constante_1 = 1;
		__asm {
			finit
				fld constante_1
				fld a
				fyl2x
				fld constante_1
				fdiv st, st(1)
				fld constante_1
				fld x
				fyl2x
				fmul
				fst x
		}

		return x;
	}

	float xElevadoAy(float x, float y) {
		float constante_1 = 1;
		__asm {
			finit
				fld y
				fld constante_1
				fld x
				fyl2x
				fmul
				fld st(0)
				frndint
				fsub st(1), st
				fxch
				f2xm1
				fld constante_1
				fadd
				fscale
				fst x
		}
		return x;
	}

	int fatorial(int x) {
			__asm {
				finit
					fldz
					fld1
					mov ecx, x

					_loop :
					fld1
					faddp	st(1),st(0)
					fmul st(1), st(0)

					dec ax
					jnz _loop

					fstp x
					fstp x
			}
			return x;
	}

	float arctg(float x) {
		float const_1 = 1;
		__asm {
			finit
				fld x
				fld const_1
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

				fsqrt st(0)
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
				fsqrt st(0)
				fld1
				fpatan

				fstp x
		}
		return x;
	}

};


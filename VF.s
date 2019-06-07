.data
VB: .double 7.8
VM: .double 3.6
VN: .double 7.1
.text
.global vf1a
.type vf1a, "function"



vf1a:			LDR D0, VB
			LDR D1, VM
			LDR D2, VN
			FADD D2, D2, D0
			FNEG D1, D1
			FMUL D0, D2, D1
			RET

.data
VA: .int 7
VX: .double 7.1
.text
.global vf1b
.type vf1b, "function"


vf1b:			LDR D1, VX
			LDR W2, VA
			FSQRT D1, D1
			UCVTF D2,W2
			FADD D0, D1, D2
			RET


.text
.global vf2a
.type vf2a, "function"
.data
const: .float 3

vf2a:			FSUB S4, S0, S1
			FMUL S5, S4, S2
			FADD S4, S3, S0
			LDR S6,const
			FSUB S4, S4, S6
			FDIV S0, S5, S4
			RET

.text
.global vf2b
.type vf2b, "function"

.data
pi: .double 3.141592653

vf2b:			STP x29, x30, [sp, #-16]!
			LDR D1, pi
			FMUL D0, D0, D0
			FMUL D0, D0, D1
			LDP x29, x30, [sp], #16
			RET

.text
.global vf2c
.type vf2c, "function"

vf2c:			STP x29, x30, [sp, #-16]!
			FSUB D4, D0, D2
			FMUL D4, D4, D4
			FSUB D5, D1, D3
			FMUL D5, D5, D5
			FADD D6, D4, D5
			FSQRT D0, D6
			LDP x29, x30, [sp], #16
			RET


.text
.global vf3
.type vf3, "function"
.data
V1_5: .float 1.5
V12_5: .float 12.5
V7: .float 7
V0: .float 0
V0_1: .float 0.1

vf3:			STP x29, x30, [sp, #-16]!
			LDR S1, V1_5
			LDR S2, V12_5
			LDR S3, V7
			MOV X4, #101
			LDR S5, V0
			LDR S9, V0_1

ciclo:			CBZ X4, fim
			FMUL S6, S5, S5
			FMUL S6, S6, S5
			FMUL S6, S6, S1
			FMUL S7, S2, S5
			FSUB S8, S6, S7
			FADD S8, S8, S3
			STR S8, [X0]
			ADD X0, X0, #4
			FADD S5, S5, S9
			B ciclo

fim:			LDP x29, x30, [sp], #16



.text
.global vf4
.type vf4, "function"

vf4:				STP x29, x30, [sp, #-16]!
				MOV X3, #0
				MOV X9, #0
				MOV X10, #1
				MOV X8, XZR
				LDR D1, [X0]					//Percorrer os coeficientes
				UCVTF D8 ,X8					//Guardar o resultado nesta variavel
				UCVTF D10, X10
				FADD D8, D8, D1

ciclo2:				CBZ X1, fim2
				ADD X0, X0, #8
				LDR D1, [X0]
				ADD X3, X3, #1
				SUB X9, X3, #1
				FMUL D7, D0, D10

exp_cicle:			CBZ X9, add
				FMUL D7, D7, D0
				SUB X9, X9, #1
				B exp_cicle

add:				FMUL D6, D7, D1
				FADD D8, D8, D6
				SUB X1, X1, #1
				B ciclo2

fim2:				LDP x29, x30, [sp], #16
				FMOV D0, D8
				ret

.data
czero : .double 0
.text
.global vf5
.type vf5, "function"


vf5:				STP x29, x30, [sp, #-16]!
				LDR D0, czero

ciclo5:				CBZ w2, fim5
				LDR S1, [X0]
				LDR S2, [X1]
				ADD X0, X0, #4
				ADD X1, X1, #4
				FCVT D1, S1
				FCVT D2, S2
				FMUL D3, D1, D2
				FADD D0, D0, D3
				SUB w2, w2, #1
				B ciclo5

fim5:				LDP x29, x30, [sp], #16
				ret

.text
.global vf6
.type vf6, "function"


vf6:				STP x29, x30, [sp, #-16]!
				MOV X8, XZR

ciclo6:				CBZ w1, fim6
				LDR S4, [X0]
				ADD X0, X0, #4
				SUB w1, w1, #1
				FCMP S4, S0
				B.LT ciclo6
				FCMP S4, S1
				B.GT ciclo6
				ADD X8, X8, #1
				B ciclo6


fim6:				LDP x29, x30, [sp], #16
				MOV X0, X8
				RET























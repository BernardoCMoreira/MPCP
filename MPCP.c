/*
 ============================================================================
 Name        : MPCP.c
 Author      : Bernardo Costa Moreira
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern double vf1a () ;
extern double vf1b () ;

extern float vf2a(float a, float b, float c, float d);
extern double vf2b(double raio);
extern double vf2c(double x1, double y1, double x2, double y2);

//void vf3 (float *tab);

double vf4(double x, double *coefs, int n);

double vf5(float *X, float *Y, int n);

long int vf6(float *V, long int n, float a, float b);

double vf7(double x);

double vf8a(double x);
double vf8b(double x);

int main(void) {

	/*
	 * Exercicio 1)
	 * Ficha de virgula flutuante
	 * Testado.
	 */
	printf("VF1A: \t %f \n",vf1a());
	printf("VF1B: \t %f \n",vf1b());

	/*
	 * Exercicio 2)
	 * Virgula Flutuante
	 * Testado
	 */
	printf("VF2A: \t %f \n", vf2a(1.2, 2.2, 3.1, 1.9));
	printf("VF2B: \t %f \n", vf2b(2.5));
	printf("VF2C: \t %f \n", vf2c(1, 1, 2, 2));

	/*
	 * Exercicio 3)
	 * Virgula Flutuante
	 */

	/*
	 * Exercicio 4)
	 * Virgula Flutuante
	 * Testado
	 */
	double coefs[] ={1,2,3,4};
	printf("VF4: \t %f \n", vf4(2,coefs,4));

	/*
	 * Exercicio 5)
	 * Virgula Flutuante
	 * Testado
	 */
	float x[] = {2, 4, 6, 8};
	float y[] = {1, 3, 5, 7};
	printf("VF5: \t %f \n", vf5(x, y, 4));

	/*
	 * Exercicio6	)
	 * Virgula Flutuante
	 * Testado
	 */
	float v[] = {4,5,6,7,8};
	printf("VF6: \t %ld \n", vf6(v, 5, 5, 7 ));

	/*
	 * Exercicio 7)
	 * Testado
	 */

	printf("VF7: \t %f \n", vf7(-1));

	/*
	 * Exericio 8 a)
	 * Testado
	 */
	printf("VF8a: \t %f \n", vf8a(1));

	/*
	 * Exercicio 8 b)
	 *
	 */
	printf("VF8b: \t %f \n", vf8b(-1));

	return EXIT_SUCCESS;
}

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
	 */
	double coefs[] ={1,2,3,4};
	printf("VF4: \t %f \n", vf4(2,coefs,4));

	/*
	 * Exercicio 5)
	 * Virgula Flutuante
	 */
	float x[] = {2, 4, 6, 8};
	float y[] = {1, 3, 5, 7};
	printf("VF5: \t %f \n", vf5(x, y, 4));

	/*
	 * Exercicio6)
	 * Virgula Flutuante
	 */
	float v[] = {4,5,6,7,8};
	printf("VF6: \t %d \n", vf6(v, 5, 5, 7 ));

	return EXIT_SUCCESS;
}

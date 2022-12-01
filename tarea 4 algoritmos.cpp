
#include <stdio.h>
#include <stdlib.h>
int main()

{
	int op;
	int e;
	int o;
	int p;
	int mensualidades;
	int precio;
	int x;
	int enganche;
	int s;
	int r;
	int a;
	int m;
	int n;
	int l;
	int k;
	do
		{
	
	system("cls");
	system("color 3b");
	printf("\t\t__________________________________\n");
	printf("\t\t|Universidad Tecnologico Naucalpan|\n");
	printf("\t\t|     Sistemas Computaciones      |\n");
	printf("\t\t|Algoritmo y estructura de datos 1|\n");
	printf("\t\t|          cuarto programa        |\n");
	printf("\t\t|Elaborado: Cesar Bautista        |\n");
	printf("\t\t|_________________________________|\n");


	printf("\t\t  Programa de venta de autos \n");

	printf("\t\t__________________________________\n");
	printf("\t\t|          Autos disponibles      |\n");
	printf("\t\t|          Escoge una Opcion      |\n");
	printf("\t\t|            1.-Audi              |\n");
	printf("\t\t|            2.-Acura             |\n");
	printf("\t\t|            3.-Salir             |\n");
	printf("\t\t|_________________________________|\n");
	scanf("%i", &op);


	switch (op)
	{
	case 1:
		printf("\t\t****************************************************\n");
		printf("\t\t                     AUDI                           \n");
		printf("\t\t****************************************************\n");

		printf("\t\t__________________________________\n");
		printf("\t\t|       Venta del Auto            |\n");
		printf("\t\t|     Escoge una Opcion           |\n");
		printf("\t\t|     1.- Automatico              |\n");
		printf("\t\t|     2.- Estandar                |\n");
		printf("\t\t|_________________________________|\n");
		scanf("%i", &o);
		
		
		if (o== 1)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Automatico                \n");
			printf("\t\t****************************************************\n");

			printf("\t\t________________________________________\n");
			printf("\t\t|       Venta del Auto                  |\n");
			printf("\t\t|     Escoge una Opcion                 |\n");
			printf("\t\t|     1.- Rojo $365.000                 |\n");
			printf("\t\t|     2.- Blanco $350.000               |\n");
			printf("\t\t|     3.-Salir                          |\n");
			printf("\t\t|_______________________________________|\n");
			scanf("%i", &e);
		}

		if (e == 1)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Automatico Rojo            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto automatico                    |\n");
			printf("\t\t|     Color Rojo $330.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Automatico pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     1.- 12 mensualidades                 |\n");
			printf("\t\t|     2.- 24 mensualidades                 |\n");
			printf("\t\t|     3.- 36 mensualidades                 |\n");
			printf("\t\t|     4.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &p);
		}
	                                                        	if (p == 1)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Automatico                        \n");
					                                            printf("\t\t               color rojo: $365000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$365000                          \n");
				                                               	precio = 365000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 292000 / 12;
				                                                       	
			                                                       		 for (x=1; x<=12; x++)
			                                                       	{
																			   
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}
																   }				                                               
																   	if (p == 2)
				                                                       
				                                                       	{
																		
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Audi Automatico                        \n");
				                                               	printf("\t\t               color rojo: $365000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$365000                          \n");
    	                                                       	precio = 365000 * 0.2;			                                                       	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 292000 / 24;
				                                            	 for (x=1; x<=24; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }
			                                                       		   	if (p == 3)
				                                                       {
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Audi Automatico                        \n");
				                                               	printf("\t\t               color rojo: $365000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$365000                          \n");
    	                                                       	precio = 365000 * 0.2;			                                                       	
																printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 292000 / 36;
				                                            	 for (x=1; x<=36; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }									   																   
		if (e == 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Automatico blanco            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto automatico                    |\n");
			printf("\t\t|     Color Blanco $350.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Automatico pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     5.- 12 mensualidades                 |\n");
			printf("\t\t|     6.- 24 mensualidades                 |\n");
			printf("\t\t|     7.- 36 mensualidades                 |\n");
			printf("\t\t|     8.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &m);
		}				
					
	                                                        	if (m == 5)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Automatico                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}
	                                                        	if (m ==6)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Automatico                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 24;
			                                                       		 for (x=1; x<=24;x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}																   
	                                                        	if (m ==7)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Automatico                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 36;
			                                                       		 for (x=1; x<=36;x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}	
		if (o== 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Estandar                \n");
			printf("\t\t****************************************************\n");

			printf("\t\t________________________________________\n");
			printf("\t\t|       Venta del Auto                  |\n");
			printf("\t\t|     Escoge una Opcion                 |\n");
			printf("\t\t|     1.- Rojo $365.000                 |\n");
			printf("\t\t|     2.- Blanco $350.000               |\n");
			printf("\t\t|     3.-Salir                          |\n");
			printf("\t\t|_______________________________________|\n");
			scanf("%i", &n);
		}
	if (n == 1)////////////////////
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Estandar Rojo            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto Estandar                    |\n");
			printf("\t\t|     Color Rojo $365.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Estandar pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     1.- 12 mensualidades                 |\n");
			printf("\t\t|     2.- 24 mensualidades                 |\n");
			printf("\t\t|     3.- 36 mensualidades                 |\n");
			printf("\t\t|     4.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &s);
		}													   							   
		                                                        	if (s == 1)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color rojo: $365000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$365000                          \n");
				                                               	precio = 365000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 292000 / 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}
																   }				                                               
																   	if (s == 2)
				                                                       {
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Audi Estandar                        \n");
				                                               	printf("\t\t               color rojo: $365000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$365000                          \n");
    	                                                       	precio = 365000 * 0.2;			                                                      
															 	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 292000 / 24;
				                                            	 for (x=1; x<=24; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }
			                                                       		   	if (s== 3)
				                                                       {
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Audi Estandar                        \n");
				                                               	printf("\t\t               color rojo: $365000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$365000                          \n");
    	                                                       	precio = 365000 * 0.2;			                                                       
																printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 365000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 292000 / 36;
				                                            	 for (x=1; x<=36; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }															                                                
									if (n == 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Estandar blanco            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto Estandar                    |\n");
			printf("\t\t|     Color blanco $350.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Audi Estandar pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     4.- 12 mensualidades                 |\n");
			printf("\t\t|     5.- 24 mensualidades                 |\n");
			printf("\t\t|     6.- 36 mensualidades                 |\n");
			printf("\t\t|     7.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &l);								   
			  }	
			  								      	if (l == 4)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}
																   	if (l == 5)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}	   
																   	if (l == 6)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 280000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}
	                                         
																   
																   
	                                                       






////////////AQUI COMIENZA CON EL AUTO ACURA

case 2:
		printf("\t\t****************************************************\n");
		printf("\t\t                     ACURA                           \n");
		printf("\t\t****************************************************\n");

		printf("\t\t__________________________________\n");
		printf("\t\t|       Venta del Auto            |\n");
		printf("\t\t|     Escoge una Opcion           |\n");
		printf("\t\t|     1.- Automatico              |\n");
		printf("\t\t|     2.- Estandar                |\n");
		printf("\t\t|_________________________________|\n");
		scanf("%i", &k);
		
		
		if (k== 1)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Automatico                \n");
			printf("\t\t****************************************************\n");

			printf("\t\t________________________________________\n");
			printf("\t\t|       Venta del Auto                  |\n");
			printf("\t\t|     Escoge una Opcion                 |\n");
			printf("\t\t|     1.- Rojo $370.000                 |\n");
			printf("\t\t|     2.- Blanco $360.000               |\n");
			printf("\t\t|     3.-Salir                          |\n");
			printf("\t\t|_______________________________________|\n");
			scanf("%i", &e);
		}

		if (e == 1)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Automatico Rojo            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Acura              |\n");
			printf("\t\t|     Auto automatico                    |\n");
			printf("\t\t|     Color Rojo $370.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Automatico pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     1.- 12 mensualidades                 |\n");
			printf("\t\t|     2.- 24 mensualidades                 |\n");
			printf("\t\t|     3.- 36 mensualidades                 |\n");
			printf("\t\t|     4.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &p);
		}
	                                                        	if (p == 1)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura Automatico                        \n");
					                                            printf("\t\t               color rojo: $370000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$370000                          \n");
				                                               	precio = 370000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 296000 / 12;
				                                                       	
			                                                       		 for (x=1; x<=12; x++)
			                                                       	{
																			   
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}
																   }				                                               
																   	if (p == 2)
				                                                       
				                                                       	{
																		
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Acura Automatico                        \n");
				                                               	printf("\t\t               color rojo: $370000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$370000                          \n");
    	                                                       	precio = 370000 * 0.2;			                                                       	
																   printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 296000 / 24;
				                                            	 for (x=1; x<=24; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }
			                                                       		   	if (p == 3)
				                                                       {
				                                               	printf("\t\t****************************************************\n");
				                                               	printf("\t\t                     Venta                           \n");
			                                               		printf("\t\t                 Auto que compro                     \n");
				                                               	printf("\t\t                Acura Automatico                        \n");
				                                               	printf("\t\t               color rojo: $370000                         \n");
			                                                 	printf("\t\t         El costo del auto es ....:$370000                          \n");
    	                                                       	precio = 370000 * 0.2;			                                                       	
																printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                                enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");
		                                                       
		                                                       
				                                               	mensualidades = 296000 / 36;
				                                            	 for (x=1; x<=36; x++)
				                                                   	  {
				                                            	  printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			                                                       		  
			                                                       	}  }									   																   
		if (e == 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Automatico blanco            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto automatico                    |\n");
			printf("\t\t|     Color Blanco $360.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Automatico pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     5.- 12 mensualidades                 |\n");
			printf("\t\t|     6.- 24 mensualidades                 |\n");
			printf("\t\t|     7.- 36 mensualidades                 |\n");
			printf("\t\t|     8.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &m);
		}				
					
	                                                        	if (m == 5)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura Automatico                        \n");
					                                            printf("\t\t               color blanco:$360000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$360000                         \n");
				                                               	precio = 360000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 360000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}
	                                                        	if (m ==6)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura Automatico                        \n");
					                                            printf("\t\t               color blanco:$360000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$360000                         \n");
				                                               	precio = 360000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 360000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 24;
			                                                       		 for (x=1; x<=24;x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}																   
	                                                        	if (m ==7)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura Automatico                        \n");
					                                            printf("\t\t               color blanco:$36000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$360000                         \n");
				                                               	precio = 360000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 360000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 36;
			                                                       		 for (x=1; x<=36;x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}	
		if (k== 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Estandar                \n");
			printf("\t\t****************************************************\n");

			printf("\t\t________________________________________\n");
			printf("\t\t|       Venta del Auto                  |\n");
			printf("\t\t|     Escoge una Opcion                 |\n");
			printf("\t\t|     1.- Rojo $370.000                 |\n");
			printf("\t\t|     2.- Blanco $360.000               |\n");
			printf("\t\t|     3.-Salir                          |\n");
			printf("\t\t|_______________________________________|\n");
			scanf("%i", &n);
		}
	if (n == 1)////////////////////
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Estandar Rojo            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Acura              |\n");
			printf("\t\t|     Auto Estandar                    |\n");
			printf("\t\t|     Color Rojo $370.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Estandar pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     1.- 12 mensualidades                 |\n");
			printf("\t\t|     2.- 24 mensualidades                 |\n");
			printf("\t\t|     3.- 36 mensualidades                 |\n");
			printf("\t\t|     4.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &s);
		}													   							   
		                                                        	if (s == 1)/////////////////
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura estandar                        \n");
					                                            printf("\t\t               color rojo: $370000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$370000                          \n");
				                                               	precio = 370000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 296000 / 12;
				                                                       	
			                                                       		 for (x=1; x<=12; x++)
			                                                       	{
																			   
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}
																   }				                                               
																   	if (s == 2)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura estandar                        \n");
					                                            printf("\t\t               color rojo: $370000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$370000                          \n");
				                                               	precio = 370000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 296000 / 24;
				                                                       	
			                                                       		 for (x=1; x<=24; x++)
			                                                       	{
																			   
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}  }
			                                                       		   	if (s== 3)
	                                                       	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Acura estandar                        \n");
					                                            printf("\t\t               color rojo: $370000                         \n");
			                                               		printf("\t\t         El costo del auto es ....:$370000                          \n");
				                                               	precio = 370000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 370000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 296000 / 36;
				                                                       	
			                                                       		 for (x=1; x<=36; x++)
			                                                       	{
																			   
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
			  
			                                                       	}   }														                                                
									if (n == 2)
		{
			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Estandar blanco            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t_________________________________________\n");
			printf("\t\t|       Venta del Auto Audi              |\n");
			printf("\t\t|     Auto Estandar                    |\n");
			printf("\t\t|     Color blanco $360.000                |\n");
			printf("\t\t|________________________________________|\n");


			printf("\t\t****************************************************\n");
			printf("\t\t                     Acura Estandar pagos            \n");
			printf("\t\t****************************************************\n");

			printf("\t\t___________________________________________\n");
			printf("\t\t|     Escoge una Opcion                    |\n");
			printf("\t\t|     4.- 12 mensualidades                 |\n");
			printf("\t\t|     5.- 24 mensualidades                 |\n");
			printf("\t\t|     6.- 36 mensualidades                 |\n");
			printf("\t\t|     7.- salir                            |\n");
			printf("\t\t|__________________________________________|\n");
			scanf("%i", &l);								   
			  }	
			  								      	if (l == 4)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$360000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$360000                         \n");
				                                               	precio = 360000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 360000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 12;
			                                                       		 for (x=1; x<=12; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}
																   	if (l == 5)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 24;
			                                                       		 for (x=1; x<=24; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}	   
																   	if (l == 6)
	                                                      	{
		                                                     	printf("\t\t****************************************************\n");
		                                                       	printf("\t\t                     Venta                           \n");
		                                                       	printf("\t\t                 Auto que compro                     \n");
		                                                       	printf("\t\t                Audi Estandar                        \n");
					                                            printf("\t\t               color blanco:$350000             \n");
			                                               		printf("\t\t         El costo del auto es ....:$350000                         \n");
				                                               	precio = 350000 * 0.2;
				                                               	printf("\t\t         El enganche .....:  $%i                \n", precio);
				                                               	enganche = 350000 - precio;
				                                               	printf("\t\t           El restante a pagar....:$%i\n",enganche);
				                                               	printf("\t\t****************************************************\n");

				                                                       	mensualidades = 286000/ 36;
			                                                       		 for (x=1; x<=36; x++)
			                                                       		  {
				                                                printf ("\t\t mensualidades a pagar es de: %i \n",mensualidades,x);
																   }}



		break;
	
	}
		printf ("\t\t ___________________________________\n");
		printf ("\t\t|  Desea regresar al menu Si=1 No=2 |\n");
		printf ("\t\t|___________________________________|\n");
		scanf("%i",&r);
	} while (r == 1);




     
 
	return 0;
	
	
	}



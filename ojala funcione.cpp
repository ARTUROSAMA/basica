 //Crear un algoritmo que pida al usuario llenar un arreglo de diez posiciones con números enteros. Deberá entregar dicho arreglo como parámetro a una función, la cual debe ordenar 		
//los datos del arreglo colocando primero los múltiplos de dos, luego los múltiplos de tres y
//finalmente el resto de números. Mostrará dicho arreglo ordenado en pantalla imprimiéndolo
//desde el main(). // 

#include <stdio.h> 
#include <iostream> 
using namespace std; 

void ARREGLO(int []);

int main() 

	{ 
		int i,A[10];

			for(i=1;i<=10;i++) 
			{ 
				cout<<" ingrese diez numeros "<<i<<" :"; 
				cin>>A[i]; 
			} 
			ARREGLO(A);
			system("pause");
			return 0;
	}
				
				void ARREGLO(int A[10])	
				{
					int par[10],impar[10],c[10],IMPAR=0,PAR=0,h=0, i; 
					for(i=0;i<10;i++)
						{
							if(A[i]%2==0)
								{par[PAR]=A[i];PAR++;}
							else
							
							{
							if(A[i]%3==0)
								{impar[IMPAR]=A[i];IMPAR++;}
							else
							{c[h]=A[i];h++;}
							}
						
						
						}
						
						
							for (int i=0;i<PAR;i++)
								
								{
									A[i]=par[i];
								}
								
							for (int i=PAR;i<IMPAR;i++)
								
								{
									A[i]=impar[i-PAR];
								
								}
								
							for (int i=IMPAR;i<10;i++)
								
								{
									A[i]=c[i-IMPAR];
								
								}
								
							for (int i=0;i<10;i++)
								
								{
									cout<<A[i]<<endl;
								
								}
							
						
							
							
				}
							
							
							
							
							
							
							
							
							
			
			
			


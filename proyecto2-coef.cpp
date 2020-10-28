#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float xDoo[3];
float yDoo[3];
float xDL[3];
float yDL[3];

float aIt[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

float aDL[3][4] =
//arrayDooLittle
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

//MatrizTriangular
float mT[3][4] =
{
{ 0, 0, 0, 0}, // row 0
{ 0, 0, 0, 0}, // row 1
{ 0, 0, 0, 0} // row 2
};

float matrizL[3][3] =
{
{ 1, 0, 0}, // row 0
{ 1, 1, 0}, // row 1
{ 1, 1, 1} // row 2
};

float matrizU[3][3] =
{
{ 1, 1, 1}, // row 0
{ 0, 1, 1}, // row 1
{ 0, 0, 1} // row 2
};

void Presentacion();
void insertarValoresDoo();
void mostrarMatriz();
void matrizInfSup();
void mostrarMatrizL();
void mostrarMatrizU();
void factorizacionMatriz();
void valorexXandY();
void imprimirValores();
void MetodoBiseccion(float a, float b, int c1, int c2, int c3, int c4);
void MetodoSecante(float a, float b, int c1, int c2, int c3, int c4);
int main(int argc, char *argv[]) {
	
	int i,op,op2,op3, coef[3];
	float a,b;

	do{
	system("cls");
	printf("1. HOJA DE PRESENTANCION");
	printf("\n2. METODO DEL SISTEMA DE ECUACIONES LINEALES");
	printf("\n3. INSERCCION DE LA FUNCION POLINOMICA. METODOS DE RAICES");
	printf("\n4. METODO CERRADO BISECCION");
	printf("\n5. METODO ABIERTO SECANTE");
	printf("\n6. SALIR\n");
	printf("\nELEGIR OPCION (1-6): ");
	scanf("%i",&op);
		
		
		switch(op){
			case 1: 
			system("cls");
			Presentacion();
			printf("\n");
			system("pause");
			break;
			
		case 2: 
		system("cls");
		insertarValoresDoo();
		factorizacionMatriz();
		matrizInfSup();
		valorexXandY();
		printf("\n");
		system("pause");
		
		do{
			system("cls");
			printf("\tMETODO DOOLITLE\n");
			printf("\n1. MATRIZ PRINCIPAL");
			printf("\n2. MATRRIZ TRIANGULAR INFERIOR");
			printf("\n3. MATRIZ TRIANGULAR SUPERIOR");
			printf("\n4. RESULTADO DEL SISTEMA DE ECUACIONES ALGEBRAICO LINEAL");
			printf("\n5. REGESAR AL MENU PRINCIPAL\n");
			printf("\nELEGIR UNA OPCION: (1-5): ");
			scanf("%i",&op2);
			
			switch(op2){
				case 1:
					system("cls");
					printf("\tMATRIZ PRINCIPAL\n\n"); 
					mostrarMatriz();
					printf("\n");
					system("pause");break;
					
					case 2:
					system("cls");
					printf("\tMATRIZ TRIANGULAR SUPERIOR\n\n");	
					mostrarMatrizL();
					printf("\n");
					system("pause");break;
					
					case 3:
					system("cls");
					printf("\tMATRIZ TRIANGULAR INFERIOR\n\n");	
					mostrarMatrizU();
					printf("\n");
					system("pause");break;
					
					case 4: 
					system("cls");
					printf("\tRESULTADO DEL SISTEMA DE ECUACIONES ALGEBRAICO LINEAL");
					imprimirValores();
					system("pause");break;
			}
			
			
			
		}while(op2!=5);
		break;
		
		
		case 3:
			system("cls");
			printf("\tMETODO RAICES \n");
			printf("\n");
			printf("La funcion a utilizar es: _x^3 + _x^2 + _x + _");
			printf("\nIntroduzca los coeficientes para cada variable: ");
			for(i= 0; i<=3; i++){
				printf("\n\nCoeficiente %d: ",i+1);
				scanf("%d",&coef[i]);
			}
			printf("\nSu ecuacion queda asi: (%d)x^3 + (%d)x^2 + (%d)x + (%d)",coef[0],coef[1],coef[2],coef[3]);
			printf("\n");
			system("pause");
			break;
			
			case 4:
			system("cls");
			printf("\tMETODO CERRADO BISECCION \n");
			printf("\n");
			printf("Introduzca los valores iniciales para evaluar la funcion: ");
			printf("\nValor inicial en 'a': ");
			scanf("%f",&a);
			printf("\nValor inicial en 'b': ");
			scanf("%f",&b);
			MetodoBiseccion(a,b,coef[0],coef[1],coef[2],coef[3]);
			system("pause");
			break;	
			
			case 5:
			system("cls");
			printf("\tMETODO ABIERTO SECANTE \n");
			printf("\n");
			printf("Introduzca los valores iniciales para evaluar la funcion: ");
			printf("\nValor inicial en 'a': ");
			scanf("%f",&a);
			printf("\nValor inicial en 'b': ");
			scanf("%f",&b);
			MetodoSecante(a,b,coef[0],coef[1],coef[2],coef[3]);
			system("pause");
			break;	
	
		}
		
		
		
	}while(op!=6);
	
	
	
	
	

	
	
	return 0;
}
void Presentacion(){
	
		system("cls");
		printf("\n \tUNIVERIDAD TECNOLOGICA DE PANAMA");
		printf("\n  FACULTAD DE INGENIERIA DE SISTEMAS Y COMPUTACION");
		printf("\n LIC. EN INGENIERIA DE SISTEMAS Y COMPUTACION");
		printf("\n DEPARTAMENTO DE COMPUTACION Y SIMULACION DE SISTEMAS\n");
		printf("\n       METODOS NUMERICOS PARA INGENIEROS\n");
		printf("\n                PROYECTO N.2");
		printf("\n   SISTEMAS DE ECUACIONES ALGEBRAICAS LINEALES. \n     RAICES REALES DE FUNCIONES ALGEBRAICAS\n");
		printf("\n     FACILITADOR: ING. JACQUELINE S. DE CHING\n");
		printf("\n                INTEGRANTES: \n");
		printf("\n  \tALBERTO GONZALEZ 	8-934-1685");
		printf("\n  \tLEONARDO DIEPPA 	8-928-410");
		printf("\n              GRUPO 1IL123\n");
}



void insertarValoresDoo(){

	int i,j;
	float valor = 0;
    printf("\t------OBTENIENDO DATOS------\n\n");
    //system("pause");
    system("cls");
    printf("\t----RELLENANDO LA MATRIZ----");
    for ( i = 0; i <=2; i++)//lectura de matriz e inicializacion
    {
    	printf("\nFila [%i]:",i+1);
    	printf("\n");
    	
        for ( j = 0; j <=2; j++) {
        	printf("[x%i]: ",j+1);
            scanf("%f", &valor);
            aDL[i][j] = valor;
        
        }
        
        printf("\n[T.I][%i] = ",i+1);
        scanf("%f",&valor);
        aIt[i][3] = valor;
        
    }
}

void mostrarMatriz(){ //mostrar matriz principal
	
	int i;
	for(i=0;i<=2;i++){
		printf("\t|%i %i %i = %i|",(int)aDL[i][0],(int)aDL[i][1],(int)aDL[i][2],(int)aIt[i][3]);
		printf("\n");
	}
	
}
//Inicializa las matrices triangulares superior e inferior
void matrizInfSup(){
	int i,j;
	
	 //Matriz superior
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
           matrizU[i][j] = matrizU[i][j]*mT[i][j];
        }
    }

    //Matriz inferior
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
           matrizL[i][j] = matrizL[i][j]*mT[i][j];
        }

    }
        matrizL[0][0]=1;
        matrizL[1][1]=1;
        matrizL[2][2]=1;
}
//muestra la matriz triangular inferior
void mostrarMatrizL(){
	int i;
	
	for(i=0;i<=2;i++){
		printf("\t |%.2f %.2f %.2f|",matrizL[i][0],matrizL[i][1],matrizL[i][2]);
		printf("\n");
	}
	
	
}
//muestra la matriz triangular superior
void mostrarMatrizU(){
	int i;
	
	for(i=0;i<=2;i++){
		
			printf("\t |%.2f %.2f %.2f|",matrizU[i][0],matrizU[i][1],matrizU[i][2]);
		printf("\n");
		
	}
}
//factoriza la matriz
void factorizacionMatriz(){
	 //Primera fila
        mT[0][0]=aDL[0][0];
        mT[0][1]=aDL[0][1];
        mT[0][2]=aDL[0][2];


    //Segunda fila
        mT[1][0]=aDL[1][0]/aDL[0][0];
        mT[1][1]=aDL[1][1]-(mT[1][0]*aDL[0][1]);
        mT[1][2]=aDL[1][2]-(mT[1][0]*aDL[0][2]);

    //Segunda fila
        mT[2][0]=aDL[2][0]/aDL[0][0];
        mT[2][1]=(aDL[2][1]-mT[2][0]*mT[0][1])/mT[1][1];
        mT[2][2]=aDL[2][2]-(mT[2][0]*mT[0][2])-(mT[2][1]*mT[1][2]);
}

void valorexXandY(){
	
	yDL[0]=aIt[0][3]/matrizL[0][0];
    yDL[1]=aIt[1][3]+(-1*matrizL[1][0]*yDL[0])/matrizL[1][1];
    yDL[2]=aIt[2][3]+(-1*matrizL[2][0]*yDL[0])+(-1*matrizL[2][1]*yDL[1])/matrizL[2][2];

    xDL[2]=matrizU[2][2]/yDL[2];
    xDL[1]=(yDL[1]-(xDL[2]*matrizU[1][2]))/matrizU[1][1];
    xDL[0]=(yDL[0]-(xDL[1]*matrizU[0][1])-(matrizU[0][2]*xDL[2]))/matrizU[0][0];
}

void imprimirValores(){
	printf("\n");
	printf("\n");
	
	printf("y1 = %.2f\n", yDL[0]);
	printf("y2 = %.2f\n", yDL[1]);
	printf("y3 = %.2f\n", yDL[2]);
	
	printf("\n");
	
	printf("x1 = %.2f\n", xDL[0]);
	printf("x2 = %.2f\n", xDL[1]);
	printf("x3 = %.2f\n", xDL[2]);
	
	
}

void MetodoBiseccion(float a, float b, int c1, int c2, int c3, int c4){
	
	float xr,fa,fxr,faxr,erap,xa, raiz;
	int i;
	
	i=0;
	xa=0;
	erap=0.0000;
	
	printf ("___________________________________________________________________________________________________________________");
  	printf ("\n\n|  #Iter |     a      |    b     |   f(a)     |    Xr      |    f(Xr)     |    f(a)*f(Xr)     |    ERAP     |\n");
  	printf ("_________________________________________________________________________________________________________________\n");
	
	do{
		i++;
		xr = (a+b) / 2;

		if(i>=2){
			erap = fabs(((xr - xa) / xr) * 100);
		}
		//erap = fabs(erap);
		fa = (c1*pow(a,3)) + (c2*pow(a,2)) + (c3*a) + c4;
		fxr = (c1*pow(xr,3)) + (c2*pow(xr,2)) + (c3*xr) + c4;
		faxr = fa * fxr;
		printf(" %4d %13.4f %11.4f %11.4f %11.4f %15.4f %16.4f %16.4f", i, a, b, fa, xr, fxr, faxr, erap);
		printf("\n");
		xa = xr;
		
		if(faxr<0){
			b = xr;
		}
		else if(faxr>0){
			a= xr;
		}
		
		
	}while(erap > 0.0001 || (erap == 0.0000 && i==1));
	
	
	printf("\n");
	printf("\nLa raiz aproximada es: %.4f",xr);
	printf("\n");
}

void MetodoSecante(float a, float b, int c1, int c2, int c3, int c4){
	
	float xn,x0,x1,xa,erap,fx0,fx1;
	int i;
	
	x0 = a;
	x1 = b;
	xn=0;
	i=0;
	erap = 0.0000;
	
  	printf ("______________________________________________________________");
  	printf ("\n\n|  #Iter |    Xn     |    f(Xn)    |   f(Xn+1)   |    ERAP  |\n");
  	printf ("______________________________________________________________\n");

	do{
		i++;
		xa=x1;
		fx0 = (c1*pow(x0,3)) + (c2*pow(x0,2)) + (c3*x0) + c4;
		fx1 = (c1*pow(x1,3)) + (c2*pow(x1,2)) + (c3*x1) + c4;
		xn = x1-((fx1 * (x0-x1))/ (fx0-fx1));
		erap = fabs(((xn - xa) / xn));
		x0=x1;
		x1=xn;
		xa=xn;
		printf("|   %2d   | %8.4f  |   %8.4f  |  %8.4f   | %8.4f  | \n",i,xn,fx0,fx1,erap);
		printf("\n");		
	}while(erap > 0.0001);
	
	printf("\n");
	printf ("\nLa Raiz es %6.4f\n",xn);	
	printf("\n");
	
	
}

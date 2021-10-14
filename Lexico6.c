#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <ctype.h>
#define MAX 255

int tipoC(char letra){
	if(letra >= 48 && letra <= 57 ) /* Digitos*/
		return 2;
	if((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122) ) /* Letras */
		return 1;
	if(letra == 39)
		return 3;
	if(letra == '.')
		return 5;
	if(letra == ';')
		return 6;
	if(letra == ',')
		return 7;
	if(letra == '[')
		return 8;
	if(letra == ']')
		return 9;
	if(letra == '-')
		return 10;
	if(letra == '*')
		return 11;
	if(letra == '(')
		return 12;
	if(letra == ')')
		return 13;
	if(letra == ':')
		return 14;
	if(letra == '>')
		return 15;
	if(letra == '<')
		return 16;
	if(letra == '=')
		return 17;
	if(letra == '&')
		return 18;
	if(letra == '|')
		return 19;
	if(letra == '~')
		return 20;
	if(letra == '^')
		return 21;
	if(letra == '+')
		return 22;
	if(letra == 10)
		return 23;
	if(letra == '/')
		return 24;
	if(letra == 34)
		return 25;
	if((letra >= 33 && letra <= 47) || (letra >= 58 && letra <= 64) || (letra >= 91 && letra <= 96) || (letra >= 123 && letra <= 126) )
		return 4;
	return 26;
}

int main(){
    int matriz[46][28] = {
			{1,2,7,4,0,0,12,13,14,16,15,17,18,19,20,21,25,24,31,32,33,36,34,35,37,44,0},
			{2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
			{3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{4,5,5,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{5,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{7,8,7,8,8,9,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
			{8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{9,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{10,11,10,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11},
			{11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{12,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{13,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{14,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{15,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{16,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{17,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{18,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{19,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{20,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{21,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,23,22,22,22,22,22,22,22,22,22},
			{22,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{23,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{24,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{25,26,26,26,26,26,26,26,26,26,28,26,26,26,26,30,26,27,26,26,26,26,26,26,26,26,26},
			{26,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{27,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{28,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{29,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{31,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{33,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{34,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{35,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{36,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{37,43,43,43,43,43,43,43,43,43,43,40,43,43,43,43,43,43,43,43,43,43,43,43,38,43,43},
			{38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,39,38,38,38},
			{39,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{40,40,40,40,40,40,40,40,40,40,40,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
			{41,40,40,40,40,40,40,40,40,40,40,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
			{42,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{43,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,45,44},
			{45,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
		};
	char cadena[255] = "";
    int estado = 1;
	int estado2 = 1;
	int longitud =  strlen(cadena);	
	char token[MAX] = "";
	int contador = 0;
	int paro = 0;
	int c2 = 0;
	char bufferCadena[255] = "";
	/*Palabras reservadas*/
	char *palabrasReservadas[20] ={
		"algoritmo",
		"inicio",
		"fin",
		"leer",
		"escribir",
		"dimension",
		"si",
		"sino",
		"finsi",
		"segun",
		"hacer",
		"finsegun",
		"mientras",
		"finmientras",
		"repetir",
		"hastaque",
		"para",
		"conpaso",
		"finpara",
		"deotromodo"
	};

    /*Abrir archivo*/
    FILE * archivo = fopen("pseudocodigo2.txt","r");
	if(archivo == NULL){
		perror("Archivo No encontrado");
		return 1;
	}
    char caracter;
	int i = 0;
    /*Operacion de Archivo*/
    int numeroLinea = 1;
	int errorTotal = 0;
	int posicionLinea = 0;
	int block = 0  ;
	int numeroEspacios = 0;
    while(feof(archivo) == 0){
        estado2 = estado;
        caracter = fgetc(archivo);
        /*-1 es el final del archivo
        El 13 se ignora, el 10 no en la impresion
        */
            /*nueva linea Ignorar*/
                posicionLinea++;
                /*if(caracter != 32){
					
				}else{
					
				}*/
				estado = matriz[estado-1][tipoC(caracter)];	
				if(caracter == 32){
					++numeroEspacios;
				}
				//printf("%d ",caracter);
				if(caracter != 13 && caracter != 10){
					bufferCadena[i] = caracter;
					i++;
				}
                if(estado == -1 ){
					//printf("/%d/",estado2);
					estado = 1;
					i = 0;
					/*comprobar el estado anterior de -1 sea fin de archivos*/
					if(caracter != -1){				
						if(estado2 == 3 || estado2 == 8 || estado2 == 11 || estado2 == 22 || estado2 == 26 || estado2 == 43 ){
							fseek(archivo,-2,SEEK_CUR);
							int j = 0;
							int lon = strlen(bufferCadena);
							char cade[255] = "";
							char c = bufferCadena[lon-1];

							for(j = 0; j < lon - 2; j++ )
									bufferCadena[j] = bufferCadena[j];


							if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ){
								for(j = 0; j < lon - 1; j++ )
									cade[j] = bufferCadena[j];
							}else{
								for(j = 0; j < lon - 2; j++ )
									cade[j] = bufferCadena[j];
							}

							char cadeMinuscula[255] = "";
							if(estado2 == 3){
								for (int indice = 0; cade[indice] != '\0'; ++indice){
									cadeMinuscula[indice] = tolower(cade[indice]);
								}									
							}

							printf("%s",cade);
							/*Convertir a minusculas y Comparar Cadenas*/
							int bandera = 0;
							for(int k = 0; k < 20; k++){
								if(strcmp(cadeMinuscula, palabrasReservadas[k]) == 0){
									bandera = 1;
									printf(",%s",palabrasReservadas[k]);
									break;
								}
							}
							if(bandera != 1){
								switch(estado2){
									case 3: printf(",Identificador"); break;
									case 6: printf(",Caracter");break;
									case 8: printf(",Entero"); break;
									case 11: printf(",Real"); break;
									case 12: printf(",PuntoComa");break;
									case 13: printf(",Coma");break;
									case 14: printf(",CorcheteIzq");break;
									case 15: printf(",Resta");break;
									case 16: printf(",CorcheteDer");break;
									case 17: printf(",Multiplicacion");break;
									case 18: printf(",ParentesisIzq");break;
									case 19: printf(",ParentesisDer");break;
									case 20: printf(",DosPuntos");break;
									case 22: printf(",MayorQue");break;
									case 23: printf(",MayorIgualQue");break;
									case 24: printf(",IgualQue");break;
									case 26: printf(",MenorQue");break;
									case 27: printf(",MenorIgualQue");break;
									case 29: printf(",Asignacion");break;
									case 30: printf(",DistintoQue");break;
									case 31: printf(",Conjuncion");break;
									case 32: printf(",Disyuncion");break;
									case 33: printf(",Negacion");break;
									case 34: printf(",Suma");break;
									case 35: printf(",RC");break;
									case 36: printf(",Potenciacion");break;
									case 39: printf(",ComentarioLinea");break;
									case 42: printf(",ComentarioMultilinea");break;
									case 43: printf(",Division");break;
									case 45: printf(",Cadena");break;
								}
							}
							printf("\n");
						}
						else if(estado2 != 1){
							fseek(archivo,-1,SEEK_CUR);
							
							int j = 0;
							int lon = strlen(bufferCadena);
							char cade[255] = "";
							char cadeMinuscula[255] = "";

							for(j = 0; j < lon-1; j++ )
								cade[j] = bufferCadena[j];
							printf("%s",cade);

							switch(estado2){
								case 3: printf(",Identificador"); break;
								case 6: printf(",Caracter");break;
								case 8: printf(",Entero"); break;
								case 11: printf(",Real"); break;
								case 12: printf(",PuntoComa");break;
								case 13: printf(",Coma");break;
								case 14: printf(",CorcheteIzq");break;
								case 15: printf(",Resta");break;
								case 16: printf(",CorcheteDer");break;
								case 17: printf(",Multiplicacion");break;
								case 18: printf(",ParentesisIzq");break;
								case 19: printf(",ParentesisDer");break;
								case 20: printf(",DosPuntos");break;
								case 22: printf(",MayorQue");break;
								case 23: printf(",MayorIgualQue");break;
								case 24: printf(",IgualQue");break;
								case 26: printf(",MenorQue");break;
								case 27: printf(",MenorIgualQue");break;
								case 29: printf(",Asignacion");break;
								case 30: printf(",DistintoQue");break;
								case 31: printf(",Conjuncion");break;
								case 32: printf(",Disyuncion");break;
								case 33: printf(",Negacion");break;
								case 34: printf(",Suma");break;
								case 35: printf(",RC");break;
								case 36: printf(",Potenciacion");break;
								case 39: printf(",ComentarioLinea");break;
								case 42: printf(",ComentarioMultilinea");break;
								case 43: printf(",Division");break;
								case 45: printf(",Cadena");break;
							}
							printf("\n");
						}
						
					}else{
						/*Ultimo token*/
						if(estado2 == 3 || estado2 == 8 || estado2 == 11 || estado2 == 22 || estado2 == 26 || estado2 == 43 ){
							int j = 0;
							int lon = strlen(bufferCadena);
							char cade[255] = "";
							char c = bufferCadena[lon-1];		
							if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ){
								for(j = 0; j < lon - 1; j++ )
									cade[j] = bufferCadena[j];
							}else{
								for(j = 0; j < lon - 2; j++ )
									cade[j] = bufferCadena[j];
							}
							char cadeMinuscula[255] = "";
							if(estado2 == 3){
								for (int indice = 0; cade[indice] != '\0'; ++indice){
									cadeMinuscula[indice] = tolower(cade[indice]);
								}									
							}
							printf("%s",cade);
							int bandera = 0;
							for(int k = 0; k < 20; k++){
								if(strcmp(cadeMinuscula, palabrasReservadas[k]) == 0){
									bandera = 1;
									printf(",%s",palabrasReservadas[k]);
									break;
								}
							}
							if(bandera != 1){
								switch(estado2){
									case 3: printf(",Identificador"); break;
									case 6: printf(",Caracter");break;
									case 8: printf(",Entero"); break;
									case 11: printf(",Real"); break;
									case 12: printf(",PuntoComa");break;
									case 13: printf(",Coma");break;
									case 14: printf(",CorcheteIzq");break;
									case 15: printf(",Resta");break;
									case 16: printf(",CorcheteDer");break;
									case 17: printf(",Multiplicacion");break;
									case 18: printf(",ParentesisIzq");break;
									case 19: printf(",ParentesisDer");break;
									case 20: printf(",DosPuntos");break;
									case 22: printf(",MayorQue");break;
									case 23: printf(",MayorIgualQue");break;
									case 24: printf(",IgualQue");break;
									case 26: printf(",MenorQue");break;
									case 27: printf(",MenorIgualQue");break;
									case 29: printf(",Asignacion");break;
									case 30: printf(",DistintoQue");break;
									case 31: printf(",Conjuncion");break;
									case 32: printf(",Disyuncion");break;
									case 33: printf(",Negacion");break;
									case 34: printf(",Suma");break;
									case 35: printf(",RC");break;
									case 36: printf(",Potenciacion");break;
									case 39: printf(",ComentarioLinea");break;
									case 42: printf(",ComentarioMultilinea");break;
									case 43: printf(",Division");break;
									case 45: printf(",Cadena");break;
								}
							}
							printf("\n");
						}
						else if(estado2 != 1){
							int j = 0;
							int lon = strlen(bufferCadena);
							char cade[255] = "";
							char cadeMinuscula[255] = "";

							for(j = 0; j < lon-1; j++ )
								cade[j] = bufferCadena[j];
							printf("%s",cade);

							switch(estado2){
								case 3: printf(",Identificador"); break;
								case 6: printf(",Caracter");break;
								case 8: printf(",Entero"); break;
								case 11: printf(",Real"); break;
								case 12: printf(",PuntoComa");break;
								case 13: printf(",Coma");break;
								case 14: printf(",CorcheteIzq");break;
								case 15: printf(",Resta");break;
								case 16: printf(",CorcheteDer");break;
								case 17: printf(",Multiplicacion");break;
								case 18: printf(",ParentesisIzq");break;
								case 19: printf(",ParentesisDer");break;
								case 20: printf(",DosPuntos");break;
								case 22: printf(",MayorQue");break;
								case 23: printf(",MayorIgualQue");break;
								case 24: printf(",IgualQue");break;
								case 26: printf(",MenorQue");break;
								case 27: printf(",MenorIgualQue");break;
								case 29: printf(",Asignacion");break;
								case 30: printf(",DistintoQue");break;
								case 31: printf(",Conjuncion");break;
								case 32: printf(",Disyuncion");break;
								case 33: printf(",Negacion");break;
								case 34: printf(",Suma");break;
								case 35: printf(",RC");break;
								case 36: printf(",Potenciacion");break;
								case 39: printf(",ComentarioLinea");break;
								case 42: printf(",ComentarioMultilinea");break;
								case 43: printf(",Division");break;
								case 45: printf(",Cadena");break;
							}

							printf("\n");
						}
					}
					memset(bufferCadena, 0, 255);
					numeroEspacios = 0;
                }
                if(estado == 0){
					if (caracter != 32){
						printf("Error\n");
						errorTotal++;
					}
                    estado  = 1;
                    i = 0;
                   // printf("Error en linea %d\n",numeroLinea);
                }
            
    }
    fclose(archivo);
	if(errorTotal > 0)
		printf("Numero de Errores: %d", errorTotal);

    return 0;
}

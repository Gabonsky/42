/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatorre <jlatorre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:48:09 by jlatorre          #+#    #+#             */
/*   Updated: 2023/07/16 15:54:54 by jlatorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>

void resolverColumnas(int *numeros,int firstFourLocated);
void resolverFilas(int *numeros,int firstFourLocated);
void resolverSinCuatros(int *numeros);
int* rellenar(int fila[],int num1,int num2,int numInicial,int posicion);

int* rellenar(int fila[],int num1,int num2,int numInicial,int posicion){
    if(num1==4 && num2==1){
        static int opcion[4] = {1,2,3,4};
        if(opcion[posicion]==numInicial)
            return opcion;
        else{
            
            return NULL;
        }
    }else if(num1==3 && num2==2){
        static int opcion1[4] = {1,2,4,3};
        static int opcion2[4] = {1,3,4,2};
        static int opcion3[4] = {2,3,4,1};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else if(opcion3[posicion]==numInicial)
            return opcion3;
        else{
            
            return NULL;
        }
    }else if(num1==3 && num2==1){
        static int opcion1[4] = {1,3,2,4};
        static int opcion2[4] = {2,1,3,4};
        static int opcion3[4] = {2,3,1,4};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else if(opcion3[posicion]==numInicial)
            return opcion3;
        else{
            
            return NULL;
        }
    }else if(num1==2 && num2==3){
        static int opcion1[4] = {1,4,3,2};
        static int opcion2[4] = {2,4,3,1};
        static int opcion3[4] = {3,4,2,1};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else if(opcion3[posicion]==numInicial)
            return opcion3;
        else{
            
            return NULL;
        }
    }else if(num1==2 && num2==2){
        static int opcion1[4] = {1,4,2,3};
        static int opcion2[4] = {2,1,4,3};
        static int opcion3[4] = {2,4,1,3};
        static int opcion4[4] = {3,1,4,2};
        static int opcion5[4] = {3,2,4,1};
        static int opcion6[4] = {3,4,1,2};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else if(opcion3[posicion]==numInicial)
            return opcion3;
        else if(opcion4[posicion]==numInicial)
            return opcion4;
        else if(opcion5[posicion]==numInicial)
            return opcion5;
        else if(opcion6[posicion]==numInicial)
            return opcion6;
        else{
            
            return NULL;
        }
    }else if(num1==2 && num2==1){
        static int opcion1[4] = {3,1,2,4};
        static int opcion2[4] = {3,2,1,4};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else{
            
            return NULL;
        }
    }else if(num1==1 && num2==3){
        static int opcion1[4] = {4,1,3,2};
        static int opcion2[4] = {4,2,3,1};
        static int opcion3[4] = {4,3,1,2};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else if(opcion3[posicion]==numInicial)
            return opcion3;
        else{
            
            return NULL;
        }
    }else if(num1==1 && num2==2){
        static int opcion1[4] = {4,1,2,3};
        static int opcion2[4] = {4,2,1,3};
        if(opcion1[posicion]==numInicial)
            return opcion1;
        else if(opcion2[posicion]==numInicial)
            return opcion2;
        else{
            
            return NULL;
        }
    }else if(num1==1 && num2==4){
        static int opcion[4] = {4,3,2,1};
        if(opcion[posicion]==numInicial)
            return opcion;
        else{
            
            return NULL;
        }
    }else{
            
            return NULL;
        }
}

void resolverColumnas(int *numeros,int firstFourLocated){
    write(1,"columnas",8);
    int* columna1;
    int* columna2;
    int* columna3;
    int* columna4;
    int i =0;
    char columna10[4];
    char columna20[4];
    char columna30[4];
    char columna40[4];

    while(i<4){
        columna10[i]=columna1[i]-'0';
         columna20[i]=columna2[i]-'0';
          columna30[i]=columna3[i]-'0';
           columna40[i]=columna4[i]-'0';

    i++;
    }
    i=0;

    if (firstFourLocated>7 && firstFourLocated<12) {
        columna1 = rellenar(columna1, numeros[0], numeros[4], 1, firstFourLocated);
        columna2 = rellenar(columna2, numeros[1], numeros[5], 2, firstFourLocated);
        columna3 = rellenar(columna3, numeros[2], numeros[6], 3, firstFourLocated);
        columna4 = rellenar(columna4, numeros[3], numeros[7], 4, firstFourLocated);

        write(1, &columna10, 8);
        write(1, &columna20, 8);
        write(1, &columna30, 8);
        write(1, &columna40, 8);
    } else {
        columna1=rellenar(columna1,numeros[0],numeros[4],4,firstFourLocated-4);
        columna2=rellenar(columna2,numeros[1],numeros[5],3,firstFourLocated-4);
        columna3=rellenar(columna3,numeros[2],numeros[6],2,firstFourLocated-4);
        columna4=rellenar(columna4,numeros[3],numeros[7],1,firstFourLocated-4);
        write(1, &columna10, 8);
        write(1, &columna20, 8);
        write(1, &columna30, 8);
        write(1, &columna40, 8);
    }
}

void resolverFilas(int *numeros,int firstFourLocated){
    
    int* fila1;
    int* fila2;
    int* fila3;
    int* fila4;
    int i=0;
    char fila10[4];
    char fila20[4];
    char fila30[4];
    char fila40[4];
        while(i<4){
        fila10[i]=fila10[i]-'0';
        fila20[i]=fila20[i]-'0';
        fila30[i]=fila30[i]-'0';
        fila40[i]=fila40[i]-'0';


    i++;
    }
    i=0;
    if (firstFourLocated>=0 && firstFourLocated<4) {
        fila1 = rellenar(fila1, numeros[8], numeros[12], 1, firstFourLocated);
        fila2 = rellenar(fila2, numeros[9], numeros[13], 2, firstFourLocated);
        fila3 = rellenar(fila3, numeros[10], numeros[14], 3, firstFourLocated);
        fila4 = rellenar(fila4, numeros[11], numeros[15], 4, firstFourLocated);
        write(1,&fila10,8);
        write(1,&fila20,8);
        write(1,&fila30,8);
        write(1,&fila40,8);
    } else {
        fila1=rellenar(fila1,numeros[8],numeros[12],4,firstFourLocated-4);
        fila2=rellenar(fila2,numeros[9],numeros[13],3,firstFourLocated-4);
        fila3=rellenar(fila3,numeros[10],numeros[14],2,firstFourLocated-4);
        fila4=rellenar(fila4,numeros[11],numeros[15],1,firstFourLocated-4);
        write(1,&fila10,8);
        write(1,&fila20,8);
        write(1,&fila30,8);
        write(1,&fila40,8);
    }
    
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        
        return 1;
    }
    bool four=false;
    int i=0,j=0,firstFourLocated=-1;
    int *numeros = (int *) malloc(16 * sizeof(int));
    char *cadena = argv[1];
    while(i<16){
        if (isdigit(cadena[j])) {
            numeros[i] = cadena[j] - '0';
            if(numeros[i]<1 || numeros[i]>4){
            write(1,"Error\n",6);
            return 1;
            }else if(!four && numeros[i]==4){
                firstFourLocated=i;
                four=!four;
            }
        } else {
            write(1,"Error\n",6);
            return 1;
        }
        j+=2;
        i++;
    }
    i=0;
    j=8;
    
    while(i<4 && j<16){
        if(numeros[i]+numeros[i+4]>5 || numeros[i]+numeros[i+4]<3 || numeros[j]+numeros[j+4]>5 || numeros[j]+numeros[j+4]<3){
        write(1,"Error\n",6);
            return 1;
        }
        j++;
        i++;
    }
    if(firstFourLocated>=0 && firstFourLocated<8)
        resolverFilas(numeros,firstFourLocated);
    else if(firstFourLocated>7 && firstFourLocated<16)
        resolverColumnas(numeros,firstFourLocated);
    
    return 0;
}

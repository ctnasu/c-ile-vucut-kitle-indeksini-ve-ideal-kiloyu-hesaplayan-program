//
//  main.c
//  vki
//
//  Created by ASUDE on 14.08.2023.
//

#include <stdio.h>

int main() {
    char cinsiyet;
    float kilo,boy,idealkilo,vki;
    printf("cinsiyeti giriniz:(k,e)");
    scanf("%c",&cinsiyet);
    printf("boyunuz:(metre)");
    scanf("%f",&boy);
    printf("kilonuz:(kg)");
    scanf("%f",&kilo);
    vki=kilo/boy/boy;
    switch (cinsiyet)
    {
    case 'e':
    case 'E':
            idealkilo=48+((boy-1.5)/0.025*2.7);
    printf("ideal kilonuz:%f\nvucut kitle indeksiniz:%f\n",idealkilo,vki);
            if(vki<20.7)
            {
                printf("Zayıfsiniz. Raglik riski var.");
            }
            else if(vki>20.7 && vki<26.4)
            {
                printf("Normalsiniz. Risk yok.");
            }
            else if(vki>26.5 && vki<31.1)
            {
                printf("Sismanlik sinirinda ya da sismansiniz. Riski var.");
            }
            else if(vki>31.2)
            {
                printf("Obetizite. Ciddi risk var.");
            }
           break;
    case 'k':
    case 'K':
    idealkilo=45+((boy-1.5)/0.025*2.2);
    printf("ideal kilonuz:%f\nvucut kitle indeksiniz:%f\n",idealkilo,vki);
            if(vki<19.1)
            {
                printf("Zayıfsiniz. Raglik riski var.");
            }
            else if(vki>19.2 && vki<25.8)
            {
                printf("Normalsiniz. Risk yok.");
            }
            else if(vki>25.9 && vki<32.2)
            {
                printf("Sismanlik sinirinda ya da sismansiniz. Riski var.");
            }
            else if(vki>32.3)
            {
                printf("Obetizite. Ciddi risk var.");
            }
            break;
                  
           }
           return 0;
}

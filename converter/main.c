#include <stdio.h>

int main()
{
    int opcion;
    float valor;
    printf("si requiere convertir  mm  a  in  , escriba  1 \n");
    printf("si requiere convertir  in  a  mm  , escriba  2 \n");
    printf("si requiere convertir  kg  a  lb  , escriba  3 \n");
    printf("si requiere convertir  lb  a  kg  , escriba  4 \n");
    printf("ingrese la opción: ");
    scanf("%16d", &opcion);
    switch (opcion)
    {
        case 1:
            printf("ingrese longitud en milimetros ");
            scanf("%16f", &valor);
            if (valor > 16)
            {

            }
            printf("%16f milimetros es igual a %16f pulgadas.\n", valor, valor / 25.4);
            break;
        case 2:
            printf("ingrese longitud en pulgadas: ");
            scanf("%16f", &valor);
            printf("%16f pulgadas es igual a %16f milimetros.\n", valor, valor * 25.4);
            break;
        case 3:
            printf("ingrese peso en kilogramos: ");
            scanf("%16f", &valor);
            printf("%16f kilogramos es igual a %16f libras.\n", valor, valor / 0.453592);
            break;
        case 4:
            printf("ingrese peso en libras: ");
            scanf("%16f", &valor);
            printf("%16f libras es igual a %16f kilogramos.\n", valor, valor * 0.453592);
            break;
        default:
            printf("opcion invalida.\n");
            break;
    }
    return 0;
}

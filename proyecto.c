#include <stdio.h>
#define TC_DOLLAR_GTQ 7.75 //
#define TC_EURO_GTQ 8.45
#define TC_DOLLAR_EUR 1.08
#define TC_EUR_DOLLAR 1.08
int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n ");
    printf("1. Convertir de Dolares a Quetzales\n ");
    printf("2. Convertir de Quetzales a Dolares\n ");
    printf("3. Convertir de Euros a Quetzales\n ");
    printf("4. Convertir de Quetzales a Euros\n ");
    printf("5. Convertir de Dolares a Euros\n ");
    printf("6. Convertir de Euros a Dolares\n ");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
        printf("Ingrese la cantidad de Dolares ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f GTQ\n ", cantidad, cantidad * TC_DOLLAR_GTQ);
        break;
    
        case 2:
        printf("Ingrese la cantidad de Quetzales ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f USD\n ", cantidad, cantidad / TC_DOLLAR_GTQ);
        break;
        
        case 3:
        printf("Ingrese la cantidad de Euros ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %.2f GTQ\n ", cantidad, cantidad * TC_EURO_GTQ);
        break;

        case 4:
        printf("Ingrese la cantidad de Quetzales ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f EUR\n ", cantidad, cantidad / TC_EURO_GTQ);
        break;

        case 5:
        printf("Ingrese la cantidad de Dolares ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f EUR\n ", cantidad, cantidad / TC_DOLLAR_EUR);
        break;

        case 6:
        printf("Ingrese la cantidad de Euros ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %.2f USD\n ", cantidad, cantidad * TC_EUR_DOLLAR);
        break;
         
    default:    
        printf("opcion no valida\n ");
}
return 0;
}

#include <stdio.h>

void convertir_quetzales();
void convertir_dolares();
void convertir_euros();

int main() {
    int opcion;

    while(1) {
        // Menú de opciones
        printf("\n--- Bienvenidos al Conversor de Monedas ---\n");
        printf("1. Convertir Quetzales a otras monedas\n");
        printf("2. Convertir Dolares a otras monedas\n");
        printf("3. Convertir Euros a otras monedas\n");
        printf("4. Salir\n");
        printf("Seleccione una opción:  ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                convertir_quetzales();
                break;
            case 2:
                convertir_dolares();
                break;
            case 3:
                convertir_euros();
                break;
            case 4:
                printf("¡Gracias por usar el conversor de monedas!\n");
                return 0;
            default:
                printf("Opción no válida, intente de nuevo.\n");
        }
    }

    return 0;
}

void convertir_quetzales() {
    float quetzales, dolares, euros;

    printf("\nIngrese la cantidad en quetzales: ");
    scanf("%f", &quetzales);

    dolares = quetzales / 7.75;  // Tasa de cambio aproximada
    euros = quetzales / 8.60;    // Tasa de cambio aproximada

    printf("%.2f Quetzales = %.2f Dólares\n", quetzales, dolares);
    printf("%.2f Quetzales = %.2f Euros\n", quetzales, euros);
}

void convertir_dolares() {
    float dolares, quetzales, euros;

    printf("\nIngrese la cantidad en dolares: ");
    scanf("%f", &dolares);

    quetzales = dolares * 7.75;  // Tasa de cambio aproximada
    euros = dolares * 0.92;      // Tasa de cambio aproximada

    printf("%.2f Dólares = %.2f Quetzales\n", dolares, quetzales);
    printf("%.2f Dólares = %.2f Euros\n", dolares, euros);
}

void convertir_euros() {
    float euros, quetzales, dolares;

    printf("\nIngrese la cantidad en euros: ");
    scanf("%f", &euros);

    quetzales = euros * 8.60;     // Tasa de cambio aproximada
    dolares = euros * 1.09;       // Tasa de cambio aproximada

    printf("%.2f Euros = %.2f Quetzales\n", euros, quetzales);
    printf("%.2f Euros = %.2f Dólares\n", euros, dolares);
}


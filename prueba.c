#include <stdio.h>
#include <string.h>
// HECHO POR CHRISTOPHER CUESTA

int login(){ // declaramos un int para que nos regrese un 1 si los usuarios y contraseña estan bien y 0 si no son los datos
    char nombreusuario[30]= "Juan";
    char contraseña[30]= "1234";
    char nombreusuario2[30]= "Nicolas";
    char contraseña2[30]= "4231";
    char nombreusuario3[30]= "Nicol";
    char contraseña3[30]= "4321";
    char nombre[30];
    char contra[30];
    int intento = 0;
    do{
    printf("\nIngrese nombre de usuario: ");
    scanf("%s", nombre);
    printf("\nIngrese la contraseña: ");
    scanf("%s", contra);
    if(strcmp(nombreusuario, nombre) == 0 && strcmp(contraseña, contra)==0){// comparamos con strcmp las char para verificar si el usuario y contraseña ingresado estabien
    return 1;
    }
    if(strcmp(nombreusuario2, nombre) == 0 && strcmp(contraseña2, contra)==0){
    return 1;
    }
    if(strcmp(nombreusuario3, nombre) == 0 && strcmp(contraseña3, contra)==0){
    return 1;        
    }
    intento++;
    printf("\nUsuario y contraseñas incorrectos, intentos %d", intento);
    intento++;
    }while (intento <=3);// while hasta tres por que son solo tres intentos
    printf("No se pudo ingresar");
    return 0;
}

float calcularPrecioRuta(int ruta, float kmruta){
    float precioXkm;
    switch (ruta)
    {
    case 1://urbana
        precioXkm = 0.10*kmruta;
        break;
    case 2://interurbana
        precioXkm = 0.15*kmruta;
        break;
    case 3://internacional
        precioXkm = 0.20*kmruta;
        break;
    default:
        printf("Ruta ingresada no valida");
        return 0;
        break;
    }
    return precioXkm;
}

float calcularDescuento(float precio,float kms){
    float preciodescuento;
    if(kms < 50){
        preciodescuento = precio;
    }else if( kms >= 50 && kms < 100){
        preciodescuento = precio * 0.05;
    }else if(kms >= 100 && kms < 500){
        preciodescuento = precio * 0.10;
    }else if(kms > 500){
        preciodescuento = precio * 0.20;
    }
    return preciodescuento;
}

void operacionTransporte(){
    int ruta;
    float kmderuta, precioRuta, descuento, total;
    for(int i = 0; i < 5; i++){ // declaro un for hasta 5 para los 5 clientes que ingresaran los tipos de ruta y sus km
        printf("\nCliente %d", i);
        printf("\nIngrese que tipo de ruta es:");
        printf("\n1. Urbana");
        printf("\n2. Interurbana");
        printf("\n3. Internacional");
        printf("\nSeleccione la ruta(1-3): ");
        scanf("%d", &ruta);
        printf("\nIngrese los km de la ruta:");
        scanf("%f", &kmderuta);
        precioRuta = calcularPrecioRuta(ruta, kmderuta);
        descuento = calcularDescuento(precioRuta, kmderuta);
        printf("\nSubtotal: %f", precioRuta);
        total = precioRuta - descuento;
        printf("\nTotal: %f", total);
    }
    }

    void redSocial(){
        char mensaje[30];
        int opc;
        for (int i = 0; i < 5; i++)
        {
        printf("Mensaje %d",i);
        printf("Ingresar el mensaje que desee dejar");
        scanf("%s", mensaje);
        printf("\n1. Noticias\n");
        printf("2. Eventos\n");
        printf("3. Preguntas\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("El mensaje dejado es: %s", mensaje);
            break;
        case 2:
            printf("El mensaje dejado es: %s", mensaje);
            break;
        case 3:
            printf("El mensaje dejado es: %s", mensaje);
            break;
        default:
            printf("La opcion no es correcta");
            break;
        }
        }
        
    }

    void menu(){
    int opc;
    do{
        printf("\nSeleccione la opcion\n");
        printf("\n1. Operación de transporte\n");
        printf("2. Interactuar en la red social\n");
        printf("3. Salir del programa\n");
        printf("\nEscriba la seleccion(1-3): ");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            operacionTransporte();
            break; 
        case 2:
        	redSocial();
			break;
        case 3:
        	printf("Saliendo del programa");
        	return;
        default:
        	printf("\nOpcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }
    }while (opc != 3);    
}

int main(){
    int resultadologin;
    resultadologin = login();
    if (resultadologin = 1){
        menu();
    }
        return 0;
}
#include <stdio.h>

void main(){

    const int sala1 = 1, sala2 = 2, sala3 = 3, sala4 = 4;

    int opcion;

    printf("\n==================== Peliculas ====================\n");
    printf("\nSala 1:  La ultima estafa"               );
    printf("\nSala 2:  Atrapadose en el fondo del mar" );
    printf("\nSala 3:  Tomando el control"             );
    printf("\nSala 4:  No respires 2"                  );

    printf("\n\nIngrese la sala de cine:.. ");
    scanf("%d", &opcion);
    
    if (opcion == sala1)
        printf("Pelicula: La ultima estafa");

    else if (opcion == sala2)
        printf("Pelicula: Atrapados en el fondo del mar");

    else if (opcion == sala3)
        printf("Pelicula: Tomando el control");

    else if (opcion == sala4)
        printf("Pelicula: No respires 2");

    else 
        printf("Sala no existe");

}
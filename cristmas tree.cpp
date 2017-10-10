
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ManyFloors;                             //shows how many floors in the building

    printf( "lead the number of floors (1-5)\n" );       // asks how many floors a user needs
    scanf( "%d", &ManyFloors );                 // user input the number of floors
    if ( ManyFloors < 0 ) {                   // if the entered quantity is less than zero
        printf ("it's not house\n" );
    }
    else if ( ManyFloors == 1 ) {
        printf( "*\n\n" ); //triangle down
        printf( "*\n\n" ); //triangle up
        printf( "     *     \n     *     " ); //Christmas tree
    }
    else if ( ManyFloors == 2 ) {
        printf( "*\n**\n\n" ); //triangle down
        printf( "**\n*\n\n" ); //triangle up
         printf( "     *     \n    ***    \n     *     " ); //Christmas tree
    }
    else if ( ManyFloors == 3 ) {
        printf( "*\n**\n***\n\n" ); //triangle down
         printf( "***\n**\n*\n\n" ); //triangle up
          printf( "     *     \n    ***    \n   *****   \n     *     " ); //Christmas tree
    }
    else if ( ManyFloors == 4 ) {
        printf( "*\n**\n***\n****\n\n" ); //triangle down
         printf( "****\n***\n**\n*\n\n" ); //triangle up
          printf( "     *     \n    ***    \n   *****   \n  *******  \n     *     " ); //Christmas tree
    }
    else if ( ManyFloors == 5 ) {
        printf( "*\n**\n***\n****\n*****\n\n" ); //triangle down
         printf( "*****\n****\n***\n**\n*\n\n" ); //triangle up
          printf( "     *     \n    ***    \n   *****   \n  *******  \n *********\n     *     " ); //Christmas tree
    }

    else {
        printf( "it's very big house\n" );  // the building is too large
    }
  return 0;
}


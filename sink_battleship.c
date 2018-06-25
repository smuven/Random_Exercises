# Random_Exercises

#include <stdio.h>

int main()

{
    
    // battleship game
    
    int location1 = 5;
    int location2 = 7;
    int location3 = 0;
    int guess;
    int hits = 0;
    int guesses = 0;
    
    int isSunk = 0;
    
    while ( isSunk == 0) {
        
        guesses = guesses + 1;
        
        printf("Enter any number between 0 and 7 to sink the ship: ");
        scanf("%d", &guess);
        
        if ( guess == location1 || guess == location2 || guess == location3 ) {
         
            printf("HIT\n");
            hits = hits + 1;
            
            if ( hits == 3) {
                isSunk = 1;
                printf("You sunk the battleship!!\n\n");
            }
            
            
        }   // Fails the test
        else{
            printf("MISS\n");
        }
    }  // This exits the while loop
   
    
    float acc = (float) 3 / guesses ;
    
    printf("You took %d guesses which means your accuracy rate is %.3f \n\n" , guesses, acc );
    
     return 0;
    
}  

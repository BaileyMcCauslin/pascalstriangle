#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//constants
const int NUMBER_OF_LEVELS = 15;
const int STR_LEN = 100;

//Function prototypes
void displayLevel( const int *levelArray , int size );
int sumOfLevel( int numberOfLevels );
int addLevelValue( const int *levelArray , int *newLevelArray , int size );
int initalizeBaseLevel( int *levelArray );
void copyArray( int *dest , const int *source , int size );

//Simple main driver
int main( )
{
    int size; 
    int count , spaces;
    int levelArray[ NUMBER_OF_LEVELS ] , newLevelArray[ NUMBER_OF_LEVELS ];

    //Initalize size at 0
    size = initalizeBaseLevel( levelArray );

    printf("\nDisplaying 15 layers of pascals triangle: \n\n");

    displayLevel( levelArray , size );

    for( count = 0; count < NUMBER_OF_LEVELS - 1; count++ )
    {
        size = addLevelValue( levelArray , newLevelArray , size );
        copyArray( levelArray , newLevelArray , size );
        
        //Loop for triangle shape 
        for( spaces = 0; spaces <= NUMBER_OF_LEVELS - count; spaces++ )
        {
           printf("   ");
        }
       
       displayLevel( newLevelArray , size );
    }

    return 0; //program end
}

void copyArray( int *dest , const int *source , int size )
{
    int index;

    for( index = 0; index < size; index++ )
    {
        dest[ index ] = source[ index ];
    }
}

int initalizeBaseLevel( int *levelArray )
{
    levelArray[ 0 ] = 1;
    return 0;
}

int addLevelValue( const int *levelArray , int *newLevelArray , int size )
{
   int index;

   newLevelArray[ 0 ] = 1;

   for( index = 0; index < size - 1; index++ )
   {
        newLevelArray[ index + 1 ] = levelArray[ index ] + levelArray[ index + 1 ];   
   }

   newLevelArray[ size ] = 1;

   return size + 1;
}

//display each level of the triangle
void displayLevel( const int *levelArray , int size )
{
   int index;

   for( index = 0; index < size; index++ )
   {       
       printf("%7d" , levelArray[ index ] );
   }

   printf("\n");
}
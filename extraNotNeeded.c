typedef struct PascalsTriangle
    {
      int size;
  
      int capacity;
  
      int *levelArray;
    }PascalsTriangle;



//expand the array when size hits capacity. Check for this before doing another level
void expandArray( PascalsTriangle triangle )  //Note: Depending on the circumstance you might need to pass pointer. If that is the case use -> instead of dot operator.
{
 int *newLevelArray;
 int  index;
  
 if( triangle.size == triangle.capacity )
 {
  triangle.capacity*= 2;
   
  newLevelArray = ( int * )malloc( sizeof( int ) * triangle.capacity ); 
   
  for( index = 0; index < triangle.size; index++ )
  {
   newLevelArray[ index ] = triangle.levelArray[ index ];
  }
  free( triangle.levelArray );
   
  triangle.levelArray = newLevelArray;
 }
}

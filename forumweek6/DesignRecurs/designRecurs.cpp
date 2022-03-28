// Precondition: info [ fromLoc . . toLoc ] sorted in ascending order

// Postcondition: Function value = ( item in info [ fromLoc .. toLoc] )

bool BinarySearch( ItemType info[ ], ItemType item, int fromLoc , int toLoc )

{

  int mid;

  if ( fromLoc > toLoc ) // base case -- not found

      return false ;

  else {

      mid = ( fromLoc + toLoc ) / 2 ;

      switch ( item.ComparedTo( info [ mid ] ) )

      {

         case EQUAL: return true;

         

         case LESS: return BinarySearch ( info, item, fromLoc, mid-1 );

      

         case GREATER: return BinarySearch( info, item, mid + 1, toLoc );

  }

}
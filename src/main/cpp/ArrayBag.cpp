#include "ArrayBag.h"

template< typename T >
ArrayBag< T >::ArrayBag( ) : itemCount{ 0 }, maxItems{ DEFAULT_CAPACITY }
{
    
} // end default constructor

template< typename T >
int ArrayBag< T >::getCurrentSize( ) const
{
    return itemCount;
} // end getCurrentSize

template< typename T >
bool ArrayBag< T >::isEmpty( ) const
{
    return itemCount == 0;
} // end isEmpty

template< typename T >
bool ArrayBag< T >::add( const T& newEntry )
{
    bool hasRoomToAdd{ itemCount < maxItems };

    if ( hasRoomToAdd )
    {
        items[ itemCount ] = newEntry;
        itemCount += 1;
    } // end if

    return hasRoomToAdd;
} // end add

template< typename T >
int ArrayBag< T >::getIndexOf( const T& target )
{
    bool isFound{ false };
    int result{ -1 };
    int searchIndex{ 0 };
    
    while ( !isFound && ( searchIndex < itemCount ) )
    {
        isFound = ( items[ searchIndex ] == target );
        if ( isFound )
        {
            result = searchIndex;
        }
        else
        {
            searchIndex += 1;
        } // end if
    } // end while
    return result;
} // getIndexOf

template< typename T >
bool ArrayBag< T >::remove( const T& anEntry )
{
    int locatedIndex{ getIndexOf( anEntry ) };
    bool canRemoveItem{ !isEmpty( ) && ( locatedIndex > -1 ) };
    if ( canRemoveItem ) 
    {
        itemCount -= 1;
        items[ locatedIndex ] = items[ itemCount ];
    } // end if

    return canRemoveItem;
} // end remove

template< typename T >
void ArrayBag< T >::clear( )
{
    itemCount = 0;
} // end clear

template< typename T >
int ArrayBag< T >::getFrequencyOf( const T& anEntry ) const
{
    int frequency{ 0 };
    int currentIndex{ 0 };

    while ( currentIndex < itemCount )
    {
        if ( items[ currentIndex ] == anEntry )
        {
            frequency += 1;
        } // end if
        currentIndex += 1;
    } // end while

    return frequency;
} // end getFrequencyOf

template< typename T >
bool ArrayBag< T >::contains( const T& anEntry ) const
{
    return getFrequencyOf( anEntry ) > 0 ;
} // end contains

// template< typename T >
// bool ArrayBag< T >::contains( const T& target ) const
// {
//     bool found{ false };
//     int currentIndex{ 0 };

//     while ( !found && ( currentIndex < itemCount ) )
//     {
//         if ( target == items[ currentIndex ] )
//         {
//             found = true;
//         }
//         else
//         {
//             currentIndex += 1;
//         }
//     }

//     return found;
// } // end contains

template< typename T >
std::vector< T > ArrayBag< T >::toVector( ) const
{
    std::vector< T > contents;
    for( int i{ 0 }; i < itemCount; ++i)
        contents.push_back( items[ i ] );
    return contents;
} // end toVector

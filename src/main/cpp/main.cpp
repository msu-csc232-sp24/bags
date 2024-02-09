/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2023
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the main target.
 * @version 1.0.0
 * @date    09/02/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#include "csc232.h"
#include "BagInterface.h"
#include "ArrayBag.h"

void displayBag( ArrayBag<std::string>& bag )
{
    cout << "The bag contains " << bag.getCurrentSize( ) << " items:" << endl;
    std::vector<std::string> bagItems{ bag.toVector() };
    int numEntries{ static_cast<int> (bagItems.size()) };
    for ( int i{ 0 }; i < numEntries; ++i )
    {
        cout << bagItems[ i ] << " ";
    } // end for
    cout << endl << endl;
} // end displayBag

void bagTester( ArrayBag<std::string>& bag )
{
    cout << "isEmpty: returns " << bag.isEmpty() << "; should be 1 (true)" << endl;
    displayBag( bag );

    std::string items[ ] = { "one", "two", "three", "four", "five", "one" };
    cout << "Add 6 items to the bag: " << endl;
    for ( int i{ 0 }; i < 6; ++i )
    {
        bag.add( items[ i ] );
    } // end for
    displayBag( bag );

    cout << "isEmpty: returns " << bag.isEmpty( ) << "; should be 0 (false)" << endl;
    cout << "getCurrentSize: returns " << bag.getCurrentSize( ) << "; should be 6" << endl;
    cout << "Try to add another entry: add( \"extra\" ) returns \"" << std::boolalpha << bag.add( "extra" ) << "\"" << endl;

    cout << "contains(\"three\"): returns " << std::boolalpha << bag.contains( "three" ) << " should be true" << endl;
    cout << "contains(\"ten\"): returns " << std::boolalpha << bag.contains( "ten" ) << " should be false" << endl;
    cout << "getFrequency(\"one\"): returns " << bag.getFrequencyOf( "one" ) << " should be 2" << endl;
    cout << "remove(\"one\"): returns " << std::boolalpha << bag.remove( "one" ) << endl;
    cout << "getFrequency(\"one\"): returns " << bag.getFrequencyOf( "one" ) << " should be 1" << endl;
    cout << "remove(\"one\"): returns " << std::boolalpha << bag.remove( "one" ) << endl;
    cout << "getFrequency(\"one\"): returns " << bag.getFrequencyOf( "one" ) << " should be 0" << endl;
    cout << endl;
    displayBag( bag );
    cout << "After clearing the bag, ";
    bag.clear( );
    cout << "isEmpty: returns " << std::boolalpha << bag.isEmpty( ) << "; should be true" << endl;
} // end bagTester

int main(int argc, char* argv[])
{
    ArrayBag<std::string> bag{ };
    cout << "Testing the Array-based bag:" << endl;
    cout << "The initial bag is empty." << endl;
    bagTester( bag );
    cout << "All done!" << endl;

    return EXIT_SUCCESS;
}

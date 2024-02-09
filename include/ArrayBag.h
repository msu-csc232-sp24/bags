#ifndef ARRAY_BAG_H
#define ARRAY_BAG_H

#include "BagInterface.h"

template<typename ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
    static const int DEFAULT_CAPACITY{ 6 };
    ItemType items[DEFAULT_CAPACITY ];
    int itemCount;
    int maxItems;
    int getIndexOf( const ItemType& target );
public:
    ArrayBag();
    ~ArrayBag() override = default;

   /** 
    * Gets the current number of entries in this bag.
    * @return The integer number of entries currently in the bag.
    */
   int getCurrentSize() const override;
   
   /** 
    * Sees whether this bag is empty.
    * @return True if the bag is empty, or false if not.
    */
   bool isEmpty() const override;
   
   /** 
    * Adds a new entry to this bag.
    * @post If successful, newEntry is stored in the bag and
    *       the count of items in the bag has increased by 1.
    * @param newEntry The object to be added as a new entry.
    * @return True if addition was successful, or false if not. 
    */
   bool add(const ItemType& newEntry) override;
   
   /** 
    * Removes one occurrence of a given entry from this bag,if possible.
    * @post If successful, anEntry has been removed from the bag
    *       and the count of items in the bag has decreased by 1.
    * @param anEntry The entry to be removed.
    * @return True if removal was successful, or false if not.
    */
   bool remove(const ItemType& anEntry) override;
   
   /** 
    * Removes all entries from this bag.
    * @post Bag contains no items, and the count of items is 0.
    */
   void clear() override;
   
   /** 
    * Counts the number of times a given entry appears in bag.
    * @param anEntry The entry to be counted.
    * @return The number of times anEntry appears in the bag.
    */
   int getFrequencyOf(const ItemType& anEntry) const override;
   
   /** 
    * Tests whether this bag contains a given entry.
    * @param anEntry The entry to locate.
    * @return True if bag contains anEntry, or false otherwise. 
    */
   bool contains(const ItemType& anEntry) const override;
   
   /** 
    * Empties and then fills a given vector with all entries that
    * are in this bag.
    * @return  A vector containing all the entries in the bag. 
    */
   std::vector<ItemType> toVector() const override;
};

#include "ArrayBag.cpp"

#endif
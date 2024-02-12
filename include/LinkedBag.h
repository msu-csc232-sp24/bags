/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * ADT bag: Link-based implementation.
 *
 * Created by Frank M. Carrano and Timothy M. Henry with stylistic modifications made by Jim Daehn.
 *
 * @file    LinkedBag.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Listing 4-3
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright 2017 Pearson Education, Hoboken, New Jersey.
 */

#ifndef LINKED_BAG_
#define LINKED_BAG_

#include "BagInterface.h"
#include "Node.h"

template<class ItemType>
class LinkedBag : public BagInterface<ItemType> {
private:
    Node<ItemType> *headPtr; // Pointer to first node
    int itemCount;           // Current count of bag items

    /**
     * Returns either a pointer to the node containing a given entry
     * or the null pointer if the entry is not in the bag.
     * @param target an item to look for in this bag
     * @return a pointer to the first node containing this target, or
     * the nullptr if the target isn't found in this bag.
     */
    Node<ItemType> *getPointerTo(const ItemType &target) const;

public:
    /**
     * Default constructor.
     */
    LinkedBag();

    /**
     * Big Five - Copy Constructor override.
     * @param aBag source bag whose state is copied into a newly created bag
     */
    LinkedBag(const LinkedBag<ItemType> &aBag);

    /**
     * Big Five - Destructor override.
     */
    virtual ~LinkedBag();

    /**
    * Gets the current number of entries in this bag.
    * @return The integer number of entries currently in the bag.
    */
    int getCurrentSize() const;

    /**
    * Sees whether this bag is empty.
    * @return True if the bag is empty, or false if not.
    */
    bool isEmpty() const;

    /**
    * Adds a new entry to this bag.
    * @post If successful, newEntry is stored in the bag and
    *       the count of items in the bag has increased by 1.
    * @param newEntry The object to be added as a new entry.
    * @return True if addition was successful, or false if not.
    */
    bool add(const ItemType &newEntry);

    /**
    * Removes one occurrence of a given entry from this bag,if possible.
    * @post If successful, anEntry has been removed from the bag
    *       and the count of items in the bag has decreased by 1.
    * @param anEntry The entry to be removed.
    * @return True if removal was successful, or false if not.
    */
    bool remove(const ItemType &anEntry);

    /**
    * Removes all entries from this bag.
    * @post Bag contains no items, and the count of items is 0.
    */
    void clear();

    /**
    * Tests whether this bag contains a given entry.
    * @param anEntry The entry to locate.
    * @return True if bag contains anEntry, or false otherwise.
    */
    bool contains(const ItemType &anEntry) const;

    /**
    * Counts the number of times a given entry appears in bag.
    * @param anEntry The entry to be counted.
    * @return The number of times anEntry appears in the bag.
    */
    int getFrequencyOf(const ItemType &anEntry) const;

    /**
    * Empties and then fills a given vector with all entries that
    * are in this bag.
    * @return  A vector containing all the entries in the bag.
    */
    std::vector<ItemType> toVector() const;
}; // end LinkedBag

#include "LinkedBag.cpp"

#endif

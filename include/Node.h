/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * Listing 4-1
 *
 * Created by Frank M. Carrano and Timothy M. Henry with stylistic modifications made by Jim Daehn.
 *
 * @file    Node.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright 2017 Pearson Education, Hoboken, New Jersey.
 */

#ifndef NODE_
#define NODE_

template<class ItemType>
class Node {
private:
    ItemType item; // A data item
    Node<ItemType> *next; // Pointer to next node

public:

    /**
     * Initializing constructor.
     * @param anItem the initial item encapsulated by this Node
     */
    explicit Node(const ItemType &anItem = ItemType{}, Node<ItemType> *nextNodePtr = nullptr);

    /**
     * Item mutator method.
     * @param anItem an item to replace the current item in this Node
     */
    void setItem(const ItemType &anItem);

    /**
     * Next node pointer mutator method.
     * @param nextNodePtr a node pointer to replace the current node pointer in this Node
     */
    void setNext(Node<ItemType> *nextNodePtr);

    /**
     * Item accessor method.
     * @return a copy of the item encapsulated in this Node
     */
    ItemType getItem() const;

    /**
     * Next node pointer accessor method.
     * @return a copy of the next node pointer in this Node
     */
    Node<ItemType> *getNext() const;
}; // end Node

#include "Node.cpp"

#endif

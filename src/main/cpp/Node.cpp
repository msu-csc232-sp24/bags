/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * Listing 4-2
 *
 * Created by Frank M. Carrano and Timothy M. Henry with stylistic modifications made by Jim Daehn.
 *
 * @file    Node.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright 2017 Pearson Education, Hoboken, New Jersey.
 */

#include "Node.h"

template<class ItemType>
Node<ItemType>::Node(const ItemType &anItem, Node<ItemType> *nextNodePtr) :
        item(anItem), next(nextNodePtr) {
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType &anItem) {
    item = anItem;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType> *nextNodePtr) {
    next = nextNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getItem() const {
    return item;
} // end getItem

template<class ItemType>
Node<ItemType> *Node<ItemType>::getNext() const {
    return next;
} // end getNext

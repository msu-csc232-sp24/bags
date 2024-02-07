#include "ArrayBag.h"

template<typename T>
ArrayBag<T>::ArrayBag() : itemCount{ 0 }, maxItems{ DEFAULT_CAPACITY }
{
    
}

template<typename T>
int ArrayBag<T>::getCurrentSize() const
{
    return 0;
}

template<typename T>
bool ArrayBag<T>::isEmpty() const
{
    return false;
}

template<typename T>
bool ArrayBag<T>::add(const T& newEntry)
{
    return false;
}

template<typename T>
bool ArrayBag<T>::remove(const T& anEntry)
{
    return false;
}

template<typename T>
void ArrayBag<T>::clear()
{

}

template<typename T>
int ArrayBag<T>::getFrequencyOf(const T& anEntry) const
{
    return 0;
}

template<typename T>
bool ArrayBag<T>::contains(const T& anEntry) const
{
    return false;
}

template<typename T>
std::vector<T> ArrayBag<T>::toVector() const
{
    std::vector<T> contents;
    for( int i{0}; i < itemCount; ++i)
        contents.push_back(items[ i ]);
    return contents;
}

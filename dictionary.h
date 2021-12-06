#ifndef DICTIONARY
#define DICTIONARY

template <class KeyType, class ValueType>
class Dictionary : public DictionaryInterface {
    bool isEmpty() const;
    int getNumberOfEntries() const;
    bool add(const KeyType& newKey, const ValueType& newValue);
    bool remove(const KeyType& targetKey);
    bool clear();
    bool contains(const KeyType& targetKey) const;
    ValueType getValue(const KeyType& targetKey) const;
};

#include "dictionary.cpp"
#endif
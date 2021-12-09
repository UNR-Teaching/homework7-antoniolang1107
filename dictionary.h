#ifndef DICTIONARY
#define DICTIONARY
#include "dictionaryinterface.h"
#include "entry.h"

template <class KeyType, class ValueType>
class Dictionary : public DictionaryInterface<KeyType, ValueType> {
private:
    Entry<KeyType, ValueType> entryArr[1000];
    int entryCount;
    int hash(KeyType inputValue);
    int maxSize = 1000;
public:
    Dictionary();
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
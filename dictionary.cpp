template <class KeyType, class ValueType>
int Dictionary<KeyType, ValueType>::hash(KeyType inputValue) {
    int tempNum;
    for (int i = 0; inputValue[i] != '\n'; i++) {
        tempNum *= inputValue[i];
    }

    return tempNum % maxSize;
}

template <class KeyType, class ValueType>
Dictionary<KeyType, ValueType>::Dictionary() {
    entryCount = 0;
}

template <class KeyType, class ValueType>
bool Dictionary<KeyType, ValueType>::isEmpty() const {
    return entryCount == 0;
}

template <class KeyType, class ValueType>
int Dictionary<KeyType, ValueType>::getNumberOfEntries() const {
    return entryCount;
}

template <class KeyType, class ValueType>
bool Dictionary<KeyType, ValueType>::add(const KeyType& newKey, const ValueType& newValue) {
    // tempEntry = Entry(newKey, newValue);
    // entryArr[hash(newKey)] = tempEntry;

    return true;
}

template <class KeyType, class ValueType>
bool Dictionary<KeyType, ValueType>::remove(const KeyType& targetKey) {
    // entryArr[hash(targetKey)] = junkEntry;

    return true;
}

template <class KeyType, class ValueType>
bool Dictionary<KeyType, ValueType>::clear() {


    return true;
}

template <class KeyType, class ValueType>
bool Dictionary<KeyType, ValueType>::contains(const KeyType& targetKey) const {
    // if entryArr[hash(targetKey)]
    //      return true;
    // else
    //      return false;
}

template <class KeyType, class ValueType>
ValueType Dictionary<KeyType, ValueType>::getValue(const KeyType& targetKey) const {
    // return entryArr[hash(targetKey)];
}
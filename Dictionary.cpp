#include "Dictionary.h"

template <typename T, typename K>
Dictionary<T, K>::Dictionary() {
    this->pairsCount = 0;
    this->pairs = new Pair<T, K>[SIZE];
}
template <typename T, typename K>
Dictionary<T, K>::~Dictionary() {
    delete[] pairs;
}

template <typename T, typename K>
Dictionary<T, K>::Dictionary(const Pair<T, K>* pairs) {
    this->pairs.getX() = pairs.getX();
    this->pairs.getY() = pairs.getY();
    this->pairsCount++;
}

template <typename T, typename K>
void Dictionary<T, K>::addPair(const Pair<T, K>& pair) {
    if(this->pairsCount == SIZE) {
        return;
    }
    pairs[pairsCount++] = pair;
}

template <typename T, typename K>
void Dictionary<T, K>::removePair(const Pair<T, K>& pair) {
    for (int i = 0; i < pairsCount; i++) {
        if(this->pairs[i].getX() == pair.getX() &&
           this->pairs[i]. getY() == pair.getY()) {
            for(int j = 0; j < pairsCount - 1; j++) {
                this->pairs[i] = pairs[i + 1];
            }
            this->pairsCount--;
        }
    }
}

template <typename T, typename K>
K& Dictionary<T, K>::getValue(const T& key) const {
    for(int i = 0; i < pairsCount; i++) {
        if(pairs[i].getX() == key.getX()) {
            return pairs[i].getY();
        }
    }
    Pair<T, K> p;
    return p.getY();
}

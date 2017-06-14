#include "Pair.h"

template <typename T, typename K>
Pair<T, K>::Pair() {
    this->x = new T;
    this->y = new K;
}

template <typename T, typename K>
Pair<T, K>::Pair(T& x, K& y) {
    this->x = x;
    this->y = y;
}

template <typename T, typename K>
T& Pair<T, K>::getX() const {
    return this->x;
}

template <typename T, typename K>
K& Pair<T, K>::getY() const {
    return this->y;
}

template <typename T, typename K>
bool Pair<T, K>::operator==(const Pair& other) {
    return this->x == other.x && this->y == other.y;
}

template <typename T, typename K>
K& Pair<T, K>::getValue(T& key) const {
    if(this->x == key.x) {
        return this->y;
    }
}

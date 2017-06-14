#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <Pair.h>

const int SIZE = 5;

template <typename T, typename K>
class Dictionary {
    public:
        Dictionary();
        virtual ~Dictionary();
        Dictionary(const Pair<T, K>* pairs);

        void addPair(const Pair<T, K>& pair);
        void removePair(const Pair<T, K>& pair);
        K& getValue(const T& key) const;

    private:
        Pair<T, K>* pairs;
        int pairsCount;

};

#endif // DICTIONARY_H

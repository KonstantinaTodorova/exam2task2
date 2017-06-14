#ifndef PAIR_H
#define PAIR_H

template <typename T, typename K>
class Pair {
    public:
        Pair();
        Pair(T& x, K& y);

        T& getX() const;
        K& getY() const;

        bool operator==(const Pair& pair);

        K& getValue(T& key) const;

    private:
        T x;
        K y;
};

#endif // PAIR_H

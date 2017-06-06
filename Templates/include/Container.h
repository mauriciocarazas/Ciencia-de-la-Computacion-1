#ifndef CONTAINER_H
#define CONTAINER_H
using namespace std;
template <typename T>;

class Container{
private:
    T elt;
public:
    Container(const T arg) : elt(arg){}
    T inc () {return elt+1;}
};

#endif // CONTAINER_H

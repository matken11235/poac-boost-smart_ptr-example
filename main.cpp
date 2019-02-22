// https://boostjp.github.io/tips/smart_ptr.html
#include <iostream>
#include <boost/scoped_ptr.hpp>

struct object
{
    int num;

    object(int n) :
        num( n )
    { }

    ~object()
    {
        std::cout << "destroy" << std::endl;
    }
};

int main()
{
    boost::scoped_ptr<object> p( new object( 3 ) );

    // ポインタと同じように使うことが出来る
    std::cout << p->num << std::endl; 

} // ここでpが自動的にdeleteされる

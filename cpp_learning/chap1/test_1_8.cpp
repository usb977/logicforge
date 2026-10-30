/*
* 练习1.8：指出下面哪些输出语句是合法的
*/

#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /*"*/"*/;
    std::cout << /*"*/" /* "/*"*/;
    return 0;
}

/*
第三行有错误，其他的没问题
*/

/*
练习1.5：将练习1.4代码的长输出拆解为短输出
*/

#include <iostream>

int main()
{
    std::cout << "请输入两个乘数：";
    std::cout << std::endl;

    int a = 0, b = 0;

    std::cin >> a >> b;
    std::cout << "两个数 ";
    std::cout << a;
    std::cout << " 和 ";
    std::cout << b;
    std::cout << " 的乘积为：";
    std::cout << a * b;
    std::cout << std::endl;
    return 0;
}

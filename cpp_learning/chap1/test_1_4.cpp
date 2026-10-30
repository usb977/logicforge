/*
练习1.4：使用乘法打印两个数的积
*/

#include <iostream>

int main()
{
    std::cout << "请输入两个乘数：" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "两个数 " << a << " 和 " << b << " 的乘积为：" << a * b << std::endl;
    return 0;
}

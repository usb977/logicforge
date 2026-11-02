/*
程序功能：使用while函数完成数字1到10的求和
*/

#include <iostream>

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        sum += val;
        ++val;  //先将val的值加1后返回；val++是先返回当前值再加1；这里都可以，优先使用前置++效率更高；
    }
    std::cout << "数字1到10的和为："
              << sum << std::endl;
    return 0;
}
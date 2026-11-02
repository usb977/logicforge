/*
程序功能：使用for函数完成数字1到10的求和
*/

#include <iostream>

int main()
{
    int sum = 0;
    for(int val=1;val<=10;++val)      // ++val这个表达式在执行循环体以后执行
    {
        sum += val;
    }
    std::cout << "数字1到10的和为："
              << sum << std::endl;
    return 0;
}

/*
对于在循环条件中检测变量、在循环体中递增变量的模式，for函数相对while函数更为简化
*/
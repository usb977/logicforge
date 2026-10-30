/*
练习1.6：判断下面的程序是否合法?
*/

#include <iostream>

int main()
{
    std::cout << "输入两个数字：" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
    return 0;
}

/*
 * 该程序不合法，<< 左侧缺失ostream类型的对象；
 * 编译会报错；
 */
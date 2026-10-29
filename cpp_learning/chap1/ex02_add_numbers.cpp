/*
程序功能：让用户输入两个数，程序输出2个数的和；
*/

#include <iostream>

int main()
{
    std::cout << "输入两个数字：" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}

/*
1. <<是输出运算符，左侧必须是ostream类型对象，右侧是要输出的值；因此第一句的意思是将一个字符串赋值给cout对象；
2.endl是缓冲符，main()函数的第一行连写其实等价于：
std::cout << "输入两个数字：" 
std::cout << std::endl;



*/
/*
程序功能：提示用户输入两个数，然后程序输出2个数的和；
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
1. << 是输出运算符，左侧必须是ostream类型对象，右侧是要打印的值；因此第一句的意思是
把字符串推入 cout 对象关联的 streambuf 缓冲区；缓冲区在 flush 时通过 write(1, ...) 系统
调用交给内核，内核的 tty 子系统再把它打印到终端显示；

2. << 运算符返回其左侧的运算对象，所以可以连写；

3. main()函数的第一行连写其实等价于：
    std::cout << "输入两个数字：";
    std::cout << std::endl;
endl是操作符的一个特殊值，写入endl的效果是结束当前行，并将buffer中的内容刷到设备中；

4. std::cin表示cin这个名字在std这个命名空间下； ::叫作用域运算符；
*/
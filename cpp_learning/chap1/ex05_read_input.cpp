/*
程序功能：输入数据个数不确定时，读取用户输入的所有数并求和
输入所有数字后，按下ctrl+D就可以计算结果了；
*/

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)  //循环读入数据流
    {
        sum += value;
    }
    std::cout << "所有输入的数字和为："<< sum << std::endl;
    return 0;
}

/*
这里while是在判断cin对象是否正确读入数据流，当遇到
文件结束符（ctrl+D）或者无效输入（不是int）就会跳出循环；
*/
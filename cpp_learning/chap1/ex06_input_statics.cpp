/*
程序功能：统计输入流中每个值连续出现了多少次
将数字序列一次性输入完成后，按下 ctrl+D 就可以打印除最后一个数值外其他输入的次数
这个程序设计的不是特别好，每次中断以后又重新打印消息
*/

#include <iostream>

int main()
{
    int currVal = 0, val = 0; // currVal是当前值，val是下一个值
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val) // 没有新值就会跳出while循环
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " 出现了 "
                          << cnt << " 次" << std::endl;
                currVal = val; // 记录新值
                cnt = 1;       // 新值计数器从1开始
            }
        }
        std::cout << currVal << " 出现了 "
                  << cnt << " 次" << std::endl;
    }
    return 0;
}

这是《 C++ How to Program, Ninth edition 》 第六章社会实践题的cpp代码

函数 “ void CAI() ” 实现初步选择：
输入1，代表进行加法运算； 输入2，代表进行减法运算； 输入3，表示乘法； 输入4，代表除法； 输入5，则在加减乘除中任意进行

void addition();
void subtraction();
void multiplication();
void division();
void hybridOperations();
以上五个函数声明分别表示加、减、乘、除、混合五种测试方式，其中 hybridOperations() 通过调用“ int randomOperation(int, int) ” 返回的值来实现。
五个函数都会提示输入难度等级：1表示随机两个个位数（1-9）进行计算，要求使用者输入结果，如果结果错误，继续问这一题的结果，直到正确；如果正确，则再随机两个数，进入下一轮问答（最多十题）。
                           2、 3、 4 则分别表示随机的两个数在（1-99）、（1-999）、（1-9999）之间。

“ void comments(bool) ” 会对每次输入的答案的正误做出不同的评价，值得一提的是：回答正确时，系统会通过C11风格的随机数生成器生成1-4之间的随机整数，每个数字对应着不同的评语；错误时也是如此。
这样做可以有助于缓解视力疲劳，且不同的评语让程序多了一些类似聊天对话的乐趣。

“ void monitorPerformance(double, double) ” 会监控使用者的运算表现，它统计了答十条题时，正确的次数和错误的次数（答同一题反复出现错误时错误次数会叠加），以此来计算正确率；
同时，它对正确率75% 以上或以下有不同的评价。
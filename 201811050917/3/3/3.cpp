﻿// 3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//某小学最近得到了一笔赞助，打算拿出其中一部分为学习成绩优秀的前5名学生发奖学金。期末，每个学生都有3门课的成绩:语文、数学、英语。
//先按总分从高到低排序，如果两个同学总分相同，再按语文成绩从高到低排序，如果两个同学总分和语文成绩都相同，那么规定学号小的同学 排在前面，这样，每个学生的排序是唯一确定的。
//任务：先根据输入的3门课的成绩计算总分，然后按上述规则排序，最后按排名顺序输出前五名名学生的学号和总分。注意，在前5名同学中，每个人的奖学金都不相同，因此，你必须严格按上述规则排序。
#include<stdio.h>
#include <iostream>
using namespace std;
struct grade
{
    int num=1;
    int chinese=0;
    int math=0;
    int english=0;
    int total_points = chinese + math + english;
};
void fun(grade x)
{

}
int main()
{
    int n;
    grade student[10];
    cout << "输入参加评选的学生人数(小于10)：";
    cin >> n;
    cout << endl;
    //输入学生信息
    for (int j = 1; j <= n; j++)
    {
        student[j].num = j;
        student[j].chinese = ;
        student[j].math = ;
        student[j].english = ;
    }
    //列总成绩表
    cout << "列出总成绩表（按学号顺序）：" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<chinese
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

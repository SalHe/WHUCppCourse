int main(int argc, char const *argv[])
{
    short int *p1;
    short score[10] = {84, 65, 77, 60, 88, 86, 92, 93, 70, 66};
    p1 = &score[0]; // p1 = X

    p1++; // p1 = X+2
    p1--; // p2 = X

    // 解释：
    // 指针类型本质上可以看成一个特殊的整型（该整型与机器地址具有相同的长度）
    // 对做自增运算会使该指针的地址变成与内容相邻同类型内容的下一个或上一个的地址
    // 比如：
    // 对于p1，做自增，则应移动指针使之指向下一个short（因为定义的指针为short int *，所以认为指针指向short），
    // 要指向下一个short，显然应该将指针对应的地址增2（short int占两个字节）

    // 与p1类似，但是增量绝对值大小不一样
    long int *p2;
    p2 = (long int *)&score[0]; // p2 = X
    p2++;   // p2 = X+8
    p2--;   // p2 = X

    return 0;
}

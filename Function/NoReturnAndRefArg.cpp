void swap(int &v1, int &v2)
{
    if (v1 == v2)
        return;
    int temp = v2;
    v2 = v1;
    v1 = temp;
    //void函数，此处隐式执⾏return语句，⽆需显式return语句
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    swap(a, b);
    return 0;
}

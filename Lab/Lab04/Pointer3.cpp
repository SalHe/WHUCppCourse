int main(int argc, char const *argv[])
{
    long int *p3, *p4;
    short score[10] = {84, 65, 77, 60, 88, 86, 92, 93, 70, 66};
    p3 = (long int *)&score[0];
    p4 = (long int *)(score + 4);

    // p4 - p3 = 8

    return 0;
}

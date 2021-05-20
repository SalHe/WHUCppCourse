int main(int argc, char const *argv[])
{
    short int *p1, *p2;
    short score[10] = {84, 65, 77, 60, 88, 86, 92, 93, 70, 66};
    p1 = &score[0]; // p1 = X
    p2 = score + 4; // p2 = X + 8

    return 0;
}

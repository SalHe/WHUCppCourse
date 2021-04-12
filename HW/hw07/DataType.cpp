class DataType
{
private:
    char ch;
    int integer;
    float floatNum;
public:
    DataType(char ch): ch(ch){}
    DataType(int integer): integer(integer){}
    DataType(float floatNum): floatNum(floatNum){}
    ~DataType();

    char getCh() const { return ch; }
    void setCh(char ch) { this->ch = ch; }

    int getInteger() const { return integer; }
    void setInteger(int integer) { this->integer = integer; }
    
    float getFloatNum() const { return floatNum; }
    void setFloatNum(float floatNum) { this->floatNum = floatNum; }

};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

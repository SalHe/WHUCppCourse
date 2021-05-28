class Document
{
protected:
    char *name;

public:
    Document(/* args */) {}
    ~Document() {}
};

class Book : public Document
{
protected:
    int pageCount;
};
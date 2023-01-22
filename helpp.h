class Add{
    int a,b;
    public:
    Add(int m,int n)
    {
        a=m;
        b=n;
    }

    void printit();
    friend Add jod(Add,Add);
    

};
class Cel
{   
    public:
        Cel *next;
        int value;

        Cel(int value, Cel* next);

        static int length(Cel* cel);

        static Cel* getAt(int i, Cel* cel);
};
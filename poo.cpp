#include <iostream>
#include <stdexcept>
#include <string>
#include <list>
#include <math.h>

class Chrono{
    private: 
        int s;

    public:
        Chrono(int s)
        {
            this->s = s;
        }

        void add(int s)
        {
            this->s += s;
        }

        Chrono clone()
        {
            return Chrono(this->s);
        }

        bool operator == (Chrono c)
        {
            return this->s == c.s;
        }

        Chrono operator + (Chrono c)
        {
            return Chrono(this->s + c.s);
        }

        int getTime()
        {
            return this->s;
        }

        std::string toString()
        {
            return std::to_string((this->s / 3600)) + "h " + std::to_string((this->s / 60) % 60) + "m " + std::to_string(this->s % 60) + "s";
        }
};

int pgcd(int a, int b)
{
    if(b == 0) return a;

    return pgcd(b, a%b);
}

class Fraction{
    private:
        int numerator;
        int denominator;

        void reduce()
        {
            int x = pgcd(this->numerator, this->denominator);
            this->numerator /= numerator;
            this->denominator /= denominator;
        }

    public:
        Fraction(int numerator, int denominator)
        {

            if(denominator <= 0)
            {
                throw std::invalid_argument("denominator must be greater than zero");
            }

            this->numerator = numerator;
            this->denominator = denominator;

            this->reduce();
        }

        std::string toString()
        {
            if(this->denominator == 1)
            {
                return std::to_string(this->numerator);
            }

            return std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
        }

        float toFloat()
        {
            return float(this->denominator) / float(this->numerator);
        }

        bool operator == (Fraction f)
        {
            return this->numerator * f.denominator == this->denominator * f.numerator;
        }

        bool operator < (Fraction f)
        {
            return this->numerator * f.denominator < this->denominator * f.numerator;
        }

        Fraction operator + (Fraction f)
        {
            return Fraction(
                this->numerator * f.denominator + f.numerator * this->denominator,
                this->denominator * f.denominator
            );
        }

        Fraction operator * (Fraction f)
        {
            return Fraction(
                this->numerator * f.numerator,
                this->denominator * f.denominator
            );
        }
};

class Interval{
    private:
        int a;
        int b;

    public:
        Interval(int a, int b)
        {
            this->a = a;
            this->b = b;
        }

        bool isEmpty()
        {
            return this->b < this->a;
        }

        int getLength()
        {
            return std::abs(this->b - this->a);
        }

        bool contains(int x)
        {
            return this->a < x && x < this->b;
        }

        bool operator == (Interval i)
        {
            return this->a == i.a && this->b == i.b;
        }

        bool operator < (Interval i)
        {
            return this->isEmpty() || (this->a < i.a && this->b < i.b);
        }

        Interval intersection(Interval i)
        {
            return Interval(std::min(this->a, i.a), std::max(this->b, i.b));
        }

        // union
        Interval operator + (Interval i)
        {
            return Interval(std::min(this->a, i.a), std::max(this->b, i.b));
        }
};

class Angle
{
    private:
        int angle;

        void verifyAngle()
        {
            this->angle %= 360;
        }

        float toRadiant()
        {
            return float(this->angle) * M_PI / 180.0f;
        }

    public:
        Angle(int angle)
        {
            this->angle = angle;
            this->verifyAngle();
        }

        std::string toString()
        {
            return std::to_string(this->angle) + " degrés";
        }

        void add(Angle a)
        {
            this->angle += a.angle;
            this->verifyAngle();
        }

        float cos()
        {
            return cosf(this->toRadiant());
        }

        float sin()
        {
            return sinf(this->toRadiant());
        }
};

class DbTab
{
    private:
        std::list<int> right;
        std::list<int> left;

    public:
        DbTab(std::list<int> right, std::list<int> left)
        {
            this->right = std::list<int> (right);
            this->left = std::list<int> (left);
        }

        int imin()
        {
            return -this->left.size();
        }

        int imax()
        {
            return this->right.size() - 1;
        }

        void append(int x)
        {
            this->right.push_back(x);
        }

        void prepend(int x)
        {
            this->left.push_back(x);
        }

        int& operator [] (int i)
        {
            if(i >= 0)
            {
                auto front = this->right.begin();
                std::advance(front, i);
                return *front;
            }

            auto front = this->left.begin();
            std::advance(front, -(i + 1));
            return *front;
        }

        std::string toString()
        {
            std::string tab;

            int imin = this->imin();
            int imax = this->imax();

            for(int i = imin; i < imax; i++) 
            {
                tab += std::to_string(this->operator[](i)) + ", ";
            }

            return "[" + tab.substr(0, tab.size()-2) + "]";
        }
};

int main()
{
    //Interval i = Interval(1, 17);

    std::list<int> a = std::list<int>{1, 2, 3, 4, 5};
    std::list<int> b = std::list<int>{6, 7, 8, 9, 10};

    DbTab t = DbTab(a, b);

    t[-4] = 88;

    std::cout << t.toString() << std::endl;
}
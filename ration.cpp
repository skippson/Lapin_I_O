#include <iostream>


class Rational{
    public:
        Rational() = default;
        Rational(const Rational &) = default;

       Rational(int32_t num_, int32_t denum_) : num(num_), denum(denum_){
            if((num < 0) && (denum < 0)){
                num *= -1;
                denum *= -1;
            }
            else if((num > 0) && (denum < 0)){
                num *= -1;
                denum *= -1;
            }

            if(denum == 0){
                throw std::invalid_argument("DIVISION BY ZERO");
            }
            gcd();
        } 

        ~Rational() = default;
        

        void setnum(int32_t num_){
            num = num_;
        }

        int32_t getnum() const {
            return num;
        }

        void setdenum(int32_t denum_){
            denum = denum_;
        }

        int32_t getdenum() const {
            return denum;
        }

        Rational& operator=(const Rational &) = default;

        Rational& operator*=(const Rational &rhs);
        Rational& operator+=(const Rational &rhs);
        Rational& operator-=(const Rational &rhs);
        Rational& operator/=(const Rational &rhs);
        Rational operator-() const; 



    

    private:
        int32_t num;
        int32_t denum;

        void gcd() {
            int dind;
            for(int i = 1; i <= num; i++){
                if((num % i == 0) && (denum % i == 0)){
                    dind = i;
                }
            }
            num /= dind;
            denum /= dind;
        }

};

std::ostream &operator<<(std::ostream &os, const Rational &rhs){
    return os << rhs.getnum() << '/' << rhs.getdenum();
}

Rational& Rational::operator+=(const Rational &rhs) {
    num = num * rhs.getdenum() + denum * rhs.getnum();
    denum *= rhs.getdenum();
    gcd();
    return *this;
}

Rational& Rational::operator-=(const Rational &rhs){
    num = num * rhs.getdenum() - denum * rhs.getnum();
    denum *= rhs.getdenum();
    gcd();
    return *this;
}

Rational& Rational::operator*=(const Rational &rhs){
    num *= rhs.getnum();
    denum *= rhs.getdenum();
    gcd();
    return *this;
}

Rational& Rational::operator/=(const Rational &rhs){
    num *= rhs.getdenum();
    denum *= rhs.getnum();
    gcd();
    return *this;
}

Rational operator+(const Rational &lhs, const Rational &rhs){
    return Rational(lhs) += rhs;
}

Rational operator-(const Rational &lhs, const Rational &rhs){
    return Rational(lhs) -= rhs;
}
Rational operator*(const Rational &lhs,const Rational &rhs){
    return Rational(lhs) *= rhs;
}

std::istream &operator>>(std::istream &is,  Rational &rhs){
    int numer, denumer;
    is >> numer >> denumer;
    rhs = Rational(numer, denumer);
    return is;

} 

bool operator==(const Rational &lhs, const Rational &rhs){
    return (lhs.getnum() * rhs.getdenum() == lhs.getdenum() * rhs.getnum());
}

bool operator!=(const Rational &lhs, const Rational &rhs){
    return !(lhs == rhs);
}

bool operator>(const Rational &lhs, const Rational &rhs){
    return (lhs.getnum() * rhs.getdenum() > lhs.getdenum() * rhs.getnum());
}

 bool operator<(const Rational &lhs, const Rational &rhs){
    return (rhs > lhs);
 }

 bool operator<=(const Rational &lhs, const Rational &rhs){
    return (lhs.getnum() * rhs.getdenum() <= lhs.getdenum() * rhs.getnum());
 }

 bool operator>=(const Rational &lhs, const Rational &rhs){
    return (lhs.getnum() * rhs.getdenum() >= lhs.getdenum() * rhs.getnum());
 }


int main(){
    Rational r1;
    std::cin >> r1;
    std::cout << r1;
    return 0;
}

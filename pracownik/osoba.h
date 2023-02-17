#include <string>

#ifndef OSOBA
#define OSOBA

class Osoba{
    public:
        /* constructors */
        explicit Osoba(std::string, int);
        Osoba() = default;

        /* setters, getters */
        void setImie(std::string);
        void setWiek(int);
        std::string getImie() const;
        int getWiek() const;
        
        /* methods */
        void edit();
        std::ostream &print(std::ostream&) const;
        std::istream &read(std::istream&);

    private:
        std::string imie{""};
        int wiek{0};
};

#endif
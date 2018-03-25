#include <iostream>

char textSource[] = "Fuck China";

class TextBlock {
public:
    TextBlock() : pText(textSource), bFetched(false) {}
    friend std::ostream &operator<<(std::ostream &ostr, TextBlock const &tb) {
        ostr << tb.pText;
        return ostr;
    }
    char &operator[](std::size_t pos) const {
        bFetched = true;
        return pText[pos];
    }

private:
    char *pText;
    mutable bool bFetched;
};

int main() {
    const TextBlock ctb;
    ctb[0] = 'J';
    std::cout << ctb << std::endl;
}

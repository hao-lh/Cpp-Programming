#include <iostream>
#include <string>

class TextBlock {
public:
    TextBlock() { text = "FUCK CHINA"; }

    char const &operator[](std::size_t pos) const {
        std::cout << "const version invoked" << std::endl;
        return text[pos];
    }
    char &operator[](std::size_t pos) {
        // char& operator[](std::size_t pos) {
        std::cout << "Non-const version invoked" << std::endl;
        // return text[pos];
        //
        // return const_cast<char &>(static_cast<TextBlock const
        // &>(*this)[pos]);
        return static_cast<char &>(const_cast<TextBlock const &>(*this)[pos]);
    }

    friend std::ostream &operator<<(std::ostream &ostr, TextBlock const &ctb) {
        ostr << ctb.text;
        return ostr;
    }

private:
    std::string text;
};

int main() {
    TextBlock const ctb;
    std::cout << ctb[0] << std::endl;

    TextBlock tb;
    std::cout << tb[0] << std::endl;
    tb[0] = 'f';
}

#include "snowman.hpp"
#include <array>

namespace ariel {
    const int min_dig = 1, max_dig = 4 , input_length=8, hex_base=10;
    const int hat=0, nose=1, left_eye=2, right_eye=3, left_hand=4, right_hand=5, torso=6, base=7;

    std::string print_hat(int type) {
        if (type == 1) {
            return "       \n _===_ \n";
        }
        if (type == 2) {
            return "  ___  \n ..... \n";
        }
        if (type == 3) {
            return "   _   \n  /_\\ \n";
        }
        return "  ___  \n (_*_) \n";

    }

    std::string print_eye(int type) {
        if (type == 1){
            return ".";
        }
        if (type == 2) {
            return "o";
        }
        if (type == 3) {
            return "O";
        }
        return "-";
    }

    std::string print_nose(int type) {
        if (type == 1) {
            return ",";
        }
        if (type == 2) {
            return ".";
        }
        if (type == 3) {
            return "_";
        }
        return " ";
    }

    std::string print_torso(int type) {
        if (type == 1) {
            return " : ";
        }
        if (type == 2) {
            return "] [";
        }
        if (type == 3) {
            return "> <";
        }
        return "   ";
    }

    std::string print_base(int type) {
        if (type == 1) {
            return " ( : ) \n";
        }
        if (type == 2) {
            return " (\" \") \n";
        }
        if (type == 3) {
            return " (___) \n";
        }
        return " (   ) \n";
    }


    std::string print_line_3(int nose, int left, int right, int x, int y) {
        std::string str;
        if (x == 2) {
            str = "\\";
        }
        else {
            str = " ";
        }
        str = str + "(";
        str = str + print_eye(left);
        str = str + print_nose(nose);
        str = str + print_eye(right);
        str = str + ")";
        if (y == 2) {
            str = str + "/";
        }
        else {
            str = str + " ";
        }
        str = str + "\n";
        return str;
    }

    std::string print_line_4(int x, int y, int torso) {
        std::string str;
        if (x == 1) {
            str = "<";
        }
        if (x == 2 || x == 4) {
            str = " ";
        }
        if (x == 3) {
            str = "/";
        }
        str = str + "(";
        str = str + print_torso(torso);
        str = str + ")";
        if (y == 1) {
            str = str + ">";
        }
        if (y == 2 || y == 4) {
            str = str + " ";
        }
        if (y == 3) {
            str = str + "\\";
        }
        str = str + "\n";
        return str;
    }

    std::string snowman(int input) {
        std::array<int,input_length> arr = {};
        for (int i = input_length-1; i >= 0; i--) {
            if (input % hex_base >= min_dig && input % hex_base <= max_dig) {
                arr.at(i) = input % hex_base;
                input /= hex_base;
            } else {
                throw std::out_of_range{"Invalid code"};
            }
        }
        if (input%hex_base!=0) {
            throw std::out_of_range{"Invalid code"};
        }
        std::string str = print_hat(arr.at(hat));
        str = str + print_line_3(arr.at(nose), arr.at(left_eye), arr.at(right_eye),arr.at(left_hand), arr.at(right_hand));
        str = str + print_line_4(arr.at(left_hand), arr.at(right_hand), arr.at(torso));
        str = str + print_base(arr.at(base));
        return str;
    }
}


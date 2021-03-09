#include "snowman.hpp"

namespace ariel {
    const int min_dig = 1, max_dig = 4 , input_length=8;

    std::string print_hat(int type) {
        if (type == 1) return "       \n _===_ \n";
        if (type == 2) return "  ___  \n ..... \n";
        if (type == 3)return "   _   \n  /_\\ \n";
        return "  ___  \n (_*_) \n";
    }

    std::string print_eye(int type) {
        if (type == 1) return ".";
        if (type == 2) return "o";
        if (type == 3) return "O";
        return "-";
    }

    std::string print_nose(int type) {
        if (type == 1) return ",";
        if (type == 2) return ".";
        if (type == 3) return "_";
        return " ";
    }

    std::string print_torso(int type) {
        if (type == 1) return " : ";
        if (type == 2) return "] [";
        if (type == 3) return "> <";
        return "   ";
    }

    std::string print_base(int type) {
        if (type == 1) return " ( : ) \n";
        if (type == 2) return " (\" \") \n";
        if (type == 3)return " (___) \n";
        return " (   ) \n";
    }


    std::string print_line_3(int nose, int left, int right, int x, int y) {
        std::string str;
        if (x == 2) str = "\\";
        else str = " ";
        str = str + "(";
        str = str + print_eye(left);
        str = str + print_nose(nose);
        str = str + print_eye(right);
        str = str + ")";
        if (y == 2) str = str + "/";
        else str = str + " ";
        str = str + "\n";
        return str;
    }

    std::string print_line_4(int x, int y, int torso) {
        std::string str;
        if (x == 1) str = "<";
        if (x == 2 || x == 4) str = " ";
        if (x == 3) str = "/";
        str = str + "(";
        str = str + print_torso(torso);
        str = str + ")";
        if (y == 1) str = str + ">";
        if (y == 2 || y == 4) str = str + " ";
        if (y == 3) str = str + "\\";
        str = str + "\n";
        return str;
    }

    std::string snowman(int input) {
        int arr[input_length] = {};
        for (int i = input_length-1; i >= 0; i--) {
            if (input % 10 >= min_dig && input % 10 <= max_dig) {
                arr[i] = input % 10;
                input /= 10;
            } else {
                throw std::out_of_range{"Invalid code"};
            }
        }
        if (input%10!=0) throw std::out_of_range{"Invalid code"};
        std::string str = print_hat(arr[0]);
        str = str + print_line_3(arr[1], arr[2], arr[3], arr[4], arr[5]);
        str = str + print_line_4(arr[4], arr[5], arr[6]);
        str = str + print_base(arr[7]);
        return str;
    }
}


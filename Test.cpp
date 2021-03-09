
#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;

#include <string>
#include <algorithm>

using namespace std;


TEST_CASE ("Good snowman code") {
    //checking all valid chars
            CHECK(snowman(11111111) == "       \n _===_ \n (.,.) \n<( : )>\n ( : ) \n"); //1
            CHECK(snowman(22222222) == "  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") \n"); //2
            CHECK(snowman(33333333) == "   _   \n  /_\\ \n (O_O) \n/(> <)\\\n (___) \n"); //3
            CHECK(snowman(44444444) == "  ___  \n (_*_) \n (- -) \n (   ) \n (   ) \n"); //4
    //more checks
            CHECK(snowman(11114411) == "       \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"); //5
            CHECK(snowman(44123211) == "  ___  \n (_*_) \n (. o)/\n/( : ) \n ( : ) \n"); //6
            CHECK(snowman(23332214) == "  ___  \n ..... \n\\(O_O)/\n ( : ) \n (   ) \n"); //7
            CHECK(snowman(42133241) == "  ___  \n (_*_) \n (..O)/\n/(   ) \n ( : ) \n"); //8
            CHECK(snowman(21441133) == "  ___  \n ..... \n (-,-) \n<(> <)>\n (___) \n"); //9
            CHECK(snowman(32224223) == "   _   \n  /_\\ \n (o.o)/\n (] [) \n (___) \n"); //10
            CHECK(snowman(13122343) == "       \n _===_ \n\\(._o) \n (   )\\\n (___) \n"); //11
            CHECK(snowman(34344122) == "   _   \n  /_\\ \n (O -) \n (] [)>\n (\" \") \n"); //12
            CHECK(snowman(22222222) == "  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") \n"); //13
            CHECK(snowman(12222212) == "       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") \n"); //14
            CHECK(snowman(31241321) == "   _   \n  /_\\ \n (o,-) \n<(] [)\\\n ( : ) \n"); //15
            CHECK(snowman(13412143) == "       \n _===_ \n\\(-_.) \n (   )>\n (___) \n"); //16
            CHECK(snowman(34211342) == "   _   \n  /_\\ \n (o .) \n<(   )\\\n (\" \") \n"); //17
            CHECK(snowman(24114324) == "  ___  \n ..... \n (. .) \n (] [)\\\n (   ) \n"); //18
            CHECK(snowman(41113422) == "  ___  \n (_*_) \n (.,.) \n/(] [) \n (\" \") \n"); //19
            CHECK(snowman(33241234) == "   _   \n  /_\\ \n (o_-)/\n<(> <) \n (   ) \n"); //20
            CHECK(snowman(22413124) == "  ___  \n ..... \n (-..) \n/(] [)>\n (   ) \n"); //21
            CHECK(snowman(22133422) == "  ___  \n ..... \n (..O) \n/(] [) \n (\" \") \n"); //22
            CHECK(snowman(12232212) == "       \n _===_ \n\\(o.O)/\n ( : ) \n (\" \") \n"); //23
            CHECK(snowman(12411243) == "       \n _===_ \n (-..)/\n<(   ) \n (___) \n"); //24
            CHECK(snowman(22431421) == "  ___  \n ..... \n (-.O) \n<(] [) \n ( : ) \n"); //25
            CHECK(snowman(33414324) == "   _   \n  /_\\ \n (-_.) \n (] [)\\\n (   ) \n"); //26
            CHECK(snowman(33414214) == "   _   \n  /_\\ \n (-_.)/\n ( : ) \n (   ) \n"); //27
            CHECK(snowman(41124131) == "  ___  \n (_*_) \n (.,o) \n (> <)>\n ( : ) \n"); //28
            CHECK(snowman(41232312) == "  ___  \n (_*_) \n\\(o,O) \n ( : )\\\n (\" \") \n"); //29
            CHECK(snowman(22441341) == "  ___  \n ..... \n (-.-) \n<(   )\\\n ( : ) \n"); //30
            CHECK(snowman(14224132) == "       \n _===_ \n (o o) \n (> <)>\n (\" \") \n"); //31
            CHECK(snowman(44414234) == "  ___  \n (_*_) \n (- .)/\n (> <) \n (   ) \n"); //32
            CHECK(snowman(12442234) == "       \n _===_ \n\\(-.-)/\n (> <) \n (   ) \n"); //33
}

TEST_CASE ("Bad snowman code") {
    //too short
    CHECK_THROWS(snowman(0)); //1
    CHECK_THROWS(snowman(12413)); //2
    //too short with invalid chars
    CHECK_THROWS(snowman(514)); //3
    CHECK_THROWS(snowman(124571)); //4
    //invalid chars
    CHECK_THROWS(snowman(13248414)); //5
    CHECK_THROWS(snowman(11403541)); //6
    //too long
    CHECK_THROWS(snowman(1233341241)); //7
    CHECK_THROWS(snowman(1324154121)); //8
    //too long with invalid chars
    CHECK_THROWS(snowman(1233351241)); //7
    CHECK_THROWS(snowman(1324154101)); //8
}


#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411)== "       \n _===_ \n (.,.) \n ( : ) \n ( : ) "); //1
    CHECK(snowman(44123211)== "  ___  \n (_*_) \n (. o)/\n/( : ) \n ( : ) "); //2
    CHECK(snowman(23332214)== "  ___  \n ..... \n\\(O_O)/\n ( : ) \n (   ) "); //3
    CHECK(snowman(42133241)== "  ___  \n (_*_) \n (..O)/\n/(   ) \n ( : ) "); //4
    CHECK(snowman(21441133)== "  ___  \n ..... \n (-,-) \n<(> <)>\n (___) "); //5
    CHECK(snowman(32224223)== "   _   \n  /_\\ \n (o.o)/\n (] [) \n (___) "); //6
    CHECK(snowman(13122343)== "       \n _===_ \n\\(._o) \n (   )\\\n (___) "); //7
    CHECK(snowman(34344122)== "   _   \n  /_\\ \n (O -) \n (] [)>\n (\" \") "); //8
    CHECK(snowman(22222222)== "  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "); //9
    CHECK(snowman(12222212)== "       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") "); //10
    CHECK(snowman(31241321)== "   _   \n  /_\\ \n (o,-) \n<(] [)\\\n ( : ) "); //11
    CHECK(snowman(13412143)== "       \n _===_ \n\\(-_.) \n (   )>\n (___) "); //12
    CHECK(snowman(34211342)== "   _   \n  /_\\ \n (o .) \n<(   )\\\n (\" \") "); //13
    CHECK(snowman(24114324)== "  ___  \n ..... \n (. .) \n (] [)\\\n (   ) "); //14
    CHECK(snowman(44444444)== "  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "); //15
    CHECK(snowman(41113422)== "  ___  \n (_*_) \n (.,.) \n/(] [) \n (\" \") "); //16
    CHECK(snowman(33241234)== "   _   \n  /_\\ \n (o_-)/\n<(> <) \n (   ) "); //17
    CHECK(snowman(22413124)== "  ___  \n ..... \n (-..) \n/(] [)>\n (   ) "); //18
    CHECK(snowman(22133422)== "  ___  \n ..... \n (..O) \n/(] [) \n (\" \") "); //19
    CHECK(snowman(12232212)== "       \n _===_ \n\\(o.O)/\n ( : ) \n (\" \") "); //20
    CHECK(snowman(12411243)== "       \n _===_ \n (-..)/\n<(   ) \n (___) "); //21
    CHECK(snowman(22431421)== "  ___  \n ..... \n (-.O) \n<(] [) \n ( : ) "); //22
    CHECK(snowman(33414324)== "   _   \n  /_\\ \n (-_.) \n (] [)\\\n (   ) "); //23
    CHECK(snowman(33414214)== "   _   \n  /_\\ \n (-_.)/\n ( : ) \n (   ) "); //24
    CHECK(snowman(41124131)== "  ___  \n (_*_) \n (.,o) \n (> <)>\n  ( : ) "); //25
    CHECK(snowman(41232312)== "  ___  \n (_*_) \n\\(o,O) \n ( : )\\\n (\" \") "); //26
    CHECK(snowman(22441341)== "  ___  \n ..... \n (-.-) \n<(   )\\\n ( : ) "); //27
    CHECK(snowman(14224132)== "       \n _===_ \n (o o) \n< (> <)>\n (\" \") "); //28
    CHECK(snowman(44414234)== "  ___  \n (_*_) \n (- .)/\n (> <) \n (   ) "); //29
    CHECK(snowman(12442234)== "       \n _===_ \n\\(-.-)/\n (> <) \n (   ) "); //30
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555)); //1
    CHECK_THROWS(snowman(123456789)); //2
    CHECK_THROWS(snowman(241-53421)); //3
    CHECK_THROWS(snowman(0)); //4
    CHECK_THROWS(snowman(35232124)); //5
    CHECK_THROWS(snowman(33241234 )); //6
    CHECK_THROWS(snowman(33234 )); //7
    CHECK_THROWS(snowman(33-241234)); //8
    CHECK_THROWS(snowman(1341214)); //9
    CHECK_THROWS(snowman(12220212)); //10
}

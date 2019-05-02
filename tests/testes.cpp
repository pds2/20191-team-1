#include "doctest.h"
#include "data.h"

TEST_CASE("1: Testa Construtor") {
    CHECK_NOTHROW(Data(30, 9, 1985));
}

TEST_CASE("1: Testa getters") {
    Data data = Data(30, 9, 1985);
    CHECK(data.get_dia() == 30);
    CHECK(data.get_mes() == 9);
    CHECK(data.get_ano() == 1985);
}

TEST_CASE("3: Testa data dd/mm/ano") {
    Data data = Data(30, 9, 1985);
    CHECK(data.get_data_curto() == "30/9/1985");
    Data data2 = Data(22, 02, 2002);
    CHECK(data2.get_data_curto() == "22/2/2002");
}

TEST_CASE("4: Testa data longo: 12 de janeiro de 2014") {
    Data data = Data(12, 1, 2014);
    CHECK(data.get_data_longo() == "12 de janeiro de 2014");
}
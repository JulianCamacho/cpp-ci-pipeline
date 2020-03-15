#include "CalculadoraTesting.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test{
    public:
        CalculadoraTesting obj;
        ClassDeclaration(){     //Crea objeto de testing
            obj;
        }
    };
}
TEST_F(ClassDeclaration, sumaTest){     // TEST_F: Método para probar algo, ClassDeclaration es el objeto a probar, sumaTest es el nombre de la prueba
    ASSERT_EQ(obj.sumar(3,5), 8);  // ASSERT_EQ: Ejecuta la prueba (arg: (método a probar, resultado esperado))
}
TEST_F(ClassDeclaration, restarTest){
    ASSERT_EQ(obj.restar(3,5), -2);
}
TEST_F(ClassDeclaration, multiplicarTest){
    ASSERT_EQ(obj.multiplicar(3,5), 15);
}
TEST_F(ClassDeclaration, dividirTest){
    ASSERT_EQ(obj.dividir(15,5), 3);
}

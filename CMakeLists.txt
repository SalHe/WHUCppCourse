project(CppCourse)

cmake_minimum_required(VERSION 3.16)

add_executable(Calcutor ./Calculator/Calculator.cpp)

add_executable(BasicType ./BasicType/main.cpp)
add_executable(ShortInteger ./BasicType/Integer/ShortInteger.cpp)
add_executable(RangeTest ./BasicType/Integer/RangeTest.cpp)
add_executable(LiteralConstant ./BasicType/Integer/LiteralConstant.cpp)

add_executable(FloatNumber ./BasicType/FloatNumber/main.cpp)

add_executable(SpecialChar ./BasicType/Char/SpecialChar.cpp)

add_executable(Boolean ./BasicType/Boolean/main.cpp)

add_executable(SimpleCalc ./Math/SimpleCalc.cpp)
add_executable(Compare ./Math/Compare.cpp)
add_executable(BitShift ./Math/BitShift.cpp)

add_executable(Assignment ./Assignment.cpp)
add_executable(Sizeof ./Sizeof.cpp)

add_executable(Lab01_Shape ./Lab/Lab01/main.cpp ./Lab/Lab01/Shape.hpp)



add_executable(HW04_Weather ./HW/hw04/Weather.cpp)
add_executable(HW04_MenuIf ./HW/hw04/MenuIf.cpp)
add_executable(HW04_MenuSwitch ./HW/hw04/MenuSwitch.cpp)
add_executable(HW04_FindPrimeFor ./HW/hw04/FindPrimeFor.cpp)
add_executable(HW04_FindPrimeWhile ./HW/hw04/FindPrimeWhile.cpp)
add_executable(HW04_FindPrimeDoWhile ./HW/hw04/FindPrimeDoWhile.cpp)
add_executable(HW04_GuessNumberWhile ./HW/hw04/GuessNumberWhile.cpp)
add_executable(HW04_GuessNumberDoWhile ./HW/hw04/GuessNumberDoWhile.cpp)
add_executable(HW04_Enum ./HW/hw04/Enum.cpp)
add_executable(HW04_ColorCombination ./HW/hw04/ColorCombination.cpp)


add_executable(HW05_CovertTemperature ./HW/hw05/CovertTemperature.cpp)
add_executable(HW05_IsPrimeNumber ./HW/hw05/IsPrimeNumber.cpp)
add_executable(HW05_FindDivisionProduct ./HW/hw05/FindDivisionProduct.cpp)
add_executable(HW05_Sum ./HW/hw05/Sum.cpp)
add_executable(HW05_Fibonacci ./HW/hw05/Fibonacci.cpp)

add_executable(HW06_Dog ./HW/hw06/Dog.cpp)
add_executable(HW06_Rectangle ./HW/hw06/Rectangle.cpp)
add_executable(HW06_Person ./HW/hw06/Person.cpp)
add_executable(HW06_Complex ./HW/hw06/Complex.cpp)

add_executable(Lab02_GetPower ./Lab/Lab02/GetPower.cpp)
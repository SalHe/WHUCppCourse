project(CppCourse)

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

add_executable(LabShape ./Lab/main.cpp ./Lab/Shape.hpp)



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
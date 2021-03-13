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
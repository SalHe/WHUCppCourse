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
# add_executable(HW06_Person ./HW/hw06/Person.cpp)
add_executable(HW06_Complex ./HW/hw06/Complex.cpp)

add_executable(Lab02_GetPower ./Lab/Lab02/GetPower.cpp)
add_executable(Lab02_Max1 ./Lab/Lab02/Max1.cpp)

add_executable(DefalueArg ./Function/DefaultArg.cpp)
add_executable(FunDefineAndUse ./Function/FunDefineAndUse.cpp)
add_executable(InlineFunc ./Function/InlineFunc.cpp)
add_executable(InlineFunc2 ./Function/InlineFunc2.cpp)
add_executable(NoReturnAndRefArg ./Function/NoReturnAndRefArg.cpp)
add_executable(Reload ./Function/Reload.cpp)
add_executable(Reload2 ./Function/Reload2.cpp)

add_executable(HW09_Cat ./HW/hw09/Cat.cpp)
add_executable(HW09_StaticLocal ./HW/hw09/StaticLocal.cpp)
add_executable(HW09_5_13 ./HW/hw09/5-13.cpp ./HW/hw09/5-13.h)

add_executable(Lab03_Constructor ./Lab/Lab03/Constructor.cpp)
add_executable(Lab03_ContructorWithDefaultArg 
                ./Lab/Lab03/ContructorWithDefaultArg/date.cpp
                ./Lab/Lab03/ContructorWithDefaultArg/date.h
                ./Lab/Lab03/ContructorWithDefaultArg/main.cpp
                )
add_executable(Lab03_Desctructor
                ./Lab/Lab03/Desctructor/date.cpp
                ./Lab/Lab03/Desctructor/date.h
                ./Lab/Lab03/Desctructor/main.cpp
                )
add_executable(Lab03_Complex ./Lab/Lab03/Complex.cpp)
add_executable(Lab03_StaticDataMember ./Lab/Lab03/StaticDataMember.cpp)
add_executable(Lab03_StaticDataMember2 ./Lab/Lab03/StaticDataMember2.cpp)
add_executable(Lab03_StaticFunctionMember ./Lab/Lab03/StaticFunctionMember.cpp)
add_executable(Lab03_ObserveVars ./Lab/Lab03/ObserveVars.cpp)
add_executable(Lab03_Person
                ./Lab/Lab03/Person.cpp
                ./HW/hw06/Person.cpp
                )

add_executable(HW10_IntArray ./HW/hw10/IntArray.cpp)
add_executable(HW10_ShowSizeof ./HW/hw10/ShowSizeof.cpp)

add_executable(HW12_SimpleCircle ./HW/hw12/SimpleCircle.cpp)
add_executable(HW12_CountLetter ./HW/hw12/CountLetter.cpp)
add_executable(HW12_ReverseString ./HW/hw12/ReverseString.cpp)

add_executable(Lab04_Pointer1 ./Lab/Lab04/Pointer1.cpp)
add_executable(Lab04_Pointer2 ./Lab/Lab04/Pointer2.cpp)
add_executable(Lab04_Pointer3 ./Lab/Lab04/Pointer3.cpp)
add_executable(Lab04_Pointer4ConstPointer ./Lab/Lab04/Pointer4ConstPointer.cpp)
add_executable(Lab04_SelectionSort ./Lab/Lab04/SelectionSort.cpp)
add_executable(Lab04_SelectionSortMore ./Lab/Lab04/SelectionSortMore.cpp)
add_executable(Lab04_Bank 
                    ./Lab/Lab04/Bank/Main.cpp
                    ./Lab/Lab04/Bank/Date.cpp
                    ./Lab/Lab04/Bank/Date.h
                    ./Lab/Lab04/Bank/Account.cpp
                    ./Lab/Lab04/Bank/Account.h
                    )
add_executable(Lab04_MatrixT ./Lab/Lab04/Final/MatrixT.cpp)
add_executable(Lab04_MatrixTByPointer ./Lab/Lab04/Final/MatrixTByPointer.cpp)
add_executable(Lab04_StringConcate ./Lab/Lab04/Final/StringConcate.cpp)
add_executable(Lab04_StringConcateByStdString ./Lab/Lab04/Final/StringConcateByStdString.cpp)
add_executable(Lab04_Person ./Lab/Lab04/Final/Person.cpp ./Lab/Lab04/Final/Person.h)

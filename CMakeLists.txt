cmake_minimum_required(VERSION 3.27)
project(FPT_CandC_ C)

set(CMAKE_C_STANDARD 11)

add_executable(FPT_CandC_
        Session1/vidu0/sum.c
        Session1/vidu0/sumy.c
        "Session 3/Circle.c"
        "Session 3/salary.c"
        "Session 4/sum3nums.c"
        "Session 4/rectangle.c"
        "Session 4/Cylinder.c"
        "Session 4/NetSalary.c"
        "Session 4/expression.c")

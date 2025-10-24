# CMakeList.txt : CMake project for AdvancedCpp, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (AdvancedCpp "AdvancedCpp.cpp" "Principles/LambdaExp.cpp" "headers/LearnPointers.h" "Principles/LearnPointers.cpp"  "headers/Employee.h" "Principles/LearnOOP.cpp" "headers/LearnOOP.h" "headers/Vehicule.h" "headers/LearnPolymorphism.h" "headers/LearnSTL.h" "Principles/LearnSTL.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AdvancedCpp PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(AdvancedCpp PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/headers")
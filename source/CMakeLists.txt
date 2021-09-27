cmake_minimum_required (VERSION 3.2)

set( proj SimulateInputs )

project (
    ${proj}
    VERSION 1.0.0
    LANGUAGES C
)

add_library (
    ${proj}Dll
    SHARED
    inputs.c
)

add_library (
    ${proj}Lib
    STATIC
    inputs.c
)

add_executable(
    ${proj}Bin
    main.c
)

target_link_libraries(
    ${proj}Lib
    user32.dll
)

target_link_libraries(
    ${proj}Bin
    ${proj}Lib
)
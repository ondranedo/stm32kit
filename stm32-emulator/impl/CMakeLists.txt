add_library(stm32-emulator-impl STATIC
        "stm32f4xx.c"
        "stm32f4xx.h"
        "core.h"
)

add_subdirectory(kit)
target_link_libraries(stm32-emulator-impl PUBLIC stm32-emulator-stm32)
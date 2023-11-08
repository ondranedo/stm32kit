if(LINUX)
    set(PLATFORM
            "platform/linux/console.c"
    )
else()
    message(FATAL_ERROR "Unsupported platform")
endif()

add_library(stm32-emulator-impl STATIC
        "stm32f4xx.c"
        "stm32f4xx.h"
        "core.h"
        "console.c"
        "console.h"
        ${PLATFORM}
)

add_subdirectory(kit)
target_link_libraries(stm32-emulator-impl PUBLIC stm32-emulator-stm32)
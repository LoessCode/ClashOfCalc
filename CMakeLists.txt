# CMakeList.txt : CMake project for ClashOfCalc, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("ClashOfCalc")

# Add source to this project's executable.
add_executable (ClashOfCalc "src/main.cpp"   "src/engine/SceneManager.h" "src/engine/SceneManager.cpp" "src/engine/Scene.h" "src/engine/Scene.cpp" "src/engine/Logger.cpp" "src/engine/Logger.h" "src/game/Menu.cpp" "src/game/Menu.h" "src/game/Game.h" "src/game/Game.cpp" "src/game/entity/Player.cpp" "src/game/entity/Entity.cpp" "src/game/entity/Entity.h" "src/game/entity/Player.h" "src/game/world/World.h" "src/game/world/World.cpp" "src/game/world/Tile.cpp" "src/game/world/Tile.h" "src/engine/Resourcer.h" "src/engine/Resourcer.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ClashOfCalc PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

# Dependencies
include(FetchContent)
set(RAYLIB_VERSION 5.0)
FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${RAYLIB_VERSION} EXACT
)

# Removes examples
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")


#Fetches content of raylib and adds to the project files
FetchContent_MakeAvailable(raylib)

#Links libraries to the project
target_link_libraries(${PROJECT_NAME} raylib)

# Copy the assets folder to the build directory
if (FALSE) #Fake Comment in Cmake
add_custom_command(
        TARGET ClashOfCalc POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                ${CMAKE_SOURCE_DIR}/src/engine/assets/watermark.png
                $<TARGET_FILE_DIR:${PROJECT_NAME}>/assets/watermark.png
)
endif()
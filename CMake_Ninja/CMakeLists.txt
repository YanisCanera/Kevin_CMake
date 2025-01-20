# CMakeList.txt : projet CMake pour CMake_Ninja, incluez la source et définissez
# la logique spécifique au projet ici.

find_package(SFML COMPONENTS system window graphics network audio CONFIG REQUIRED)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (CMake_Ninja "CMake_Ninja.cpp" "CMake_Ninja.h")



target_link_libraries(CMake_Ninja PUBLIC 
MyLibraryFolder
sfml-system
sfml-graphics
sfml-network
sfml-audio
sfml-window
)
target_include_directories(CMake_Ninja PUBLIC ${PROJECT_BINARY_DIR} ${PROJECT_SOURCE_DIR}/MyLibraryFolder/Include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMake_Ninja PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.

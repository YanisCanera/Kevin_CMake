# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.


add_library(MyLibraryFolder  "Sources/MyLibrary.cpp")
target_include_directories(MyLibraryFolder PUBLIC "Include/MyLibrary.h")

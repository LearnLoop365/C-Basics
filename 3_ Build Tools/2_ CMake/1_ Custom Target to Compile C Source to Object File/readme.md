# Custom Target to Compile C Source to Object File


## `src/CMakeLists.txt`
```
add_custom_target(foo ALL)

add_custom_command(
	TARGET foo
	COMMAND gcc -c -o a.o ${CMAKE_SOURCE_DIR}/a.c
)
```

`ALL` to Add the Target `foo` to the Default Target.

Variable `CMAKE_SOURCE_DIR` is the Path to the Top level of the Source Tree.


## `cmake` Command to Generate `makefile` Using `CMakeLists.txt`
```
cmake -G "Unix Makefiles" -Wno-dev -D CMAKE_TARGET_MESSAGES=off -S src -B build
```

`-Wno-dev` for Suppressing Warning about Missing `project()`

`-D CMAKE_TARGET_MESSAGES=off` for Disabling Report the Completion of Each Target

`-S src` for the Source Tree which Contains `CMakeLists.txt` File

`-B build` for the Build Tree


## `make` Command to Build the Default Target `foo` in the Generated `makefile`
```
cd build
make
```

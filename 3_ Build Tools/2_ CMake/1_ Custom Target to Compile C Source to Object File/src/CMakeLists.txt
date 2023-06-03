add_custom_target(foo ALL)

add_custom_command(
	TARGET foo
	COMMAND gcc -c -o a.o ${CMAKE_SOURCE_DIR}/a.c
)
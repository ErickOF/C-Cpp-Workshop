.PONY: main_c main_cpp

APP=inputs_outputs

main_c:
	@echo "Building C code..."
	@gcc ${APP}.c -o ${APP}.out
	@echo "Executing C code..."
	@./${APP}.out

main_cpp:
	@echo "Building C++ code..."
	@g++ ${APP}.cpp -o ${APP}.out
	@echo "Executing C++ code..."
	@./${APP}.out

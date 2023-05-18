all: clean build

clean:
	@echo "Cleaning up build 🧹"
	rm -rf build

generate:
	@echo "Generating files 🔨"
	cmake -H. -Bbuild -G Ninja

build:
	make generate
	@echo "Building project 🚀"
	cmake --build build
	
# Maya Plug-in Template
This is a template repo for creating a Maya node plugin. Once you create your project, just replace all instances of
`CustomNode` with your project/node name.

## Setup

### Install devkit
In order to build plugins for Maya, you need to install the devkit for the version of Maya you are using. To install the devkit, locate your OS and version [here](https://www.autodesk.com/developer-network/platform-technologies/maya).

### Setup devkit
Once you install the devkit, you need to set it up for your OS. You can find instructions [here](https://help.autodesk.com/view/MAYAUL/2023/ENU/?guid=Maya_SDK_Setting_up_your_build_html).

### Other Dependencies

#### Ninja
This project uses the ninja build system.
You can install ninja from the official website [here](https://github.com/ninja-build/ninja).

#### ccache
Install ccache to cache your local builds to speed up your development time.
```bash
brew install ccache
```

#### clang-format
Install clang-format to format your local code.
```bash
brew install clang-format
```

## Project scripts
```bash
// Removes build directory
make clean

// Formats code within the `include` and `src` folders
make format

// Generates makefile + build directory
make generate

// Runs make generate and builds project
make build

// Removes build directory and builds a new project
make
```

## Generating makefile
To generate the CMake file run one of the following commands.

Generate a Visual Studio project
```bash
cmake -H. -Bbuild -G "Visual Studio 16 2019 Win64"
```

Generates an xcode project
```bash
cmake -H. -Bbuild -G Xcode
```

Generates a makefile
```bash
cmake -H. -Bbuild -G "Unix Makefiles"
```

## Building the project
Once the makefile has been created you just need to run the following command to build the plug-in.
```bash
cmake --build build
```

## Launching the Maya Prompt (MacOS)
The MacOS version of Maya doesn't have an output window like Windows. To get around this, we will launch Maya from the terminal. To do this, run the following command:
```bash
/Applications/Autodesk/maya{version}/Maya.app/Contents/bin/maya -prompt
```


# f4se-no-console-spam

F4SE plugin that gets rid of the annoying console spam when loading a save.
This is caused by conditions using the same functions as console commands, which print their result to the console.

### Requirements
* [XMake](https://xmake.io) [2.8.2+]
* C++23 Compiler (MSVC, Clang?)

## Getting Started
```bat
git clone --recurse-submodules https://github.com/qudix/f4se-no-console-spam
cd f4se-no-console-spam
```

### Build
To build the project, run the following command:
```bat
xmake build
```

> ***Note:*** *This will generate a `build/windows/` directory in the **project's root directory** with the build output.*

### Build Output (Optional)
If you want to redirect the build output, set one of or both of the following environment variables:

- Path to a Fallout 4 install folder: `XSE_FO4_GAME_PATH`

- Path to a Mod Manager mods folder: `XSE_FO4_MODS_PATH`

### Project Generation (Optional)
If you want to generate a Visual Studio project, run the following command:
```bat
xmake project -k vsxmake
```

> ***Note:*** *This will generate a `vsxmakeXXXX/` directory in the **project's root directory** using the latest version of Visual Studio installed on the system.*

### Upgrading Packages (Optional)
If you want to upgrade the project's dependencies, run the following commands:
```bat
xmake repo --update
xmake require --upgrade
```

## Documentation
Please refer to the [Wiki](../../wiki/Home) for more advanced topics.

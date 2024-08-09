# ArrayFunctions Library

**ArrayFunctions** is a powerful C++ library that provides various functions for handling arrays. The library is still in the development phase and is currently only available for Windows. Support for Linux and macOS is planned for future releases.

## Getting Started

To use this library, you'll need to clone the repository and set it up on your system.

### Prerequisites

Before you can use the library, make sure you have Git installed on your system. You can download Git from [here](https://git-scm.com/).

## Running Without Git Installation

If you do not wish to install Git and only want to run your code, you can compile your C++ file directly using the following command:
```
g++ fileName.cpp -IarrayLibrary -LarrayLibrary -lmyArrayLib -o myprogram

```
This command will work in any terminal, whether it be Command Prompt or PowerShell.
You can simply run this single command and you can run cpp file with the library, then you don't need the compile.sh file.
Just include the header file and run this command and you are good to go.

### Installation

Follow these steps to clone the repository and set up the library:

1. Open a terminal or command prompt.
2. Clone the repository by running the following command:
   
 ```bash
  git clone https://github.com/your-username/your-repository.git .
  ```
After cloning, navigate to the repository folder.

### Including the Library
To use the functions provided by the library in your code, include the header file as follows:

```
#include <ArrayFunctions> 
// or 
#include "ArrayFunctions"

```
### Setting Up

After cloning the repository, you'll need to set the necessary permissions and compile your C++ files using the provided script.

Make the compile.sh script executable:

 ```bash
chmod +x compile.sh
 ```
Compile your C++ file with the following command:

```bash
./compile.sh fileName.cpp
```

Replace fileName.cpp with the name of your C++ file that you want to compile.


### Future Plans
Linux and macOS Support: The library will soon be available for Linux and macOS users.
Additional Features: More array functions and enhancements are planned for future updates.

### Contributing
Contributions are welcome! Feel free to fork this project and submit a pull request with your improvements.

This files explains task.json files for g++,clang++ and MSVC compiles.
**************************************************************
Visual Studio Code is used as Editor. 
Compilers include Mingw, Msvc, and Clang llvm.
First, add C/C++ extension to your VS code. 



************************ CONFIGURATION ************************************************
1) CONFIGURE Microsoft C++ Compiler in VS code
#Configure VS code for MSVC ( VS code needs to know where it can find the c++ compiler)
1- Install Microsoft visual studio.......(MSVC: the Microsoft C++ complier in Microsoft visual studio) 
2- Open Developer PowerShell 
3- In PowerShell Write "code ."          #(hit enter) 
 You could make a new directory in Powershell before writing code . as follows:
******
mkdir projects
cd projects
mkdir helloworld
cd helloworld
code .
******

####*****The "code ." command opens VS Code in the current working folder************************
4- Write cl.exe in the new terminal in VS code.

view>command palette> C++ UI.. change some settings: The version of c++ should change from 17 to 20.


************************ CONFIGURATION ************************************************
2) CONFIGURE WinLibs  C++ Compiler in VS code
1- Download Winlibs package including g++ and clang++ compilers.
2- Save the file in specific directory.
3- Set the directory path as path of environment variables.
Run the task with g++.exe 
Write the compiler directory in tasks.json
Run the task with clang++.exe
write the compiler directory in tasks.json.
  ***************************************************************************************


Put all the above configurations in tasks.json to be able to compile with all three compilers.

Good Luck! :)
 



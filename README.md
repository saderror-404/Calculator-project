# Calculator-project
This is a small calculator project I made for fun at the start of September 2026.

## Known bugs and limitations:

* You can type in numbers with line breaks for example
```
  1
  +
  1
```
  and it will work perfectly.

* No more than two numbers at a time with one operator are supported.

* Only operators +, -, * and / are supported.

* Only Real numbers are supported with no symbol support such as π.

## How to compile:

If you don't have g++ installed on Ubuntu/Debian systems you can install it from the terminal:
```
sudo apt update
sudo apt install g++
```
Compiling on Linux terminal:
```
cd /Path/To/Project
g++ calc.cpp -o calculator
```
## Run:
```
./calculator
```
## AI assistance:

LLM was used for making this project by giving me an example piece of code that I took pieces out of into my own code and used the LLM code as my building blocks for this project.

I don't know how to compile for other OSes but internet probably has some great tutorials for it.

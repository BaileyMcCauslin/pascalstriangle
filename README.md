# pascalstriangle
Basic program written in C that uses arrays to generate levels in pascals triangle.

The sole purpose of this project is to generate a simple mathematical model of pascals triangle in the command line using arrays.

This is by far not the best solution and is rather limiting. It is just a fun way of solving a problem in a different way. It adds a cool way to add neighboring values in a row level, displaying levels as they exist in the array state, and copying and moving values so they can be used in processes. 

However, for the purpose of this basic program I didn't bother with structs or making the arrays dynamic. That being said, I provided a file to help get your foot in the door if thats that direction you're heading. You will have to do the rest :)

As you probably guessed, the solution is not great overall because as the the levels get larger the more iteration we will have to do. Also, the command line can only hold so much text before everything becomes disstorted. 

How to use in the command line: 
1) Make sure you have the gcc compiler installed.
2) Go to the directory where the program is at and make sure all the files are in same directory( in this case all we will need is the maindriver).
3) run the command gcc -Wall(optional) maindriver.c -o triangle
4) Once it is done compiling, you can type 'triangle' into the command line and it will output as intended!
                               

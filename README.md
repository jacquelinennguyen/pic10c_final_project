# Mad Libs Game
Do you like funny stories? This game is for you. All you need to do is select a story, input words when prompted, click Ok, and voila! A story is generated for you. 

### Implementation
As of Thursday of Spring Break, the project is still in development. Because the idea of the game is relatively simple, I was thinking I could build the basic game first and focus on adding features such as file stream and simple search algorithms. I also considered the idea of using a database in order to store all of my stories instead of storing everything on the stack, but I think for the small amount of stories I have available, it was easier to have them all on the stack. If I were to expand on the game, I may consider using the database.

The tricky part was trying to figure out how to find and replace every instance of a particular type of word (eg. noun) with the user inputed values. The idea was to store instances of that particular type of word in its own vector, use the find_if function from the STD library, and a lambda function in order to replace every instance of such word type. With more time, I could make this function more efficent, memory-wise at least, by making an algorithm to store all user input into one vector for example.

I'm stuck on trying to get the file to read without having to copy the entire local path and also how to replace the placeholders in the story with the user input.

This is how the output is supposed to look like:

![Thanksgiving_story](https://github.com/jacquelinennguyen/pic10c_final_project/blob/master/documentation/Ui_Thanksgiving.PNG?raw=true)
![OurSolarSystem_story](https://github.com/jacquelinennguyen/pic10c_final_project/blob/master/documentation/Ui_SolarSystem.PNG?raw=true)

For QFile to work on your computer, you would have to copy your entire local path into QtCreator. I'm not sure why that is.

The MinGW compiler on my end is rather finnicky so sometimes the program will compile and sometimes it will not.

### Navigating the repository
In this repository, there are many files. Here is the general layout:

- `documentation`: contains stories and images of UI while in development
- `mad_libs\mad_libs`: MSVS2017 prototype of the game
  - Source.cpp
- `mad_libs_ui`: where the actual game is
  - mad_libs_ui.pro
  - mad_libs_ui.pro.user
  - madlibs.cpp
  - madlibs.h
  - madlibs.ui
  - main.cpp
  - story.cpp
  - story.h
  - story.ui
  - wordinput.cpp
  - wordinput.h
  - wordinput.ui
- .gitignore file
- README.md
- resources.txt: resources I found helpful
- solarsystem.txt
- thanksgiving.txt
- vacations.txt

### Resources I found helpful
- https://www.youtube.com/watch?v=VigUMAfE2q4
- https://www.youtube.com/watch?v=tY6nW3Wm3NE

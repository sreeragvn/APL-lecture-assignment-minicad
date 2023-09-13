# Mini cad
This is a minicad project done as a part of the APL lecture at TU Braunschweig, germany

## Exercise 1
To make yourself familiar with the current state of the application, create a UML class diagram of the
important classes to reflect the general application design. The diagram should identify the volatile
and stable parts (core) of the application. To create UML diagrams you can use online services like
draw.io or techdebate.io.
## Exercise 2
The class Square is already implemented and can be found in the model subdirectory. Your task is to
implement a new command (located in the subfolder ui/command) als well as a corresponding menu
entry (in the main.cpp file), which allows the user to create squares.
## Exercise 3
Add a new shape type of your choice, e.g. a triangle. The drawing method of the already existing
shapes will give you a good orientation for the implementation of the drawing method for the new
shape type. Add a menu entry to create objects of the new shape type as well. Keep in mind to
prompt the user for the necessary parameters to create the objects
## Exercise 4
Currently a user can translate any shape. In addition the user should also be able to scale any shape.
Implement the scaling behavior for all available shape types.
## Exercise 5
The command pattern is a proven way to implement an undo/redo mechanism. Extend the already
existing CommandStack class (the invoker) to support the undo/redo mechanism accordingly.
## Final Result
A user of the mini-cad app should be able to create circles, squares and a third shape type of your
choice. He or she can translate and scale shapes. Additionally the user should able to undo and redo
all of the changes.

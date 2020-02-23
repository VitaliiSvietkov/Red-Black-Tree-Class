# Red-Black-Tree-Class
Realisation of some basic algorithms of Red-Black trees in C++ (insert, search, print).
I am not sure how this implementation is good taking into account its efficiency, but it works.
0 is black and 1 is red.

Insert method adds a simple leaf that stores an integer data and pointers to left, right and parent leafs.

Search method finds the leaf that stores the needed integer value and returns the pointer to that leaf (if there
is no such value in the tree, then the nullptr returns)

Print method outputs all elements, showing their data, color and the same parameters for the parent element.

There is also a getter of root leaf for some extra needs.

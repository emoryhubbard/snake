# snake
This is the code from my video demonstrations of Object-Oriented Programming (OOP) principles in C++.

# Tower Brain-Blast

Why? Building a Board (a grid) of single letters
is next--the world for a game.

A Board is just a bunch of columns
(or "towers") put together:

  Tower		Board
	a	->	a a a a
	a	->	a a a a
	a	->	a a a a
	a	->	a a a a

In this brain-blast, you'll just focus on making
the tower on the left side.

How big should the tower be? 5 letters tall?
100 letters tall?

Make it possibly to specify it! Here's some options:

* A Tower class with a constructor, eg. myTower = Tower(5)

* A Tower class with a setHeight() function, eg.
	myTower.setHeight(5)
	
Finally, make a function that prints the tower,
eg. myTower.print():

Output:
	a
	a
	a
	a
	
Input:
	(nothing)



//***************************

How to make a class with functions and a
constructor (if you choose to use a constructor):

	int main() {
		class Person {
		public:
			string firstName;

			Person(string firstName) {
				this->firstName = firstName;
			}
			void printName() {
				cout << firstName;
			}
		};

		Person p = Person("Joe");
		p.printName();

		return 0;
	}

# Random Access Tower

Watch this video first to see how to add an
element to any position (or index) in a vector:

https://1drv.ms/v/s!Am9kRqsUWAaThZVrLZ7O_53YzORBWA?e=3h8ug1

Then, make a function for the Tower class that can
put a letter at any position, eg. setLetter("X", 7).

In the next Brain Blast, this will help you
make an editable board for a game world.

Then, test it! Use your new setLetter() function to
add the letters to spell out your own name
somewhere in the Tower.

Then, print the Tower.

Output:
a
a
e
m
o
r
y
a
a
a
a
a

# Board Brain Blast

Now that you have the Tower class, you will be working on the 
object-oriented design of your own kind of game that utilizes it.

I chose to do demonstrate how
to begin designing a snake game. You may choose any kind of game you
want that can exist in a simple grid system, using these videos as
inspiration for your own process.

# OOP Demo Video Part 1
<a href="https://1drv.ms/v/s!Am9kRqsUWAaThZZHxItA6S_jW6hJrw?e=aJsTwg">https://1drv.ms/v/s!Am9kRqsUWAaThZZHxItA6S_jW6hJrw?e=aJsTwg<a>

# OOP Demo Video Part 2
<a href="https://1drv.ms/v/s!Am9kRqsUWAaThZZIgLlPdE1a4z8u-g?e=W0kRC8">https://1drv.ms/v/s!Am9kRqsUWAaThZZIgLlPdE1a4z8u-g?e=W0kRC8<a>

In the end, you should have a Board class (called Grid
in the videos) that can be printed to the screen.

Output:
a a a a a a a
a a a a a a a
a a a a a a a
a a a a a a a

# Set Letter Brain Blast

Watch these 2 videos first to see how to add an
letter to any position in the Board.

https://1drv.ms/v/s!Am9kRqsUWAaThZcVHn9zs4-VCTQKxA?e=gco3gc

https://1drv.ms/v/s!Am9kRqsUWAaThZcdN8ucN15G5MxZjw?e=Wc9eKV

Then, make a function for the Board class (called Grid
in the video) that can put a letter at any position,
eg. setLetter(1, 1, "M").

Work on this function for about 10 minutes or so.
Then watch this solution video if you need to:

https://1drv.ms/v/s!Am9kRqsUWAaThZcjY5eDg0r5MFIERg?e=fhxA0n

Then, test it! Use your new setLetter() function to
add the letters to spell out your own name
DIAGONALLY somewhere in the Board.

Then, print the Board.

Now you have your editable game world! In the next
Brain Blast, we will be making a full game.

Output:
e a a a a a
a m a a a a
a a o a a a
a a a r a a
a a a a y a


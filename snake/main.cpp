#include <iostream>
#include <vector>

using namespace std;

int main() {
	class Food {

	};
	class Snake {

	};
	class Letter {
	public:
		string value;
		void setValue(string value) {
			this->value = value;
		}
		string getValue() {
			return value;
		}
	};
	class Row {
	public:
		int width;
		vector<Letter> letters;
		Row(int width) {
			this->width = width;
			for (int i = 0; i < width; i++) {
				Letter letter;
				letter.setValue("E");
				letters.emplace_back(letter);
			}
		}
		void print() {
			for (auto letter : letters) {
				cout << letter.getValue();
			}
		}
	};
	class Grid {
	public:
		int width;
		int height;
		vector<Row> rows;

		Grid(int width, int height) {
			this->width = width;
			this->height = height;
			rows = vector<Row>();
			for (int i = 0; i < height; i++) {
				Row row = Row(width);
				rows.emplace_back(row);
			}
		}
		void print() {
			for (auto row : rows) {
				row.print();
				cout << "\n";
			}
		}
	};
	class Game {
	public:
		Snake snake;
		vector<Food> foods;
		Grid grid = Grid(20, 20);

		void start() {
			grid.print();
		}
	};

	Game myGame;

	myGame.start();

	return 0;
}
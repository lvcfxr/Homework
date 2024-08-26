#include <iostream>


class LightFigure {
public:
	virtual void draw() {
		std::cout << ' ' << std::endl;
	}
};

class Point : public LightFigure {
	void draw() override{
		std::cout << '.' << std::endl;
	}
};

class Line : public LightFigure {
	void draw() override {
		std::cout << '-' << std::endl;
	}
};

class Circle : public LightFigure {
	void draw() override {
		std::cout << '0' << std::endl;
	}
};

class Polygon : public LightFigure {
	void draw() override{
		std::cout << "<>" << std::endl;
	}
};

int main() {
	LightFigure* point = new Point();
	LightFigure* line = new Line();
	LightFigure* circle = new Circle();
	LightFigure* polygon = new Polygon();

	point->draw();
	line->draw();
	circle->draw();
	polygon->draw();

	
	delete point;
	delete line;
	delete circle;
	delete polygon;

	return 0;
}

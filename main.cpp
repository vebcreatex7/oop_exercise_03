#include <vector>
#include <string>
#include <cstring>
#include "figure.h"
#include "point.h"
#include "rectangle.h"
#include "trapezoid.h"
#include "rhombus.h"

int main()
{	
	std::vector<TFigure*> v;
	int i, j;
	TPoint p1, p2, p3, p4;
	double S;
	std::cout << "Enter:\nadd - to add figure\ndelete - to delete figure\nfigure - to print square and center of figure\ntotal - to print total area of all figures\nexit - to complite programme execution\nhelp - to show this manual\n";
	std::string cmd;
	while (true) {
		std::cin >> cmd;
		if (cmd == "add") {
			std::cout << "chose figure:\n1 - rectangle\n2 - trapezoid\n3 - rhombus\n";
			std::cin >> i;
			std::cin >> p1 >> p2 >> p3 >> p4;
			TFigure* f;
			if (i == 1) {
				f = new TRectangle(p1, p2, p3, p4);
				v.push_back(f);
			} else if (i == 2) {
				f = new TTrapezoid(p1, p2, p3, p4);
				v.push_back(f);	
			} else if (i == 3) {
				f = new TRhombus(p1, p2, p3, p4);
				v.push_back(f);
			} else {
				std::cout << "wrong index, try again\n";
				continue;
			}
		} else if (cmd == "delete") {
			std::cout << "enter index\n";
			std::cin >> i;
			if (i >= v.size() || i < 0) {
				std::cout << "wrong index, try again\n";
				continue;
			} else {
				v.erase(v.begin() + i);
			}
		} else if (cmd == "figure") {
			for (auto tmp : v) {
				std::cout << "Center: " << tmp->Center() << "\n";
				std::cout << "Area: " << tmp->Square() << "\n";

			}
		} else if (cmd == "total") {
			double S = 0;
			for (auto tmp : v) {
				S += tmp->Square();

			}
			std::cout << "total area: " << S << "\n";
		} else if (cmd == "help") {
			std::cout << "Enter:\nadd - to add figure\ndelete - to delete figure\nfigure - to print square and center of figure\ntotal - to print total area of all figure\nexit - to complite programme execution\nhelp - to show this manual\n";
		} else if (cmd == "exit") {
			
			break;
		} else {
			std::cout << "wrong comand, try again\n";
			continue;
		}

	}


	
}
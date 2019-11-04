#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

#include <cmath>


class TRectangle : public TFigure {
private:
	TPoint a, b, c, d;
public:
	double Square() const override;
	TPoint Center() const override;
	void Print(std::ostream&) const override;
	TRectangle();
	TRectangle(const TPoint p1, const TPoint p2, const TPoint p3, const TPoint p4);
};

#endif 
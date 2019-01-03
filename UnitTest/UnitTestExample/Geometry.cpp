#include "Geometry.h"

Rectangle::Rectangle(float length, float width)
{
	m_length = length;
	m_width = width;
}

Rectangle::~Rectangle()
= default;

float Rectangle::getLength() const
{
	return m_length;
}

void Rectangle::setLength(float length)
{
	m_length = length;
}

float Rectangle::getWidth() const
{
	return m_width;
}

void Rectangle::setWidth(float width)
{
	m_width = width;
}

Square::Square(float sideLength)
	: Rectangle(sideLength, sideLength)
{
}

Square::~Square()
= default;

void Square::setLength(float length)
{
	m_length = length;
	m_width = length;
}

void Square::setWidth(float width)
{
	m_length = width;
	m_width = width;
}

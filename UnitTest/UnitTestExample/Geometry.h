#pragma once

class Rectangle
{
public:
	explicit Rectangle(float length, float width);
	~Rectangle();

	/* Length access */
	float getLength() const;
	virtual void setLength(float length);

	/* Width access */
	float getWidth() const;
	virtual void setWidth(float width);

protected:
	float m_length;
	float m_width;
};

class Square : public Rectangle
{
public:
	explicit Square(float sideLength);
	~Square();

	void setLength(float length) override;
	void setWidth(float width) override;
};
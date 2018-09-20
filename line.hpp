#ifndef LINE_H
#define LINE_H

class Line
{
public:
    Line();
    Line(double length);
    ~Line();
    void setLength(double length);
    double getLength() const { return length; }
private:
    double length;
};

#endif /* LINE_H */

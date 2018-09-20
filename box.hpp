#ifndef BOX_H
#define BOX_H

class Box
{
public:
    double length;
    double breadth;
    double height;

    double getVolume();
    void setLength(double length);
    void setBreadth(double breadth);
    void setHeight(double height);
};

#endif /* BOX_H */

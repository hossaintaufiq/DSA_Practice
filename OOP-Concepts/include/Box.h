#ifndef BOX_H
#define BOX_H


class Box
{
  private:
      double height,width,depth;
  public:
    Box(double height, double width, double depth);
    double volume();
};

#endif // BOX_H

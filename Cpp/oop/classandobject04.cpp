/*
Define a class Circle with radius as its property. Provide setRadius() and
getRadius() methods. Also define methods to return area and circumference of
circle.
*/
#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    
    public:
        void setRadius(int r)
        {
            radius= r;
        }
        int getRadius()
        {
            return radius;
        }
        float getArea()
        {
            return 3.14*radius*radius;
        }
        float getCircumference()
        {
            return 2*3.14*radius;
        }
};
int main()
{
    Circle C1;
    C1.setRadius(7);
    // float radius,area,circumference;
    cout<<"Radius of circle is "<<C1.getRadius()<<endl;
    cout<<"Area of circle is "<<C1.getArea()<<endl;
    cout<<"Circumference of circle is "<<C1.getCircumference()<<endl;
}
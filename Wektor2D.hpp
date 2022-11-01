class Wektor2D
{
    public:
    Wektor2D()
    {
        setX(0.0);
        setY(0.0); 
    };
    Wektor2D(double in_x, double in_y) //Konstruktor
    {
        
        setX(in_x);
        setY(in_y);
    };
//setter getter
    void setX(double w_x) {x = w_x;}
    double getX() {return x;}
    void setY(double w_y) {y = w_y;}
    double getY() {return y;}
    

    private:
    double x,y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    double x1,y1,x2,y2;
    x1= w1.getX();
    x2= w2.getX();
    y1= w1.getY();
    y2= w2.getY();
    return Wektor2D{x1+x2, y1+y2};
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    double x1,y1,x2,y2;
    x1= w1.getX();
    x2= w2.getX();
    y1= w1.getY();
    y2= w2.getY();
    return (x1*x2)+(y1*y2);
}
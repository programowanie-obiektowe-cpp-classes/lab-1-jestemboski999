class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
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
    int x,y;
};

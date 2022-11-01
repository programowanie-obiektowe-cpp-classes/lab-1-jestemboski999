class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    public:
    Wektor2D(){++num_wek;};
    Wektor2D(double in_x, double in_y) //Konstruktor
    {
        ++num_wek;
        setX(in_x);
        setY(in_y);
        print();
    }
    ~Wektor2D() //Destruktor
    {
        --num_wek;
        std::cout << "Destruktor" << " " << x << " " << y << " "<< "Istnieje wek " << num_wek << std::endl;
    }

    void setX(double w_x) {x = w_x;}
    double getX() {return x;}
    void setY(double w_y) {y = w_y;}
    double getY() {return y;}

    static int populacja(){return num_wek;}
    double norm() { return (sqrt((x*x)+(y*y))); }
    void print(){std::cout<< "x=" << x <<"  "<< "y=" << y << " " << "istnieje wek:" << num_wek <<  std::endl;}
    //Informer i;

    private:
    int x,y;
    static int num_wek;
};

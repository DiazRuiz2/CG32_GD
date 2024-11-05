#include<iostream>
#include<utility>

using namespace std;

/*
    Matematico: 40x40
    Grafico: 200x100
*/



const double  x_M = 40;
const double y_M = 40;
const double x_G = 200;
const double y_G = 100;



pair<double,double> Math_to_Graph(double x, double y){

    double percent_x = (x+x_M/2)/x_M;
    
    double percent_y = (-y+y_M/2)/y_M;

    //   cout << percent_x << " " << percent_y << endl;

    

    pair<double,double> result;
    result.first = percent_x*x_G;
    result.second = percent_y*y_G;

    return result;

}

int main(){
    double x,y;
    cout << "M_x: " ;
    cin >> x;
    cout << endl << "M_y: ";
    cin >> y;
    pair<double,double> example = Math_to_Graph(x,y);
    cout << "G_x: " << example.first << " G_y: " << example.second << endl;


}

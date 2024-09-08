#include<stdio.h>
#include <math.h>
double distanceFormula(double x1, double y1,double x2,double y2){
    double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return distance;
}
double askForUserInput(){
    double userInput;
    scanf("%lf", &userInput);
    return userInput;
}
double CalculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double distance =  distanceFormula(x1, y1, x2, y2); 
    printf("x1 = %lf ; y1= %lf", x1,y1);
    printf("x2 = %lf ; y2= %lf", x2,y2);
    printf("The distance between the two points is %lf is computed\n", distance);
    return distance;
}

double CalculatePerimeter() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double distance = distanceFormula(x1, y1, x2, y2);
    double r = distance/2;
    double perimeter = 2*3.14*r ;
    printf("x1 = %lf ; y1= %lf", x1,y1);
    printf("x2 = %lf ; y2= %lf", x2,y2);
    printf("The perimeter of the city encompassed by your request is %lf is computed\n", perimeter);
    return 4.0;
}
double CalculateArea() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double distance =  distanceFormula(x1, y1, x2, y2); 
    double r= distance/2;
    double area = 3.14*pow(r, 2);
    printf("x1 = %lf ; y1= %lf", x1,y1);
    printf("x2 = %lf ; y2= %lf", x2,y2);
    printf("The area of the city encompassed by your request is %lf \n", area);
    return 2.0;
}
double CalculateWidth() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double width =  distanceFormula(x1, y1, x2, y2); 
    printf("x1 = %lf ; y1= %lf", x1,y1);
    printf("x2 = %lf ; y2= %lf", x2,y2);
    printf("The width of the city encompassed by your request is %lf \n",width );
    return 2.0;
}
double CalculateHeight() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double height =  distanceFormula(x1, y1, x2, y2); 
    printf("x1 = %lf ; y1= %lf", x1,y1);
    printf("x2 = %lf ; y2= %lf", x2,y2);
    printf("The height of the city encompassed by your request is %lf \n", height);
    return 2.0;
}


int main(int argc, char **argv) {
    CalculateDistance();
    CalculatePerimeter();
    CalculateArea();
    CalculateWidth();
    CalculateHeight();
    return 0;
}

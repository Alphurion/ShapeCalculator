#include "Shape.h"
#include "fileParse.h"

const float pi = 3.141592;
const int circle = 360;
const std::string circleChoices = R"(
What part of a circle do you want to calculate?
1. Radius
2. Circumference
3. Area
)";

const int argumentCount = 5;
extern float triangleCalculation(char *[], char *[], float, float, float){}
extern float squareCalculation(char *[], char *[], int, int, int){} //remvove?
extern float circleCalculation(char *[], char *[], float, float, float){}
extern float polygonCalculation(char *[], char *[]){}
extern float inFile(){}

float printOptions()
{

}
/* 
Type "NULL" if value is unknown. 
3 unknown values instantly error 
Triangle ./main [Theta Angle] [adj] [opp] [hyp] 
Circle ./main [Circumference] [Radius] [Area] 
Polygon ./main [csv file] contains [interrior angle 1] [Side length 1] [interior angle n] [side length n] 
polygon may be changed 
*/

int main(int argc, char* argv)
{

}
#include <stdio.h>

double weightedAverage(double gradeA, double weightA, double gradeB, double weightB){
    double average = ((gradeA*weightA)+(gradeB*weightB))/(weightA+weightB);

    return average;
}

int main(){
    double weightA = 6;
    double weightB = 4;
    double gradeA, gradeB;
    printf("Type the first and second grade: ");
    scanf("%lf%lf", &gradeA, &gradeB);
    printf("%lf", weightedAverage(gradeA, weightA, gradeB, weightB));
    return 0;
}
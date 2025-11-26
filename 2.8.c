#include <stdio.h>

int main() {
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for ( i = 0; i < N; i++) {
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4 ){
            break;
        }
        
        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        if (score >= 50 && attendancePercent >= 75) {
            passCount++;
            printf("Student %d : Pass\n", studentId);
        }else if (score < 50 && attendancePercent <75) {
            failCount++;
            printf("Student %d : Fail - Both Score and Attendance\n", studentId);
        }else if (score < 50) {
            failCount++;
            printf("Student %d : Fail - Low Score\n",studentId);
        } else if (attendancePercent < 75) {
            failCount++;
            printf("Student %d : Fail - Low Attendance %.2f\n",studentId,attendancePercent);
        }
    }

    printf("\n--Summary--\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total Fail: %d\n", failCount);

    return 0;
    
}

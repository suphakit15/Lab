#include<stdio.h>

struct Student {
    char name[50];
    int studentID;
    float score;
};

int main() {
    int N, i;
    float totalScore = 0.0;
    float AverageScore;


    if (scanf("%d", &N) != 1) {
        return 1;
    }
    struct Student Students[N];
    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", &Students[i].studentID, &Students[i].score, Students[i].name) != 3) {
            return 1;
        }
        totalScore = totalScore + Students[i].score;
        AverageScore = totalScore / N;
    }

    printf("Average Score: %.2f\n", AverageScore);
    
    return 0;

}
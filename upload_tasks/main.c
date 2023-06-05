#include <stdio.h>
#include <stdlib.h>

struct task {
    char description[100];
    int day;
    int month;
    int year;
};

int compare_dates(const void *a, const void *b) {
    struct task *t1 = (struct task *)a;
    struct task *t2 = (struct task *)b;
    if (t1->year != t2->year) {
        return t1->year - t2->year;
    } else if (t1->month != t2->month) {
        return t1->month - t2->month;
    } else {
        return t1->day - t2->day;
    }
}

int main() {
    int n;
    printf("enter the quantity of tasks: ");
    scanf("%d", &n);

    struct task tasks[n];

    for (int i = 0; i < n; i++) {
        printf("enter the description of the task %d: ", i+1);
        scanf("%s", tasks[i].description);
        printf("enter the date of the task %d (dd/mm/yyyy): ", i+1);
        scanf("%d/%d/%d", &tasks[i].day, &tasks[i].month, &tasks[i].year);
    }

    qsort(tasks, n, sizeof(struct task), compare_dates);

    printf("\ntasks organized for date:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d/%d/%d\n", tasks[i].description, tasks[i].day, tasks[i].month, tasks[i].year);
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct Student
{
    char name[11];
    int kor;
    int eng;
    int mat;
} Student;

int comp(const Student *A, const Student *B)
{
    if (A->kor != B->kor)
        return A->kor > B->kor;
    else if (A->eng != B->eng)
        return A->eng < B->eng;
    else if (A->mat != B->mat)
        return A->mat > B->mat;
    else
        return (strcmp(A->name, B->name) < 0);
}

int main(void)
{
    int N;
    scanf("%d", &N);
    vector<Student *> v;
    for (int i = 0; i < N; i++)
    {
        Student *s = (Student *)malloc(sizeof(Student));
        scanf("%s %d %d %d", s->name, &(s->kor), &(s->eng), &(s->mat));
        v.emplace_back(s);
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < N; i++)
        printf("%s\n", v[i]->name);

    return 0;
}
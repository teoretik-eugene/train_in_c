#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct worker{
    char name[100];
    char second_name[100];
    int hours;
    int result;
};
void show_info(struct worker *a){       // ����� ����� const struct?
    printf("��������� ������: \n");
    printf("���: %s\n", a->name);                // printf("%s", a->name);
    printf("�������: ");printf(a->second_name);printf("\n");
    printf("�������� � ���: ");printf("%d", a->result);printf("\n");

};
void fill(struct worker *a){      /*!!!*/
    printf("������� ���: ");
    scanf("%s", a->name);
    printf("������� �������: ");
    scanf("%s", a->second_name);
    printf("������� ������������ ����: ");
    scanf("%d", &(a->hours));
    //int result_work = (a->hours) * 4; (a->result) = result_work;
    a->result = a->hours * 4;
    printf("�������� � ���: "); printf("%d", a->result); printf("\n");
    printf("------------------------------\n");
};

int main(){
    setlocale(LC_ALL, "Rus");
    int count;
    printf("������� ���������� ���������: ");scanf("%d", &count);
    printf("��������� ���������: \n"); printf("------------------------------\n");
    struct worker allworkers[count];


    /*for(int i=0; i<count; i++){
        printf("������� ���: "); scanf("%s", &allworkers[i].name);// "->" ?    // ������ ������ ����� ������
        printf("������� �������: "); scanf("%s", &allworkers[i].second_name);
        printf("������� ������������ ����: "); scanf("%d", &allworkers[i].hours);
        int result_work = allworkers[i].hours * 5; allworkers[i].result = result_work;
        printf("�������� � ���: "); printf("%d", result_work); printf("\n");
        printf("------------------------------\n");

    }*/
    for (int i=0; i<count; i++){
        fill(&allworkers[i]);
    }

    printf("�������� ����� ���������: "); int number; scanf("%d", &number);

    show_info(&allworkers[number]);

    return 0;
}

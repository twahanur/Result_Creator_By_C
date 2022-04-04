#include <stdio.h>
int main()
{
    int TotalClass, PresentClass;
    float AttendanceParcent, CT1_Total, CT1_Mark, CT2_Total, CT2_Mark, CT3_Total, CT3_Mark, CT1, CT2, CT3, CT_Mark,Mid_Mark, Final_Mark, Attendance_Mark, Total;

    printf("Input Total class number: ");
    scanf("%d", &TotalClass);

    printf("\nInput Present class number: ");
    scanf("%d", &PresentClass);

    AttendanceParcent = ((float)PresentClass / TotalClass) * 100;
    printf("Attendance %.2f", AttendanceParcent);

    if (AttendanceParcent > 60)
    {
        Attendance_Mark = (((AttendanceParcent - 60) * 4) / 30) + 6;

        printf("Inter First CT Total Mark: ");
        scanf("%f", &CT1_Total);

        printf("Inter Your First CT Mark: ");
        scanf("%f", &CT1_Mark);

        printf("Inter second CT Total Mark: ");
        scanf("%f", &CT2_Total);

        printf("Inter Your second CT Mark: ");
        scanf("%f", &CT2_Mark);

        printf("Inter Third CT Total Mark: ");
        scanf("%f", &CT3_Total);

        printf("Inter Your Third CT Mark: ");
        scanf("%f", &CT3_Mark);

        printf("Inter Your Mid Mark: ");
        scanf("%f", & Mid_Mark);

        printf("Inter Your Final Mark: ");
        scanf("%f", & Final_Mark);

        CT1 = (CT1_Mark / CT1_Total) * 20 ;
        CT2 = (CT2_Mark / CT2_Total) * 20 ;
        CT3 = (CT3_Mark / CT3_Total) * 20 ;

        if (CT1> CT2 & CT2> CT3)
        {
            CT_Mark = (CT1 + CT2) / 2;
        }
        else if (CT1> CT3 & CT3> CT2)
        {
            CT_Mark = (CT1 + CT3) / 2;
        }
        else{
            CT_Mark = (CT2 + CT3) / 2;
        }

        Total = Attendance_Mark + CT_Mark + Mid_Mark + Final_Mark;

        printf("Total Marks: %.2f", Total);

    }
    else
    {
        printf("You are not eligable for exam");
    }

    return 0;
}
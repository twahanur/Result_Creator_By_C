#include <stdio.h>
int main()
{

    // input variables name
    int class_No, attendance_No, CT1_Total, CT1_Mark, CT2_Total, CT2_Mark, CT3_Total, CT3_Mark, Mid_Total, Mid_mark, Final_Total, Final_mark, Mid, Final;
    float attendance_Percentage, attendance_marks, CT1, CT2, CT3, CT_Mark, Total_Marks;

    //-----------------------!---------------------------//

    // Input display

    // Attendance input values
    printf("Inter No Of Class:");
    scanf("%d", &class_No);
    printf("\nInter No Of Attendance:");
    scanf("%d", &attendance_No);

    //-----------------------!---------------------------//

    // Processing variables

    // checking attendance_Percentage
    attendance_Percentage = ((float)attendance_No / class_No) * 100;

    if (attendance_Percentage > 60)
    {
        // CT Marks Input

        // CT1
        printf("\nInter The Number Of First Class Test Total Marks:");
        scanf("%d", &CT1_Total);
        printf("\nInter The Number Of First Class Test Marks You Got:");
        scanf("%d", &CT1_Mark);

        // CT2
        printf("\nInter The Number Of Second Class Test Total Marks:");
        scanf("%d", &CT2_Total);
        printf("\nInter The Number Of Second Class Test Marks You Got:");
        scanf("%d", &CT2_Mark);

        // CT3
        printf("\nInter The Number Of Third Class Test Total Marks:");
        scanf("%d", &CT3_Total);
        printf("\nInter The Number Of Third Class Test Marks You Got:");
        scanf("%d", &CT3_Mark);

        //  MID Marks
        printf("\nInter The Number Of Total MID Marks:");
        scanf("%d", &Mid_Total);
        printf("\nInter The Number Of MID Marks you Got:");
        scanf("%d", &Mid_mark);
        //  Final Marks
        printf("\nInter The Number Of Final Marks (out of 40):");
        scanf("%d", &Final_Total);
        printf("\nInter The Number Of Final Marks (out of 40):");
        scanf("%d", &Final_mark);

        // Attendance Mark Calculation
        if (attendance_Percentage > 90)
        {
            attendance_marks = 10;
        }
        else
        {
            attendance_marks = (float)(((attendance_Percentage - 60) * 4) / 30) + 6;
        }

        // Class Test mark 20 figure convert
        // CT2
        CT1 = (CT1_Mark / CT1_Total) * 20;

        // CT2
        CT2 = (CT2_Mark / CT2_Total) * 20;

        // CT3
        CT3 = (CT3_Mark / CT3_Total) * 20;

        // Class Test Best Two Marks find and average

        if (CT1 > CT2 && CT2 > CT3)
        {
            CT_Mark = (CT1 + CT2) / 2;
        }
        else if (CT1 > CT3 && CT3 > CT2)
        {
            CT_Mark = (CT1 + CT3) / 2;
        }
        else
        {
            CT_Mark = (CT2 + CT3) / 2;
        }

        // Mid mark Calculate out of 30
            Mid = (Mid_mark / Mid_Total) * 30;
        // Final mark Calculate out of 30
            Final = (Final_mark / Final_Total) * 40;
        // total mark
        Total_Marks = attendance_marks + CT_Mark + Final + Mid;
        printf("\n\n\n\n Your Total Mark Is: %.2f", Total_Marks);
        // Grade Point Count
        if (Total_Marks >= 80)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT A+ (4.00)");
        }
        else if (Total_Marks >= 75)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT A (3.75)");
        }
        else if (Total_Marks >= 70)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT A- (3.50)");
        }
        else if (Total_Marks >= 65)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT B+ (3.25)");
        }
        else if (Total_Marks >= 60)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT B (3.00)");
        }
        else if (Total_Marks >= 55)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT B- (2.75)");
        }
        else if (Total_Marks >= 50)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT C+ (2.50)");
        }
        else if (Total_Marks >= 45)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT C (2.25)");
        }
        else if (Total_Marks >= 40)
        {
            printf("\nCONGRATULATIONS YOU HAVE GOT D (2.00)");
        }
        else if (Total_Marks < 40)
        {
            printf("\nYOU HAVE GOT F\n You Have To Do Hard Work");
        }
        printf("\n Your AT Is: %.2f", attendance_marks);
    }

    else
    {
        printf("\n You are Not Eligible");
    }

    //-----------------------!---------------------------//

    return 0;
}

#include<stdio.h>

int stringToNumber(char arr[]) {
    int number = 0;
    for( int i = 0; arr[i] != '\0'; i++) {
        number = number * 10 + (arr[i] - '0');
    }
    return number;
}

int main() {
    int size = 20;
    char dateString[size];
    char date[size];
    char month[size];
    char yearOuter[size];
    char yearInner[size];
    int i, j;
    printf("\n\nEnter the date i a single line: ( DD-MM-YYYY / DD.MM.YYYY / DD_MM_YYYY ) \n\n");
    scanf("%[^\n]s",dateString);
    printf("\nThe entered date is : \n");
    printf("\n%s\n",dateString);
    j = 0;
    for(i=0; i<2; i++) {
        date[i] = dateString[j];
        j++;
    }
    date[i] = '\0';
    j = 3;
    for(i=0; i<2; i++) {

        month[i] = dateString[j];
        j++;
    }

    month[i] = '\0';


    j = 6;
    for(i=0; i<2; i++) {

        yearOuter[i] = dateString[j];
        j++;
    }

    yearOuter[i] = '\0';


    j = 8;
    for(i=0; i<2; i++) {

        yearInner[i] = dateString[j];
        j++;
    }

    yearInner[i] = '\0';
    int k = stringToNumber(date);
    int m = stringToNumber(month);
    int c = stringToNumber(yearOuter);
    int d = stringToNumber(yearInner);

    printf("\nDate : %d\n",k);
    printf("\nMonth : %d\n",m);
    printf("\nYear: %d%d\n",c,d);

    if ( m >= 3 ) {
        m = m - 2;
    } else {
        m = m + 10;
    }
    int f = k + (int)((13*m-1)/5) + d + (int)(d/4) + (int)(c/4) - (2 * c);
    char array[7][10] =  { "Sunday", "Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday" } ;
    printf("\nResult:\n\n\nIt was %s on %s\n\n",array[f%7],dateString);
}












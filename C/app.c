#include<stdio.h>
#include<math.h>

int stringToNumber(char arr[]) {
    int number = 0;
    for( int i = 0; arr[i] != '\0'; i++) {
        number = number * 10 + (arr[i] - '0');
    }
    return number;
}

int dayofweek(int d, int m, int y) {
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    if(m < 3) {
        y--;
    }
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main() {
    int size = 20;
    char dateString[size];
    char date[size];
    char month[size];
    char year[size];
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
    for(i=0; i<4; i++) {

        year[i] = dateString[j];
        j++;
    }

    year[i] = '\0';




    int d = stringToNumber(date);
    int m = stringToNumber(month);
    int y = stringToNumber(year);

    int ind = dayofweek(d,m,y);

    printf("\nDate : %d\n",d);
    printf("\nMonth : %d\n",m);
    printf("\nYear: %d\n",y);


    char array[7][10] =  { "Sunday", "Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday" } ;

    printf("\nResult:\n\n\nIt was %s on %s\n\n",array[ind],dateString);
}












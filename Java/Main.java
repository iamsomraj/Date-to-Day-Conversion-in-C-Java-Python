import java.util.*;

class Dayname {
  String dateString;

  Dayname(String input) {
    this.dateString = input;
  }

  public static int dayOfWeek(int d, int m, int y) {
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    if (m < 3) {
      y = y - 1;
    }
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
  }

  public void getDay() {
    int d = Integer.parseInt(this.dateString.substring(0, 2));
    int m = Integer.parseInt(this.dateString.substring(3, 5));
    int y = Integer.parseInt(this.dateString.substring(6));
    System.out.println("\nDate: \n" + d);
    System.out.println("\nMonth: \n" + m);
    System.out.printf("\nYear: %d\n", y);
    int index = dayOfWeek(d, m, y);
    String days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    System.out.println("\nResult:\n");
    System.out.printf("\nIt was %s on %s\n", days[index], this.dateString);

  }
}

/**
 * Main
 */
public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("\nEnter the date in a single line: ( DD-MM-YYYY or DD.MM.YYYY or DD/MM/YYYY) \n");
    String str = sc.nextLine();
    Dayname date = new Dayname(str);
    date.getDay();
  }
}
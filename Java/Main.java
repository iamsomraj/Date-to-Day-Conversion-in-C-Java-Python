import java.util.*;

class Dayname {
  String dateString;

  Dayname(String input) {
    this.dateString = input;
  }

  public void getDay() {
    int k = Integer.parseInt(this.dateString.substring(0, 2));
    int m = Integer.parseInt(this.dateString.substring(3, 5));
    int c = Integer.parseInt(this.dateString.substring(6, 8));
    int d = Integer.parseInt(this.dateString.substring(8));
    System.out.println("\nDate: \n" + k);
    System.out.println("\nMonth: \n" + m);
    System.out.printf("\nYear: %d%d\n", c, d);
    if (m >= 3) {
      m = m - 2;
    } else {
      m = m + 10;
    }
    int f = k + (int) ((13 * m - 1) / 5) + d + (int) (d / 4) + (int) (c / 4) - (2 * c);

    String days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    System.out.println("\nResult:\n");
    System.out.printf("\nIt was %s on %s\n", days[f % 7], this.dateString);

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
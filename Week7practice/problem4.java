
class Locker {

    private String combinationCode;
    private final int lockerNumber;

    Locker(int number, String code) {
        lockerNumber = number;
        combinationCode = code;
    }

    boolean changeCode(String currentCode, String newCode) {

        if (combinationCode.equals(currentCode)) {
            combinationCode = newCode;
            return true;
        }

        return false;
    }
}

public class P4 {
    public static void main(String[] args) {

        Locker l = new Locker(101, "1234");

        if (l.changeCode("1234", "5678")) {
            System.out.println("Code changed successfully");
        }

        if (!l.changeCode("0000", "9999")) {
            System.out.println("Change rejected, code unchanged");
        }
    }
}

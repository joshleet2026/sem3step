
class PiggyBank {

    private double savings;
    private final String bankId;

    PiggyBank(String id) {
        bankId = id;
        savings = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            savings += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > savings || amount <= 0) {
            System.out.println("Withdrawal rejected");
        }
        else {
            savings -= amount;
        }
    }

    double getSavings() {
        return savings;
    }
}

public class P1 {
    public static void main(String[] args) {

        PiggyBank pb = new PiggyBank("PB-1");

        pb.deposit(100);
        System.out.println("Savings: " + pb.getSavings());

        pb.withdraw(30);
        System.out.println("Savings: " + pb.getSavings());

        pb.withdraw(500);
        System.out.println("Final Savings: " + pb.getSavings());
    }
}

class cashRegister
{
    public:
        int currentBalance();
            //Function to show the current balance in the Cash Register.
            //Post-condition: The value of cashOnHand is returned.

        void acceptAmount(int amountIn);
            //Function to receive the amount deposited by the customer
            //and update the in the register.
            //Post-condition: cashOnHand = cashOnHand + amountIn.

        cashRegister(int cashIn = 500);
            //Constructor to set the cash in the register to a specific amount.
            //Post-Condition: cashOnHand = cashIn
            //If no value is specified when object is declared,
            //the default value assigned to cashOnHand is 500.

    private:
        int cashOnHand;
};
